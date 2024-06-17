#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "user.h"
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ticketMachine = TicketMachine::getInstance();
    connect(ticketMachine, &TicketMachine::loginResult, this, &LoginWindow::handleLoginResult);
    connect(ticketMachine, &TicketMachine::registerResult, this, &LoginWindow::handleRegisterResult);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_loginButton_clicked()
{
    QString username = ui->usernameLineEdit1->text();
    QString password = ui->passwordLineEdit1->text();
    ticketMachine->login(username, password);
}

void LoginWindow::on_registerButton_clicked()
{
    QString username = ui->usernameLineEdit2->text();
    QString password = ui->passwordLineEdit2->text();
    ticketMachine->registerUser(username, password);
}

void LoginWindow::handleLoginResult(bool success, const QString& message)
{
    if (success) {
        if (ticketMachine->getCurrentUser()->getUsername() == "Admin") {
            adminWindow = new AdminWindow(this);
            adminWindow->show();
        } else {
            ticketPurchaseWindow = new TicketPurchaseWindow(this);
            connect(ticketPurchaseWindow, &TicketPurchaseWindow::logoutSignal, this, &LoginWindow::handleLogout);
            ticketPurchaseWindow->show();
        }
        this->hide();
    } else {
        QMessageBox::warning(this, "Login", message);
    }
}

void LoginWindow::handleRegisterResult(bool success, const QString& message)
{
    if (success) {
        QMessageBox::information(this, "Registration", message);
    } else {
        QMessageBox::warning(this, "Registration", message);
    }
}

void LoginWindow::handleLogout()
{
    ticketMachine->logout();
    this->show();
}
