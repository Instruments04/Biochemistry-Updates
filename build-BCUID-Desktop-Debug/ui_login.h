/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QFrame *frame;
    QLabel *LabName_Lbl;
    QLabel *UserName_Lbl;
    QLineEdit *LabName;
    QLineEdit *UserName;
    QPushButton *Login_Btn;
    QLabel *User_Login;
    QPushButton *LabName_Btn;
    QPushButton *UserName_Btn;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(800, 480);
        Login->setStyleSheet(QStringLiteral("background-color: #f4f4fc;"));
        frame = new QFrame(Login);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(120, 60, 561, 361));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        LabName_Lbl = new QLabel(frame);
        LabName_Lbl->setObjectName(QStringLiteral("LabName_Lbl"));
        LabName_Lbl->setGeometry(QRect(120, 120, 141, 35));
        QFont font;
        font.setFamily(QStringLiteral("Liberation Sans"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        LabName_Lbl->setFont(font);
        UserName_Lbl = new QLabel(frame);
        UserName_Lbl->setObjectName(QStringLiteral("UserName_Lbl"));
        UserName_Lbl->setGeometry(QRect(120, 200, 160, 35));
        UserName_Lbl->setFont(font);
        LabName = new QLineEdit(frame);
        LabName->setObjectName(QStringLiteral("LabName"));
        LabName->setGeometry(QRect(310, 120, 181, 40));
        QFont font1;
        font1.setPointSize(14);
        LabName->setFont(font1);
        UserName = new QLineEdit(frame);
        UserName->setObjectName(QStringLiteral("UserName"));
        UserName->setGeometry(QRect(310, 200, 181, 40));
        UserName->setFont(font1);
        Login_Btn = new QPushButton(frame);
        Login_Btn->setObjectName(QStringLiteral("Login_Btn"));
        Login_Btn->setGeometry(QRect(340, 280, 151, 51));
        QFont font2;
        font2.setFamily(QStringLiteral("Liberation Sans"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        Login_Btn->setFont(font2);
        Login_Btn->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background-color: rgb(12, 68, 145);\n"
" border: 1px solid black;\n"
"     border-radius: 10px;\n"
"color: rgb(255, 255, 255);\n"
"}"));
        User_Login = new QLabel(frame);
        User_Login->setObjectName(QStringLiteral("User_Login"));
        User_Login->setGeometry(QRect(200, 10, 201, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Liberation Sans"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        User_Login->setFont(font3);
        User_Login->setStyleSheet(QStringLiteral("border : none ;"));
        LabName_Btn = new QPushButton(frame);
        LabName_Btn->setObjectName(QStringLiteral("LabName_Btn"));
        LabName_Btn->setGeometry(QRect(310, 120, 181, 41));
        LabName_Btn->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));
        UserName_Btn = new QPushButton(frame);
        UserName_Btn->setObjectName(QStringLiteral("UserName_Btn"));
        UserName_Btn->setGeometry(QRect(310, 200, 181, 41));
        UserName_Btn->setStyleSheet(QStringLiteral("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(0,0,0,0))"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", nullptr));
        LabName_Lbl->setText(QApplication::translate("Login", "LAB NAME", nullptr));
        UserName_Lbl->setText(QApplication::translate("Login", "USER NAME", nullptr));
        Login_Btn->setText(QApplication::translate("Login", "LOGIN", nullptr));
        User_Login->setText(QApplication::translate("Login", "USER LOGIN ", nullptr));
        LabName_Btn->setText(QString());
        UserName_Btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
