/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QPushButton *deleteUserButton;
    QPushButton *deleteTrainButton;
    QPushButton *pushButton_logout;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QListView *usersListView;
    QLabel *label_2;
    QLabel *label;
    QListView *trainsListView;

    void setupUi(QWidget *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName("AdminWindow");
        AdminWindow->resize(500, 400);
        AdminWindow->setMinimumSize(QSize(500, 400));
        AdminWindow->setMaximumSize(QSize(500, 400));
        deleteUserButton = new QPushButton(AdminWindow);
        deleteUserButton->setObjectName("deleteUserButton");
        deleteUserButton->setGeometry(QRect(90, 320, 125, 25));
        deleteUserButton->setMinimumSize(QSize(125, 25));
        deleteUserButton->setMaximumSize(QSize(125, 25));
        deleteTrainButton = new QPushButton(AdminWindow);
        deleteTrainButton->setObjectName("deleteTrainButton");
        deleteTrainButton->setGeometry(QRect(300, 320, 100, 25));
        deleteTrainButton->setMinimumSize(QSize(100, 25));
        deleteTrainButton->setMaximumSize(QSize(100, 25));
        pushButton_logout = new QPushButton(AdminWindow);
        pushButton_logout->setObjectName("pushButton_logout");
        pushButton_logout->setGeometry(QRect(10, 360, 100, 25));
        pushButton_logout->setMinimumSize(QSize(100, 25));
        pushButton_logout->setMaximumSize(QSize(100, 25));
        gridLayoutWidget = new QWidget(AdminWindow);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(50, 20, 406, 291));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        usersListView = new QListView(gridLayoutWidget);
        usersListView->setObjectName("usersListView");
        usersListView->setMinimumSize(QSize(200, 250));
        usersListView->setMaximumSize(QSize(200, 250));

        gridLayout->addWidget(usersListView, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        trainsListView = new QListView(gridLayoutWidget);
        trainsListView->setObjectName("trainsListView");
        trainsListView->setMinimumSize(QSize(200, 250));
        trainsListView->setMaximumSize(QSize(200, 250));

        gridLayout->addWidget(trainsListView, 1, 1, 1, 1);


        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QWidget *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "Panel Administratora", nullptr));
        deleteUserButton->setText(QCoreApplication::translate("AdminWindow", "Usu\305\204 u\305\274ytkownika", nullptr));
        deleteTrainButton->setText(QCoreApplication::translate("AdminWindow", "Usu\305\204 poci\304\205g", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("AdminWindow", "Wy\305\202\304\205cz", nullptr));
        label_2->setText(QCoreApplication::translate("AdminWindow", "Lista poci\304\205g\303\263w", nullptr));
        label->setText(QCoreApplication::translate("AdminWindow", "Lista u\305\274ytkownik\303\263w", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
