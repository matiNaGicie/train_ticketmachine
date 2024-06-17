#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include "ticketmachine.h"

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();

signals:
    void logoutSignal();


private slots:
    void on_deleteUserButton_clicked();
    void on_deleteTrainButton_clicked();
    void on_pushButton_logout_clicked();
    void loadUsers();
    void loadTrains();

private:
    Ui::AdminWindow *ui;
    TicketMachine *ticketMachine;
};

#endif
