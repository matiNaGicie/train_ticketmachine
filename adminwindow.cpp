#include "adminwindow.h"
#include "train.h"
#include "ui_adminwindow.h"
#include "user.h"
#include <QStringListModel>
#include <QMessageBox>
#include <QStringList>

AdminWindow::AdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
    ticketMachine = TicketMachine::getInstance();
    loadUsers();
    loadTrains();
}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::loadUsers()
{
    QStringList usersList;
    for (User* user : ticketMachine->getUsers()) {
        usersList.append(user->getUsername());
    }
    QStringListModel* model = new QStringListModel(usersList);
    ui->usersListView->setModel(model);
}

void AdminWindow::loadTrains()
{
    QStringList trainsList;
    for (Train* train : ticketMachine->getTrains()) {
        trainsList.append(train->getName());
    }
    QStringListModel* model = new QStringListModel(trainsList);
    ui->trainsListView->setModel(model);
}

void AdminWindow::on_deleteUserButton_clicked()
{
    QModelIndex index = ui->usersListView->currentIndex();
    if (!index.isValid()) return;

    QString username = index.data().toString();
    if (ticketMachine->deleteUser(username)) {
        loadUsers();
        QMessageBox::information(this, "Success", "User deleted successfully.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to delete user.");
    }
}

void AdminWindow::on_deleteTrainButton_clicked()
{
    QModelIndex index = ui->trainsListView->currentIndex();
    if (!index.isValid()) return;

    QString trainName = index.data().toString();
    if (ticketMachine->deleteTrain(trainName)) {
        loadTrains();
        QMessageBox::information(this, "Success", "Train deleted successfully.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to delete train.");
    }
}

void AdminWindow::on_pushButton_logout_clicked()
{
    ticketMachine->logout();
    emit logoutSignal();
    close();
}
