// #include "mainwindow.h"
// #include "ui_mainwindow.h"

// MainWindow::MainWindow(QWidget *parent) :
//     QMainWindow(parent),
//     ui(new Ui::MainWindow)
// {
//     ui->setupUi(this);

//     // Initialize TicketMachine (assuming it's a singleton or injected dependency)
//     ticketMachine = TicketMachine::getInstance(); // Example method to get singleton instance

//     // Example: Populate start and end station combos from ticket machine
//     QStringList stations = ticketMachine->getStations();
//     ui->startStationCombo->addItems(stations);
//     ui->endStationCombo->addItems(stations);
// }

// MainWindow::~MainWindow()
// {
//     delete ui;
// }

// void MainWindow::on_logoutButton_clicked()
// {
//     ticketMachine->logout();
//     close(); // Close main window upon logout
//     // Optionally emit signal or navigate back to login/register window
// }

// void MainWindow::on_purchaseTicketButton_clicked()
// {
//     QString startStation = ui->startStationCombo->currentText();
//     QString endStation = ui->endStationCombo->currentText();
//     QString seat = ui->seatEdit->text();

//     // Example: Purchase ticket from TicketMachine
//     bool success = ticketMachine->purchaseTicket(startStation, endStation, seat);
//     if (success) {
//         QMessageBox::information(this, "Ticket Purchase", "Ticket purchased successfully.");
//         // Optionally update UI or show confirmation
//     } else {
//         QMessageBox::warning(this, "Ticket Purchase", "Failed to purchase ticket.");
//         // Optionally handle failure
//     }
// }

// void MainWindow::on_viewTicketsButton_clicked()
// {
//     // Example: Show tickets in a new window or dialog
//     // Example code omitted for brevity
//     QMessageBox::information(this, "View Tickets", "Placeholder for viewing tickets.");
// }
