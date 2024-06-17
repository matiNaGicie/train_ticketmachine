/********************************************************************************
** Form generated from reading UI file 'loginform.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFORM_H
#define UI_LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginForm
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *passwordEdit2;
    QLabel *label_2;
    QLineEdit *usernameEdit1;
    QLineEdit *usernameEdit2;
    QPushButton *registerButton;
    QLabel *label;
    QLineEdit *passwordEdit1;
    QPushButton *loginButton;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *LoginForm)
    {
        if (LoginForm->objectName().isEmpty())
            LoginForm->setObjectName("LoginForm");
        LoginForm->resize(400, 300);
        gridLayoutWidget = new QWidget(LoginForm);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(-1, -1, 401, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        passwordEdit2 = new QLineEdit(gridLayoutWidget);
        passwordEdit2->setObjectName("passwordEdit2");

        gridLayout->addWidget(passwordEdit2, 1, 3, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(50, 0));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        usernameEdit1 = new QLineEdit(gridLayoutWidget);
        usernameEdit1->setObjectName("usernameEdit1");

        gridLayout->addWidget(usernameEdit1, 0, 1, 1, 1);

        usernameEdit2 = new QLineEdit(gridLayoutWidget);
        usernameEdit2->setObjectName("usernameEdit2");

        gridLayout->addWidget(usernameEdit2, 0, 3, 1, 1);

        registerButton = new QPushButton(gridLayoutWidget);
        registerButton->setObjectName("registerButton");

        gridLayout->addWidget(registerButton, 2, 3, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        passwordEdit1 = new QLineEdit(gridLayoutWidget);
        passwordEdit1->setObjectName("passwordEdit1");

        gridLayout->addWidget(passwordEdit1, 1, 1, 1, 1);

        loginButton = new QPushButton(gridLayoutWidget);
        loginButton->setObjectName("loginButton");

        gridLayout->addWidget(loginButton, 2, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(50, 0));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 2, 1, 1);


        retranslateUi(LoginForm);

        QMetaObject::connectSlotsByName(LoginForm);
    } // setupUi

    void retranslateUi(QWidget *LoginForm)
    {
        LoginForm->setWindowTitle(QCoreApplication::translate("LoginForm", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("LoginForm", "Has\305\202o", nullptr));
        registerButton->setText(QCoreApplication::translate("LoginForm", "Register", nullptr));
        label->setText(QCoreApplication::translate("LoginForm", "Login", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginForm", "Login", nullptr));
        label_3->setText(QCoreApplication::translate("LoginForm", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("LoginForm", "Has\305\202o", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginForm: public Ui_LoginForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFORM_H
