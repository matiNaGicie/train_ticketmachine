/********************************************************************************
** Form generated from reading UI file 'ticketpurchasewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETPURCHASEWINDOW_H
#define UI_TICKETPURCHASEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicketPurchaseWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QComboBox *comboBox_startStation;
    QComboBox *comboBox_endStation;
    QLabel *label_2;
    QLineEdit *lineEdit_seat;
    QListView *ticketsListView;
    QPushButton *pushButton_viewTickets;
    QPushButton *pushButton_purchase;
    QLabel *label_5;
    QPushButton *pushButton_logout;

    void setupUi(QWidget *TicketPurchaseWindow)
    {
        if (TicketPurchaseWindow->objectName().isEmpty())
            TicketPurchaseWindow->setObjectName("TicketPurchaseWindow");
        TicketPurchaseWindow->resize(700, 400);
        TicketPurchaseWindow->setMinimumSize(QSize(700, 400));
        TicketPurchaseWindow->setMaximumSize(QSize(700, 400));
        gridLayoutWidget = new QWidget(TicketPurchaseWindow);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 50, 347, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        comboBox_startStation = new QComboBox(gridLayoutWidget);
        comboBox_startStation->setObjectName("comboBox_startStation");
        comboBox_startStation->setMinimumSize(QSize(200, 25));
        comboBox_startStation->setMaximumSize(QSize(200, 25));

        gridLayout->addWidget(comboBox_startStation, 1, 1, 1, 1);

        comboBox_endStation = new QComboBox(gridLayoutWidget);
        comboBox_endStation->setObjectName("comboBox_endStation");
        comboBox_endStation->setMinimumSize(QSize(200, 25));
        comboBox_endStation->setMaximumSize(QSize(200, 25));

        gridLayout->addWidget(comboBox_endStation, 2, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_seat = new QLineEdit(gridLayoutWidget);
        lineEdit_seat->setObjectName("lineEdit_seat");
        lineEdit_seat->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(lineEdit_seat, 3, 1, 1, 1);

        ticketsListView = new QListView(TicketPurchaseWindow);
        ticketsListView->setObjectName("ticketsListView");
        ticketsListView->setGeometry(QRect(380, 90, 301, 243));
        pushButton_viewTickets = new QPushButton(TicketPurchaseWindow);
        pushButton_viewTickets->setObjectName("pushButton_viewTickets");
        pushButton_viewTickets->setGeometry(QRect(480, 350, 81, 21));
        pushButton_purchase = new QPushButton(TicketPurchaseWindow);
        pushButton_purchase->setObjectName("pushButton_purchase");
        pushButton_purchase->setGeometry(QRect(140, 180, 100, 25));
        pushButton_purchase->setMinimumSize(QSize(100, 25));
        pushButton_purchase->setMaximumSize(QSize(100, 25));
        label_5 = new QLabel(TicketPurchaseWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(490, 60, 100, 25));
        label_5->setMinimumSize(QSize(100, 25));
        label_5->setMaximumSize(QSize(100, 25));
        label_5->setAlignment(Qt::AlignCenter);
        pushButton_logout = new QPushButton(TicketPurchaseWindow);
        pushButton_logout->setObjectName("pushButton_logout");
        pushButton_logout->setGeometry(QRect(10, 360, 100, 25));
        pushButton_logout->setMinimumSize(QSize(100, 25));
        pushButton_logout->setMaximumSize(QSize(100, 25));

        retranslateUi(TicketPurchaseWindow);

        QMetaObject::connectSlotsByName(TicketPurchaseWindow);
    } // setupUi

    void retranslateUi(QWidget *TicketPurchaseWindow)
    {
        TicketPurchaseWindow->setWindowTitle(QCoreApplication::translate("TicketPurchaseWindow", "Biletomat", nullptr));
        label_3->setText(QCoreApplication::translate("TicketPurchaseWindow", "Stacja ko\305\204cowa", nullptr));
        label->setText(QCoreApplication::translate("TicketPurchaseWindow", "Wybierz bilet", nullptr));
        label_4->setText(QCoreApplication::translate("TicketPurchaseWindow", "Miejsce", nullptr));
        label_2->setText(QCoreApplication::translate("TicketPurchaseWindow", "Stacja pocz\304\205tkowa", nullptr));
        pushButton_viewTickets->setText(QCoreApplication::translate("TicketPurchaseWindow", "Sprawd\305\272", nullptr));
        pushButton_purchase->setText(QCoreApplication::translate("TicketPurchaseWindow", "Kup", nullptr));
        label_5->setText(QCoreApplication::translate("TicketPurchaseWindow", "Twoje bilety", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("TicketPurchaseWindow", "Wyloguj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicketPurchaseWindow: public Ui_TicketPurchaseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETPURCHASEWINDOW_H
