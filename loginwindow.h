#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include "ticketmachine.h"
#include "ticketpurchasewindow.h"
#include "adminwindow.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();

signals:
    void logoutSignal();

private slots:
    void on_loginButton_clicked();
    void on_registerButton_clicked();
    void handleLoginResult(bool success, const QString& message);
    void handleRegisterResult(bool success, const QString& message);
    void handleLogout();

private:
    Ui::LoginWindow *ui;
    TicketPurchaseWindow *ticketPurchaseWindow;
    AdminWindow *adminWindow;
    TicketMachine *ticketMachine;
};

#endif
