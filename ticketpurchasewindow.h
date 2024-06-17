#ifndef TICKETPURCHASEWINDOW_H
#define TICKETPURCHASEWINDOW_H

#include <QMainWindow>
#include "ticketmachine.h"

namespace Ui {
class TicketPurchaseWindow;
}

class TicketPurchaseWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TicketPurchaseWindow(QWidget *parent = nullptr);
    ~TicketPurchaseWindow();

signals:
    void logoutSignal();

private slots:
    void on_pushButton_purchase_clicked();
    void on_pushButton_logout_clicked();
    void on_pushButton_viewTickets_clicked();

private:
    Ui::TicketPurchaseWindow *ui;
    TicketMachine* ticketMachine;
};

#endif
