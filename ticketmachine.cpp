#include "ticketmachine.h"
#include "user.h"
#include "train.h"
#include <QDebug>
#include <QDir>

TicketMachine* TicketMachine::instance = nullptr;

TicketMachine::TicketMachine()
{
    loadUsersFromFile();
    loadTrainsFromFile(trainsFilePath);
}

TicketMachine::~TicketMachine()
{
    saveUsersToFile();
    saveTrainsToFile();


    qDeleteAll(users);
    users.clear();

    qDeleteAll(trains);
    trains.clear();
}

TicketMachine* TicketMachine::getInstance()
{
    if (!instance) {
        instance = new TicketMachine();
    }
    return instance;
}

void TicketMachine::registerUser(const QString& username, const QString& password)
{
    for (User* user : users) {
        if (user->getUsername() == username) {
            emit registerResult(false, "User already exists.");
            return;
        }
    }


    User* newUser = new User(username, password);
    users.append(newUser);
    emit registerResult(true, "Registration successful. Please log in.");

    saveUsersToFile();
}

bool TicketMachine::login(const QString& username, const QString& password)
{
    for (User* user : users) {
        if (user->getUsername() == username && user->getPassword() == password) {
            currentUser = user;
            emit loginResult(true, "Login successful.");
            return true;
        }
    }

    emit loginResult(false, "Invalid username or password.");
    return false;
}

void TicketMachine::logout()
{
    currentUser = nullptr;
}

bool TicketMachine::purchaseTicket(const QString& startStation, const QString& endStation, const QString& seat)
{
    for (Train* train : trains) {
        if (train->getStartStation() == startStation && train->getEndStation() == endStation) {
            if (currentUser) {
                currentUser->addTicket(train, seat, startStation, endStation);
                return true;
            }
        }
    }

    return false;
}

QStringList TicketMachine::getStations() const
{
    QStringList stations;
    for (const Train* train : trains) {
        if (!stations.contains(train->getStartStation())) {
            stations.append(train->getStartStation());
        }
        if (!stations.contains(train->getEndStation())) {
            stations.append(train->getEndStation());
        }
    }
    return stations;
}

QVector<Train*> TicketMachine::getTrains() const
{
    return trains;
}

User* TicketMachine::getCurrentUser() const
{
    return currentUser;
}

QStringList TicketMachine::getUserTickets() const
{
    if (currentUser) {
        return currentUser->getTickets();
    }
    return QStringList();
}

void TicketMachine::loadTrainsFromFile(const QString& filename)
{
    QDir dir;
    QString filePath = dir.absoluteFilePath(filename);

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open trains file for reading:" << file.errorString();
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(",");
        if (parts.size() == 6) {
            QString name = parts[0];
            QString startStation = parts[1];
            QString endStation = parts[2];
            QString departureTime = parts[3];
            QString arrivalTime = parts[4];
            double price = parts[5].toDouble();

            Train* train = new Train(name, startStation, endStation, departureTime, arrivalTime, price);
            trains.append(train);
        }
    }

    file.close();
}

void TicketMachine::saveUsersToFile()
{
    QDir dir;
    QString filePath = dir.absoluteFilePath(usersFilePath);

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Failed to open users file for writing:" << file.errorString();
        return;
    }

    QTextStream out(&file);
    for (User* user : users) {
        out << user->getUsername() << " " << user->getPassword() << "\n";
    }

    file.close();
}

void TicketMachine::loadUsersFromFile()
{
    QDir dir;
    QString filePath = dir.absoluteFilePath(usersFilePath);

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open users file for reading:" << file.errorString();
        return;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(" ");
        if (parts.size() == 2) {
            QString username = parts[0];
            QString password = parts[1];
            User* user = new User(username, password);
            users.append(user);
        }
    }

    file.close();
}

void TicketMachine::saveTrainsToFile()
{
    QDir dir;
    QString filePath = dir.absoluteFilePath(trainsFilePath);

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Failed to open trains file for writing:" << file.errorString();
        return;
    }

    QTextStream out(&file);
    for (Train* train : trains) {
        out << train->getName() << "," << train->getStartStation() << "," << train->getEndStation() << ","
            << train->getDepartureTime() << "," << train->getArrivalTime() << "," << train->getPrice() << "\n";
    }

    file.close();
}

QVector<User*> TicketMachine::getUsers() const
{
    return users;
}

bool TicketMachine::deleteUser(const QString& username)
{
    for (int i = 1; i < users.size(); ++i) {
        if (users[i]->getUsername() == username) {
            delete users[i];
            users.remove(i);
            saveUsersToFile();
            return true;
        }
    }
    return false;
}

bool TicketMachine::deleteTrain(const QString& trainName)
{
    for (int i = 0; i < trains.size(); ++i) {
        if (trains[i]->getName() == trainName) {
            delete trains[i];
            trains.remove(i);
            saveTrainsToFile();
            return true;
        }
    }
    return false;
}
