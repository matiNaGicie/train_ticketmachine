#include "ticketpurchasewindow.h"
#include "ui_ticketpurchasewindow.h"
#include "loginwindow.h"
#include "ticketmachine.h"
#include "user.h"
#include <QMessageBox>
#include <QDebug>
#include <QStringListModel>

TicketPurchaseWindow::TicketPurchaseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TicketPurchaseWindow),
    ticketMachine(TicketMachine::getInstance())
{
    ui->setupUi(this);

    QStringList stations = ticketMachine->getStations();
    ui->comboBox_startStation->addItems(stations);
    ui->comboBox_endStation->addItems(stations);
}

TicketPurchaseWindow::~TicketPurchaseWindow()
{
    delete ui;
}

void TicketPurchaseWindow::on_pushButton_purchase_clicked()
{
    QString startStation = ui->comboBox_startStation->currentText();
    QString endStation = ui->comboBox_endStation->currentText();
    QString seat = ui->lineEdit_seat->text();

    if (ticketMachine->purchaseTicket(startStation, endStation, seat)) {
        QMessageBox::information(this, "Success", "Ticket purchased successfully.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to purchase ticket.");
    }
}

void TicketPurchaseWindow::on_pushButton_logout_clicked()
{
    ticketMachine->logout();
    emit logoutSignal();
    close();
}

void TicketPurchaseWindow::on_pushButton_viewTickets_clicked()
{
    User* currentUser = ticketMachine->getCurrentUser();
    if (currentUser) {
        QStringList tickets = currentUser->getTickets();
        QStringListModel* model = new QStringListModel(tickets);
        ui->ticketsListView->setModel(model);
    } else {
        QMessageBox::warning(this, "View Tickets", "No user is currently logged in.");
    }
}
