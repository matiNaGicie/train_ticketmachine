#ifndef TICKETMACHINE_H
#define TICKETMACHINE_H

#include <QObject>
#include <QStringList>
#include <QVector>
#include <QMap>
#include <QFile>
#include <QTextStream>


class User;
class Train;

class TicketMachine : public QObject
{
    Q_OBJECT
public:
    static TicketMachine* getInstance();

    void registerUser(const QString& username, const QString& password);
    bool login(const QString& username, const QString& password);
    void logout();
    bool purchaseTicket(const QString& startStation, const QString& endStation, const QString& seat);
    QStringList getStations() const;
    QVector<Train*> getTrains() const;
    QVector<User*> getUsers() const;
    User* getCurrentUser() const;
    QStringList getUserTickets() const;

    void loadTrainsFromFile(const QString& filename);
    void saveUsersToFile();
    void loadUsersFromFile();
    bool deleteUser(const QString& username);
    bool deleteTrain(const QString& trainName);

signals:
    void loginResult(bool success, const QString& message);
    void registerResult(bool success, const QString& message);

private:
    TicketMachine();
    ~TicketMachine();

    static TicketMachine* instance;

    QVector<User*> users;
    QVector<Train*> trains;
    QString usersFilePath = "C:/Users/PC/Desktop/university/6_sem/oopcpp/biletomat/TicketMachine_11/users.txt"; // Tutaj ustawić dobrą ścieżkę do pliku tekstowego z użytkownikami
    QString trainsFilePath = "C:/Users/PC/Desktop/university/6_sem/oopcpp/biletomat/TicketMachine_11/trains.txt"; // Tutaj ustawić dobrą ścieżkę do pliku tekstowego z pociągami

    User* currentUser = nullptr;

    void saveTrainsToFile();
};

#endif
