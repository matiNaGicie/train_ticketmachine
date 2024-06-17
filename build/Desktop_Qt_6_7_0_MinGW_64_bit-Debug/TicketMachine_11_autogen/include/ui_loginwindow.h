/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *usernameLineEdit2;
    QLineEdit *usernameLineEdit1;
    QLineEdit *passwordLineEdit2;
    QLabel *label_2;
    QLineEdit *passwordLineEdit1;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QPushButton *loginButton;
    QPushButton *registerButton;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(500, 400);
        LoginWindow->setMinimumSize(QSize(500, 400));
        LoginWindow->setMaximumSize(QSize(500, 400));
        gridLayoutWidget = new QWidget(LoginWindow);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 90, 414, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        usernameLineEdit2 = new QLineEdit(gridLayoutWidget);
        usernameLineEdit2->setObjectName("usernameLineEdit2");

        gridLayout->addWidget(usernameLineEdit2, 1, 3, 1, 1);

        usernameLineEdit1 = new QLineEdit(gridLayoutWidget);
        usernameLineEdit1->setObjectName("usernameLineEdit1");

        gridLayout->addWidget(usernameLineEdit1, 1, 1, 1, 1);

        passwordLineEdit2 = new QLineEdit(gridLayoutWidget);
        passwordLineEdit2->setObjectName("passwordLineEdit2");

        gridLayout->addWidget(passwordLineEdit2, 2, 3, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        passwordLineEdit1 = new QLineEdit(gridLayoutWidget);
        passwordLineEdit1->setObjectName("passwordLineEdit1");

        gridLayout->addWidget(passwordLineEdit1, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setMinimumSize(QSize(150, 25));
        label_7->setMaximumSize(QSize(500, 25));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 2, 1, 2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(50, 0));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 2, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 25));
        label_6->setMaximumSize(QSize(800, 25));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 0, 1, 2);

        label_5 = new QLabel(LoginWindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(180, 20, 150, 25));
        label_5->setMinimumSize(QSize(150, 25));
        label_5->setMaximumSize(QSize(150, 25));
        label_5->setAlignment(Qt::AlignCenter);
        loginButton = new QPushButton(LoginWindow);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(90, 320, 100, 25));
        loginButton->setMinimumSize(QSize(100, 25));
        loginButton->setMaximumSize(QSize(100, 25));
        registerButton = new QPushButton(LoginWindow);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(300, 320, 100, 25));
        registerButton->setMinimumSize(QSize(100, 25));
        registerButton->setMaximumSize(QSize(100, 25));

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "Logowanie", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "Has\305\202o:", nullptr));
        label_3->setText(QCoreApplication::translate("LoginWindow", "Login:", nullptr));
        label_7->setText(QCoreApplication::translate("LoginWindow", "Rejestracja", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "Login:", nullptr));
        label_4->setText(QCoreApplication::translate("LoginWindow", "Has\305\202o:", nullptr));
        label_6->setText(QCoreApplication::translate("LoginWindow", "Logowanie", nullptr));
        label_5->setText(QCoreApplication::translate("LoginWindow", "Witamy w biletomacie", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWindow", "Zaloguj si\304\231", nullptr));
        registerButton->setText(QCoreApplication::translate("LoginWindow", "Zarejestruj si\304\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
