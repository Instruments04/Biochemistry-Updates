/********************************************************************************
** Form generated from reading UI file 'virtual_keyboard.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIRTUAL_KEYBOARD_H
#define UI_VIRTUAL_KEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Virtual_Keyboard
{
public:
    QFrame *frame;
    QPushButton *pushButton_135;
    QLineEdit *lineEdit;
    QStackedWidget *stackedWidget_8;
    QWidget *page_17;
    QFrame *frame_24;
    QPushButton *pushButton_21;
    QPushButton *pushButton_33;
    QPushButton *pushButton_46;
    QPushButton *pushButton_45;
    QPushButton *pushButton_14;
    QPushButton *pushButton_35;
    QPushButton *pushButton_31;
    QPushButton *pushButton_32;
    QPushButton *pushButton_39;
    QPushButton *pushButton_15;
    QPushButton *pushButton_43;
    QPushButton *pushButton_40;
    QPushButton *pushButton_28;
    QPushButton *pushButton_22;
    QPushButton *pushButton_19;
    QPushButton *pushButton_50;
    QPushButton *pushButton_37;
    QPushButton *pushButton_30;
    QPushButton *pushButton_18;
    QPushButton *pushButton_42;
    QPushButton *pushButton_16;
    QPushButton *pushButton_38;
    QPushButton *pushButton_13;
    QPushButton *pushButton_34;
    QPushButton *pushButton_27;
    QPushButton *pushButton_49;
    QPushButton *pushButton_47;
    QPushButton *pushButton_41;
    QPushButton *pushButton_29;
    QPushButton *pushButton_44;
    QPushButton *pushButton_48;
    QPushButton *pushButton_20;
    QPushButton *pushButton_36;
    QWidget *page_14;
    QFrame *frame_23;
    QPushButton *pushButton_52;
    QPushButton *pushButton_67;
    QPushButton *pushButton_58;
    QPushButton *pushButton_63;
    QPushButton *pushButton_71;
    QPushButton *pushButton_65;
    QPushButton *pushButton_79;
    QPushButton *pushButton_17;
    QPushButton *pushButton_70;
    QPushButton *pushButton_54;
    QPushButton *pushButton_53;
    QPushButton *pushButton_56;
    QPushButton *pushButton_62;
    QPushButton *pushButton_74;
    QPushButton *pushButton_51;
    QPushButton *pushButton_61;
    QPushButton *pushButton_57;
    QPushButton *pushButton_78;
    QPushButton *pushButton_72;
    QPushButton *pushButton_80;
    QPushButton *pushButton_68;
    QPushButton *pushButton_59;
    QPushButton *pushButton_64;
    QPushButton *pushButton_75;
    QPushButton *pushButton_81;
    QPushButton *pushButton_60;
    QPushButton *pushButton_73;
    QPushButton *pushButton_69;
    QPushButton *pushButton_77;
    QPushButton *pushButton_55;
    QPushButton *pushButton_76;
    QPushButton *pushButton_66;
    QPushButton *pushButton_82;
    QWidget *page_15;
    QFrame *frame_25;
    QPushButton *pushButton_105;
    QPushButton *pushButton_109;
    QPushButton *pushButton_93;
    QPushButton *pushButton_94;
    QPushButton *pushButton_83;
    QPushButton *pushButton_100;
    QPushButton *pushButton_116;
    QPushButton *pushButton_103;
    QPushButton *pushButton_112;
    QPushButton *pushButton_114;
    QPushButton *pushButton_96;
    QPushButton *pushButton_102;
    QPushButton *pushButton_90;
    QPushButton *pushButton_115;
    QPushButton *pushButton_111;
    QPushButton *pushButton_101;
    QPushButton *pushButton_95;
    QPushButton *pushButton_104;
    QPushButton *pushButton_84;
    QPushButton *pushButton_106;
    QPushButton *pushButton_87;
    QPushButton *pushButton_91;
    QPushButton *pushButton_108;
    QPushButton *pushButton_110;
    QPushButton *pushButton_97;
    QPushButton *pushButton_85;
    QPushButton *pushButton_92;
    QPushButton *pushButton_98;
    QPushButton *pushButton_244;
    QPushButton *pushButton_89;
    QPushButton *pushButton_88;
    QPushButton *pushButton_86;
    QPushButton *pushButton_113;
    QPushButton *pushButton_107;
    QPushButton *pushButton_99;
    QWidget *page;
    QFrame *frame_2;
    QPushButton *pushButton_127;
    QPushButton *pushButton_119;
    QPushButton *pushButton_126;
    QPushButton *pushButton_128;
    QPushButton *pushButton_118;
    QPushButton *pushButton_124;
    QPushButton *pushButton_125;
    QPushButton *pushButton_129;
    QPushButton *pushButton_131;
    QPushButton *pushButton_130;
    QPushButton *pushButton_120;
    QPushButton *pushButton_122;
    QPushButton *pushButton_117;
    QPushButton *pushButton_123;
    QPushButton *pushButton_121;
    QToolButton *toolButton_56;

    void setupUi(QDialog *Virtual_Keyboard)
    {
        if (Virtual_Keyboard->objectName().isEmpty())
            Virtual_Keyboard->setObjectName(QStringLiteral("Virtual_Keyboard"));
        Virtual_Keyboard->resize(800, 275);
        Virtual_Keyboard->setStyleSheet(QStringLiteral("background-color: rgb(206, 230, 255);"));
        frame = new QFrame(Virtual_Keyboard);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 800, 275));
        frame->setStyleSheet(QStringLiteral("background-color: #f4f4fc;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_135 = new QPushButton(frame);
        pushButton_135->setObjectName(QStringLiteral("pushButton_135"));
        pushButton_135->setGeometry(QRect(510, 5, 51, 31));
        pushButton_135->setStyleSheet(QLatin1String("border:none;\n"
"background-color: transparent;"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/delline.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_135->setIcon(icon);
        pushButton_135->setIconSize(QSize(35, 35));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(220, 5, 291, 31));
        QFont font;
        font.setPointSize(12);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit->setClearButtonEnabled(false);
        stackedWidget_8 = new QStackedWidget(frame);
        stackedWidget_8->setObjectName(QStringLiteral("stackedWidget_8"));
        stackedWidget_8->setGeometry(QRect(20, 40, 731, 230));
        stackedWidget_8->setStyleSheet(QStringLiteral("background-color: transparent;"));
        page_17 = new QWidget();
        page_17->setObjectName(QStringLiteral("page_17"));
        frame_24 = new QFrame(page_17);
        frame_24->setObjectName(QStringLiteral("frame_24"));
        frame_24->setGeometry(QRect(5, 2, 711, 225));
        frame_24->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"border:1px solid gray;\n"
"}\n"
""));
        frame_24->setFrameShape(QFrame::StyledPanel);
        frame_24->setFrameShadow(QFrame::Raised);
        pushButton_21 = new QPushButton(frame_24);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(120, 60, 61, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Liberation Sans"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_21->setFont(font1);
        pushButton_21->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_33 = new QPushButton(frame_24);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));
        pushButton_33->setGeometry(QRect(570, 5, 61, 50));
        pushButton_33->setFont(font1);
        pushButton_33->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_46 = new QPushButton(frame_24);
        pushButton_46->setObjectName(QStringLiteral("pushButton_46"));
        pushButton_46->setGeometry(QRect(10, 115, 101, 50));
        pushButton_46->setFont(font1);
        pushButton_46->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_45 = new QPushButton(frame_24);
        pushButton_45->setObjectName(QStringLiteral("pushButton_45"));
        pushButton_45->setGeometry(QRect(610, 115, 91, 50));
        pushButton_45->setFont(font1);
        pushButton_45->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_14 = new QPushButton(frame_24);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(80, 5, 61, 50));
        pushButton_14->setFont(font1);
        pushButton_14->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_35 = new QPushButton(frame_24);
        pushButton_35->setObjectName(QStringLiteral("pushButton_35"));
        pushButton_35->setGeometry(QRect(430, 5, 61, 50));
        pushButton_35->setFont(font1);
        pushButton_35->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_31 = new QPushButton(frame_24);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        pushButton_31->setGeometry(QRect(190, 60, 61, 50));
        pushButton_31->setFont(font1);
        pushButton_31->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_32 = new QPushButton(frame_24);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));
        pushButton_32->setGeometry(QRect(400, 60, 61, 50));
        pushButton_32->setFont(font1);
        pushButton_32->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_39 = new QPushButton(frame_24);
        pushButton_39->setObjectName(QStringLiteral("pushButton_39"));
        pushButton_39->setGeometry(QRect(190, 115, 61, 50));
        pushButton_39->setFont(font1);
        pushButton_39->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_15 = new QPushButton(frame_24);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(150, 5, 61, 50));
        pushButton_15->setFont(font1);
        pushButton_15->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_43 = new QPushButton(frame_24);
        pushButton_43->setObjectName(QStringLiteral("pushButton_43"));
        pushButton_43->setGeometry(QRect(400, 115, 61, 50));
        pushButton_43->setFont(font1);
        pushButton_43->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_40 = new QPushButton(frame_24);
        pushButton_40->setObjectName(QStringLiteral("pushButton_40"));
        pushButton_40->setGeometry(QRect(120, 115, 61, 50));
        pushButton_40->setFont(font1);
        pushButton_40->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_28 = new QPushButton(frame_24);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        pushButton_28->setGeometry(QRect(610, 60, 61, 50));
        pushButton_28->setFont(font1);
        pushButton_28->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_22 = new QPushButton(frame_24);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(220, 5, 61, 50));
        pushButton_22->setFont(font1);
        pushButton_22->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_19 = new QPushButton(frame_24);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(330, 60, 61, 50));
        pushButton_19->setFont(font1);
        pushButton_19->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_50 = new QPushButton(frame_24);
        pushButton_50->setObjectName(QStringLiteral("pushButton_50"));
        pushButton_50->setGeometry(QRect(190, 170, 341, 50));
        pushButton_50->setFont(font1);
        pushButton_50->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
" color: white;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_37 = new QPushButton(frame_24);
        pushButton_37->setObjectName(QStringLiteral("pushButton_37"));
        pushButton_37->setGeometry(QRect(290, 5, 61, 50));
        pushButton_37->setFont(font1);
        pushButton_37->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_30 = new QPushButton(frame_24);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setGeometry(QRect(540, 60, 61, 50));
        pushButton_30->setFont(font1);
        pushButton_30->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_18 = new QPushButton(frame_24);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(610, 170, 91, 50));
        pushButton_18->setFont(font1);
        pushButton_18->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_42 = new QPushButton(frame_24);
        pushButton_42->setObjectName(QStringLiteral("pushButton_42"));
        pushButton_42->setGeometry(QRect(330, 115, 61, 50));
        pushButton_42->setFont(font1);
        pushButton_42->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_16 = new QPushButton(frame_24);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(470, 115, 61, 50));
        pushButton_16->setFont(font1);
        pushButton_16->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_38 = new QPushButton(frame_24);
        pushButton_38->setObjectName(QStringLiteral("pushButton_38"));
        pushButton_38->setGeometry(QRect(260, 115, 61, 50));
        pushButton_38->setFont(font1);
        pushButton_38->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_13 = new QPushButton(frame_24);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(10, 5, 61, 50));
        pushButton_13->setFont(font1);
        pushButton_13->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_34 = new QPushButton(frame_24);
        pushButton_34->setObjectName(QStringLiteral("pushButton_34"));
        pushButton_34->setGeometry(QRect(500, 5, 61, 50));
        pushButton_34->setFont(font1);
        pushButton_34->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_27 = new QPushButton(frame_24);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setGeometry(QRect(50, 60, 61, 50));
        pushButton_27->setFont(font1);
        pushButton_27->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_49 = new QPushButton(frame_24);
        pushButton_49->setObjectName(QStringLiteral("pushButton_49"));
        pushButton_49->setGeometry(QRect(120, 170, 61, 50));
        pushButton_49->setFont(font1);
        pushButton_49->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_47 = new QPushButton(frame_24);
        pushButton_47->setObjectName(QStringLiteral("pushButton_47"));
        pushButton_47->setGeometry(QRect(10, 170, 101, 50));
        pushButton_47->setFont(font1);
        pushButton_47->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_41 = new QPushButton(frame_24);
        pushButton_41->setObjectName(QStringLiteral("pushButton_41"));
        pushButton_41->setGeometry(QRect(260, 60, 61, 50));
        pushButton_41->setFont(font1);
        pushButton_41->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_29 = new QPushButton(frame_24);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        pushButton_29->setGeometry(QRect(640, 5, 61, 50));
        pushButton_29->setFont(font1);
        pushButton_29->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_44 = new QPushButton(frame_24);
        pushButton_44->setObjectName(QStringLiteral("pushButton_44"));
        pushButton_44->setGeometry(QRect(540, 115, 61, 50));
        pushButton_44->setFont(font1);
        pushButton_44->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_48 = new QPushButton(frame_24);
        pushButton_48->setObjectName(QStringLiteral("pushButton_48"));
        pushButton_48->setGeometry(QRect(540, 170, 61, 50));
        pushButton_48->setFont(font1);
        pushButton_48->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
" color: white;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_20 = new QPushButton(frame_24);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(470, 60, 61, 50));
        pushButton_20->setFont(font1);
        pushButton_20->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_36 = new QPushButton(frame_24);
        pushButton_36->setObjectName(QStringLiteral("pushButton_36"));
        pushButton_36->setGeometry(QRect(360, 5, 61, 50));
        pushButton_36->setFont(font1);
        pushButton_36->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        stackedWidget_8->addWidget(page_17);
        page_14 = new QWidget();
        page_14->setObjectName(QStringLiteral("page_14"));
        frame_23 = new QFrame(page_14);
        frame_23->setObjectName(QStringLiteral("frame_23"));
        frame_23->setGeometry(QRect(5, 2, 711, 225));
        frame_23->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"border:1px solid gray;\n"
"}\n"
""));
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        pushButton_52 = new QPushButton(frame_23);
        pushButton_52->setObjectName(QStringLiteral("pushButton_52"));
        pushButton_52->setGeometry(QRect(610, 60, 61, 50));
        pushButton_52->setFont(font1);
        pushButton_52->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_67 = new QPushButton(frame_23);
        pushButton_67->setObjectName(QStringLiteral("pushButton_67"));
        pushButton_67->setGeometry(QRect(610, 170, 91, 50));
        pushButton_67->setFont(font1);
        pushButton_67->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_58 = new QPushButton(frame_23);
        pushButton_58->setObjectName(QStringLiteral("pushButton_58"));
        pushButton_58->setGeometry(QRect(570, 5, 61, 50));
        pushButton_58->setFont(font1);
        pushButton_58->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_63 = new QPushButton(frame_23);
        pushButton_63->setObjectName(QStringLiteral("pushButton_63"));
        pushButton_63->setGeometry(QRect(120, 60, 61, 50));
        pushButton_63->setFont(font1);
        pushButton_63->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_71 = new QPushButton(frame_23);
        pushButton_71->setObjectName(QStringLiteral("pushButton_71"));
        pushButton_71->setGeometry(QRect(10, 170, 101, 50));
        pushButton_71->setFont(font1);
        pushButton_71->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_65 = new QPushButton(frame_23);
        pushButton_65->setObjectName(QStringLiteral("pushButton_65"));
        pushButton_65->setGeometry(QRect(120, 115, 61, 50));
        pushButton_65->setFont(font1);
        pushButton_65->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_79 = new QPushButton(frame_23);
        pushButton_79->setObjectName(QStringLiteral("pushButton_79"));
        pushButton_79->setGeometry(QRect(640, 5, 61, 50));
        pushButton_79->setFont(font1);
        pushButton_79->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_17 = new QPushButton(frame_23);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(80, 5, 61, 50));
        pushButton_17->setFont(font1);
        pushButton_17->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_70 = new QPushButton(frame_23);
        pushButton_70->setObjectName(QStringLiteral("pushButton_70"));
        pushButton_70->setGeometry(QRect(540, 170, 61, 50));
        pushButton_70->setFont(font1);
        pushButton_70->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_54 = new QPushButton(frame_23);
        pushButton_54->setObjectName(QStringLiteral("pushButton_54"));
        pushButton_54->setGeometry(QRect(120, 170, 61, 50));
        pushButton_54->setFont(font1);
        pushButton_54->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_53 = new QPushButton(frame_23);
        pushButton_53->setObjectName(QStringLiteral("pushButton_53"));
        pushButton_53->setGeometry(QRect(190, 115, 61, 50));
        pushButton_53->setFont(font1);
        pushButton_53->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_56 = new QPushButton(frame_23);
        pushButton_56->setObjectName(QStringLiteral("pushButton_56"));
        pushButton_56->setGeometry(QRect(10, 115, 101, 50));
        pushButton_56->setFont(font1);
        pushButton_56->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_62 = new QPushButton(frame_23);
        pushButton_62->setObjectName(QStringLiteral("pushButton_62"));
        pushButton_62->setGeometry(QRect(330, 60, 61, 50));
        pushButton_62->setFont(font1);
        pushButton_62->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_74 = new QPushButton(frame_23);
        pushButton_74->setObjectName(QStringLiteral("pushButton_74"));
        pushButton_74->setGeometry(QRect(470, 115, 61, 50));
        pushButton_74->setFont(font1);
        pushButton_74->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_51 = new QPushButton(frame_23);
        pushButton_51->setObjectName(QStringLiteral("pushButton_51"));
        pushButton_51->setGeometry(QRect(360, 5, 61, 50));
        pushButton_51->setFont(font1);
        pushButton_51->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_61 = new QPushButton(frame_23);
        pushButton_61->setObjectName(QStringLiteral("pushButton_61"));
        pushButton_61->setGeometry(QRect(500, 5, 61, 50));
        pushButton_61->setFont(font1);
        pushButton_61->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_57 = new QPushButton(frame_23);
        pushButton_57->setObjectName(QStringLiteral("pushButton_57"));
        pushButton_57->setGeometry(QRect(540, 115, 61, 50));
        pushButton_57->setFont(font1);
        pushButton_57->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_78 = new QPushButton(frame_23);
        pushButton_78->setObjectName(QStringLiteral("pushButton_78"));
        pushButton_78->setGeometry(QRect(470, 60, 61, 50));
        pushButton_78->setFont(font1);
        pushButton_78->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_72 = new QPushButton(frame_23);
        pushButton_72->setObjectName(QStringLiteral("pushButton_72"));
        pushButton_72->setGeometry(QRect(190, 170, 341, 50));
        pushButton_72->setFont(font1);
        pushButton_72->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
" color: white;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"\n"
"}"));
        pushButton_80 = new QPushButton(frame_23);
        pushButton_80->setObjectName(QStringLiteral("pushButton_80"));
        pushButton_80->setGeometry(QRect(10, 5, 61, 50));
        pushButton_80->setFont(font1);
        pushButton_80->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_68 = new QPushButton(frame_23);
        pushButton_68->setObjectName(QStringLiteral("pushButton_68"));
        pushButton_68->setGeometry(QRect(540, 60, 61, 50));
        pushButton_68->setFont(font1);
        pushButton_68->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_59 = new QPushButton(frame_23);
        pushButton_59->setObjectName(QStringLiteral("pushButton_59"));
        pushButton_59->setGeometry(QRect(150, 5, 61, 50));
        pushButton_59->setFont(font1);
        pushButton_59->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_64 = new QPushButton(frame_23);
        pushButton_64->setObjectName(QStringLiteral("pushButton_64"));
        pushButton_64->setGeometry(QRect(330, 115, 61, 50));
        pushButton_64->setFont(font1);
        pushButton_64->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_75 = new QPushButton(frame_23);
        pushButton_75->setObjectName(QStringLiteral("pushButton_75"));
        pushButton_75->setGeometry(QRect(260, 115, 61, 50));
        pushButton_75->setFont(font1);
        pushButton_75->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_81 = new QPushButton(frame_23);
        pushButton_81->setObjectName(QStringLiteral("pushButton_81"));
        pushButton_81->setGeometry(QRect(220, 5, 61, 50));
        pushButton_81->setFont(font1);
        pushButton_81->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_60 = new QPushButton(frame_23);
        pushButton_60->setObjectName(QStringLiteral("pushButton_60"));
        pushButton_60->setGeometry(QRect(610, 115, 91, 50));
        pushButton_60->setFont(font1);
        pushButton_60->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_73 = new QPushButton(frame_23);
        pushButton_73->setObjectName(QStringLiteral("pushButton_73"));
        pushButton_73->setGeometry(QRect(50, 60, 61, 50));
        pushButton_73->setFont(font1);
        pushButton_73->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_69 = new QPushButton(frame_23);
        pushButton_69->setObjectName(QStringLiteral("pushButton_69"));
        pushButton_69->setGeometry(QRect(400, 115, 61, 50));
        pushButton_69->setFont(font1);
        pushButton_69->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_77 = new QPushButton(frame_23);
        pushButton_77->setObjectName(QStringLiteral("pushButton_77"));
        pushButton_77->setGeometry(QRect(400, 60, 61, 50));
        pushButton_77->setFont(font1);
        pushButton_77->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_55 = new QPushButton(frame_23);
        pushButton_55->setObjectName(QStringLiteral("pushButton_55"));
        pushButton_55->setGeometry(QRect(430, 5, 61, 50));
        pushButton_55->setFont(font1);
        pushButton_55->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_76 = new QPushButton(frame_23);
        pushButton_76->setObjectName(QStringLiteral("pushButton_76"));
        pushButton_76->setGeometry(QRect(260, 60, 61, 50));
        pushButton_76->setFont(font1);
        pushButton_76->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_66 = new QPushButton(frame_23);
        pushButton_66->setObjectName(QStringLiteral("pushButton_66"));
        pushButton_66->setGeometry(QRect(190, 60, 61, 50));
        pushButton_66->setFont(font1);
        pushButton_66->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_82 = new QPushButton(frame_23);
        pushButton_82->setObjectName(QStringLiteral("pushButton_82"));
        pushButton_82->setGeometry(QRect(290, 5, 61, 50));
        pushButton_82->setFont(font1);
        pushButton_82->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        stackedWidget_8->addWidget(page_14);
        page_15 = new QWidget();
        page_15->setObjectName(QStringLiteral("page_15"));
        frame_25 = new QFrame(page_15);
        frame_25->setObjectName(QStringLiteral("frame_25"));
        frame_25->setGeometry(QRect(5, 2, 711, 225));
        frame_25->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"border:1px solid gray;\n"
"}\n"
""));
        frame_25->setFrameShape(QFrame::StyledPanel);
        frame_25->setFrameShadow(QFrame::Raised);
        pushButton_105 = new QPushButton(frame_25);
        pushButton_105->setObjectName(QStringLiteral("pushButton_105"));
        pushButton_105->setGeometry(QRect(290, 115, 61, 50));
        pushButton_105->setFont(font1);
        pushButton_105->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_109 = new QPushButton(frame_25);
        pushButton_109->setObjectName(QStringLiteral("pushButton_109"));
        pushButton_109->setGeometry(QRect(430, 5, 61, 50));
        pushButton_109->setFont(font1);
        pushButton_109->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_93 = new QPushButton(frame_25);
        pushButton_93->setObjectName(QStringLiteral("pushButton_93"));
        pushButton_93->setGeometry(QRect(610, 170, 91, 50));
        pushButton_93->setFont(font1);
        pushButton_93->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_94 = new QPushButton(frame_25);
        pushButton_94->setObjectName(QStringLiteral("pushButton_94"));
        pushButton_94->setGeometry(QRect(360, 60, 61, 50));
        pushButton_94->setFont(font1);
        pushButton_94->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_83 = new QPushButton(frame_25);
        pushButton_83->setObjectName(QStringLiteral("pushButton_83"));
        pushButton_83->setGeometry(QRect(500, 60, 61, 50));
        pushButton_83->setFont(font1);
        pushButton_83->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_100 = new QPushButton(frame_25);
        pushButton_100->setObjectName(QStringLiteral("pushButton_100"));
        pushButton_100->setGeometry(QRect(220, 60, 61, 50));
        pushButton_100->setFont(font1);
        pushButton_100->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_116 = new QPushButton(frame_25);
        pushButton_116->setObjectName(QStringLiteral("pushButton_116"));
        pushButton_116->setGeometry(QRect(640, 60, 61, 50));
        pushButton_116->setFont(font1);
        pushButton_116->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_103 = new QPushButton(frame_25);
        pushButton_103->setObjectName(QStringLiteral("pushButton_103"));
        pushButton_103->setGeometry(QRect(180, 170, 351, 50));
        pushButton_103->setFont(font1);
        pushButton_103->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_112 = new QPushButton(frame_25);
        pushButton_112->setObjectName(QStringLiteral("pushButton_112"));
        pushButton_112->setGeometry(QRect(10, 60, 61, 50));
        pushButton_112->setFont(font1);
        pushButton_112->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_114 = new QPushButton(frame_25);
        pushButton_114->setObjectName(QStringLiteral("pushButton_114"));
        pushButton_114->setGeometry(QRect(10, 170, 91, 50));
        pushButton_114->setFont(font1);
        pushButton_114->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_96 = new QPushButton(frame_25);
        pushButton_96->setObjectName(QStringLiteral("pushButton_96"));
        pushButton_96->setGeometry(QRect(570, 5, 61, 50));
        pushButton_96->setFont(font1);
        pushButton_96->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_102 = new QPushButton(frame_25);
        pushButton_102->setObjectName(QStringLiteral("pushButton_102"));
        pushButton_102->setGeometry(QRect(220, 115, 61, 50));
        pushButton_102->setFont(font1);
        pushButton_102->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_90 = new QPushButton(frame_25);
        pushButton_90->setObjectName(QStringLiteral("pushButton_90"));
        pushButton_90->setGeometry(QRect(360, 115, 61, 50));
        pushButton_90->setFont(font1);
        pushButton_90->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_115 = new QPushButton(frame_25);
        pushButton_115->setObjectName(QStringLiteral("pushButton_115"));
        pushButton_115->setGeometry(QRect(80, 115, 61, 50));
        pushButton_115->setFont(font1);
        pushButton_115->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_111 = new QPushButton(frame_25);
        pushButton_111->setObjectName(QStringLiteral("pushButton_111"));
        pushButton_111->setGeometry(QRect(640, 5, 61, 50));
        pushButton_111->setFont(font1);
        pushButton_111->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_101 = new QPushButton(frame_25);
        pushButton_101->setObjectName(QStringLiteral("pushButton_101"));
        pushButton_101->setGeometry(QRect(360, 5, 61, 50));
        pushButton_101->setFont(font1);
        pushButton_101->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_95 = new QPushButton(frame_25);
        pushButton_95->setObjectName(QStringLiteral("pushButton_95"));
        pushButton_95->setGeometry(QRect(150, 60, 61, 50));
        pushButton_95->setFont(font1);
        pushButton_95->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_104 = new QPushButton(frame_25);
        pushButton_104->setObjectName(QStringLiteral("pushButton_104"));
        pushButton_104->setGeometry(QRect(10, 5, 61, 50));
        pushButton_104->setFont(font1);
        pushButton_104->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_84 = new QPushButton(frame_25);
        pushButton_84->setObjectName(QStringLiteral("pushButton_84"));
        pushButton_84->setGeometry(QRect(540, 170, 61, 50));
        pushButton_84->setFont(font1);
        pushButton_84->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_106 = new QPushButton(frame_25);
        pushButton_106->setObjectName(QStringLiteral("pushButton_106"));
        pushButton_106->setGeometry(QRect(500, 5, 61, 50));
        pushButton_106->setFont(font1);
        pushButton_106->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_87 = new QPushButton(frame_25);
        pushButton_87->setObjectName(QStringLiteral("pushButton_87"));
        pushButton_87->setGeometry(QRect(570, 60, 61, 50));
        pushButton_87->setFont(font1);
        pushButton_87->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_91 = new QPushButton(frame_25);
        pushButton_91->setObjectName(QStringLiteral("pushButton_91"));
        pushButton_91->setGeometry(QRect(290, 5, 61, 50));
        pushButton_91->setFont(font1);
        pushButton_91->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_108 = new QPushButton(frame_25);
        pushButton_108->setObjectName(QStringLiteral("pushButton_108"));
        pushButton_108->setGeometry(QRect(150, 115, 61, 50));
        pushButton_108->setFont(font1);
        pushButton_108->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_110 = new QPushButton(frame_25);
        pushButton_110->setObjectName(QStringLiteral("pushButton_110"));
        pushButton_110->setGeometry(QRect(10, 115, 61, 50));
        pushButton_110->setFont(font1);
        pushButton_110->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_97 = new QPushButton(frame_25);
        pushButton_97->setObjectName(QStringLiteral("pushButton_97"));
        pushButton_97->setGeometry(QRect(80, 60, 61, 50));
        pushButton_97->setFont(font1);
        pushButton_97->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_85 = new QPushButton(frame_25);
        pushButton_85->setObjectName(QStringLiteral("pushButton_85"));
        pushButton_85->setGeometry(QRect(290, 60, 61, 50));
        pushButton_85->setFont(font1);
        pushButton_85->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/amp.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_85->setIcon(icon1);
        pushButton_85->setIconSize(QSize(35, 35));
        pushButton_92 = new QPushButton(frame_25);
        pushButton_92->setObjectName(QStringLiteral("pushButton_92"));
        pushButton_92->setGeometry(QRect(430, 60, 61, 50));
        pushButton_92->setFont(font1);
        pushButton_92->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_98 = new QPushButton(frame_25);
        pushButton_98->setObjectName(QStringLiteral("pushButton_98"));
        pushButton_98->setGeometry(QRect(430, 115, 61, 50));
        pushButton_98->setFont(font1);
        pushButton_98->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_244 = new QPushButton(frame_25);
        pushButton_244->setObjectName(QStringLiteral("pushButton_244"));
        pushButton_244->setGeometry(QRect(570, 115, 61, 50));
        pushButton_244->setFont(font1);
        pushButton_244->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_89 = new QPushButton(frame_25);
        pushButton_89->setObjectName(QStringLiteral("pushButton_89"));
        pushButton_89->setGeometry(QRect(640, 115, 61, 50));
        pushButton_89->setFont(font1);
        pushButton_89->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_88 = new QPushButton(frame_25);
        pushButton_88->setObjectName(QStringLiteral("pushButton_88"));
        pushButton_88->setGeometry(QRect(500, 115, 61, 50));
        pushButton_88->setFont(font1);
        pushButton_88->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_86 = new QPushButton(frame_25);
        pushButton_86->setObjectName(QStringLiteral("pushButton_86"));
        pushButton_86->setGeometry(QRect(220, 5, 61, 50));
        pushButton_86->setFont(font1);
        pushButton_86->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_113 = new QPushButton(frame_25);
        pushButton_113->setObjectName(QStringLiteral("pushButton_113"));
        pushButton_113->setGeometry(QRect(110, 170, 61, 50));
        pushButton_113->setFont(font1);
        pushButton_113->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_107 = new QPushButton(frame_25);
        pushButton_107->setObjectName(QStringLiteral("pushButton_107"));
        pushButton_107->setGeometry(QRect(150, 5, 61, 50));
        pushButton_107->setFont(font1);
        pushButton_107->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_99 = new QPushButton(frame_25);
        pushButton_99->setObjectName(QStringLiteral("pushButton_99"));
        pushButton_99->setGeometry(QRect(80, 5, 61, 50));
        pushButton_99->setFont(font1);
        pushButton_99->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        stackedWidget_8->addWidget(page_15);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        frame_2 = new QFrame(page);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(190, 0, 331, 225));
        frame_2->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"border:1px solid gray;\n"
"}\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_127 = new QPushButton(frame_2);
        pushButton_127->setObjectName(QStringLiteral("pushButton_127"));
        pushButton_127->setGeometry(QRect(90, 115, 71, 50));
        pushButton_127->setFont(font1);
        pushButton_127->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_119 = new QPushButton(frame_2);
        pushButton_119->setObjectName(QStringLiteral("pushButton_119"));
        pushButton_119->setGeometry(QRect(250, 5, 71, 50));
        pushButton_119->setFont(font1);
        pushButton_119->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_126 = new QPushButton(frame_2);
        pushButton_126->setObjectName(QStringLiteral("pushButton_126"));
        pushButton_126->setGeometry(QRect(170, 60, 71, 50));
        pushButton_126->setFont(font1);
        pushButton_126->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_128 = new QPushButton(frame_2);
        pushButton_128->setObjectName(QStringLiteral("pushButton_128"));
        pushButton_128->setGeometry(QRect(250, 170, 71, 50));
        pushButton_128->setFont(font1);
        pushButton_128->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_118 = new QPushButton(frame_2);
        pushButton_118->setObjectName(QStringLiteral("pushButton_118"));
        pushButton_118->setGeometry(QRect(250, 60, 71, 50));
        pushButton_118->setFont(font1);
        pushButton_118->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_124 = new QPushButton(frame_2);
        pushButton_124->setObjectName(QStringLiteral("pushButton_124"));
        pushButton_124->setGeometry(QRect(10, 115, 71, 50));
        pushButton_124->setFont(font1);
        pushButton_124->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_125 = new QPushButton(frame_2);
        pushButton_125->setObjectName(QStringLiteral("pushButton_125"));
        pushButton_125->setGeometry(QRect(10, 170, 71, 50));
        pushButton_125->setFont(font1);
        pushButton_125->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_129 = new QPushButton(frame_2);
        pushButton_129->setObjectName(QStringLiteral("pushButton_129"));
        pushButton_129->setGeometry(QRect(170, 115, 71, 50));
        pushButton_129->setFont(font1);
        pushButton_129->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
" color: white;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_131 = new QPushButton(frame_2);
        pushButton_131->setObjectName(QStringLiteral("pushButton_131"));
        pushButton_131->setGeometry(QRect(90, 170, 151, 50));
        pushButton_131->setFont(font1);
        pushButton_131->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_130 = new QPushButton(frame_2);
        pushButton_130->setObjectName(QStringLiteral("pushButton_130"));
        pushButton_130->setGeometry(QRect(250, 115, 71, 50));
        pushButton_130->setFont(font1);
        pushButton_130->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_120 = new QPushButton(page);
        pushButton_120->setObjectName(QStringLiteral("pushButton_120"));
        pushButton_120->setGeometry(QRect(200, 5, 71, 50));
        pushButton_120->setFont(font1);
        pushButton_120->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_122 = new QPushButton(page);
        pushButton_122->setObjectName(QStringLiteral("pushButton_122"));
        pushButton_122->setGeometry(QRect(280, 60, 71, 50));
        pushButton_122->setFont(font1);
        pushButton_122->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_117 = new QPushButton(page);
        pushButton_117->setObjectName(QStringLiteral("pushButton_117"));
        pushButton_117->setGeometry(QRect(200, 60, 71, 50));
        pushButton_117->setFont(font1);
        pushButton_117->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_123 = new QPushButton(page);
        pushButton_123->setObjectName(QStringLiteral("pushButton_123"));
        pushButton_123->setGeometry(QRect(360, 5, 71, 50));
        pushButton_123->setFont(font1);
        pushButton_123->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        pushButton_121 = new QPushButton(page);
        pushButton_121->setObjectName(QStringLiteral("pushButton_121"));
        pushButton_121->setGeometry(QRect(280, 5, 71, 50));
        pushButton_121->setFont(font1);
        pushButton_121->setStyleSheet(QLatin1String("QPushButton\n"
"{\n"
"background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;}\n"
"\n"
"QPushButton:pressed {\n"
"   background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop: 0 rgb(12, 68, 145), stop: 0.5 rgb(12, 68, 145),  stop:1 rgb(12, 68, 145));\n"
" color: white;\n"
"margin-top: 2px;\n"
"margin-bottom: -4px;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0.0913636, x2:0.944, y2:0.392, stop:0.0969388 rgba(22, 123, 200, 255), stop:1 rgba(20, 113, 180, 255));\n"
"}"));
        stackedWidget_8->addWidget(page);
        toolButton_56 = new QToolButton(frame);
        toolButton_56->setObjectName(QStringLiteral("toolButton_56"));
        toolButton_56->setGeometry(QRect(740, 0, 61, 51));
        QFont font2;
        font2.setPointSize(11);
        toolButton_56->setFont(font2);
        toolButton_56->setStyleSheet(QLatin1String("background-color: transparent;\n"
"border:none;\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/output-onlinepngtools.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_56->setIcon(icon2);
        toolButton_56->setIconSize(QSize(50, 50));

        retranslateUi(Virtual_Keyboard);

        stackedWidget_8->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Virtual_Keyboard);
    } // setupUi

    void retranslateUi(QDialog *Virtual_Keyboard)
    {
        Virtual_Keyboard->setWindowTitle(QApplication::translate("Virtual_Keyboard", "Dialog", nullptr));
        pushButton_135->setText(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QString());
        pushButton_21->setText(QApplication::translate("Virtual_Keyboard", "s", nullptr));
        pushButton_33->setText(QApplication::translate("Virtual_Keyboard", "o", nullptr));
        pushButton_46->setText(QApplication::translate("Virtual_Keyboard", "\342\207\247", nullptr));
        pushButton_45->setText(QApplication::translate("Virtual_Keyboard", "\342\214\253 ", nullptr));
        pushButton_14->setText(QApplication::translate("Virtual_Keyboard", "w", nullptr));
        pushButton_35->setText(QApplication::translate("Virtual_Keyboard", "u", nullptr));
        pushButton_31->setText(QApplication::translate("Virtual_Keyboard", "d", nullptr));
        pushButton_32->setText(QApplication::translate("Virtual_Keyboard", "h", nullptr));
        pushButton_39->setText(QApplication::translate("Virtual_Keyboard", "x", nullptr));
        pushButton_15->setText(QApplication::translate("Virtual_Keyboard", "e", nullptr));
        pushButton_43->setText(QApplication::translate("Virtual_Keyboard", "b", nullptr));
        pushButton_40->setText(QApplication::translate("Virtual_Keyboard", "z", nullptr));
        pushButton_28->setText(QApplication::translate("Virtual_Keyboard", "l", nullptr));
        pushButton_22->setText(QApplication::translate("Virtual_Keyboard", "r", nullptr));
        pushButton_19->setText(QApplication::translate("Virtual_Keyboard", "g", nullptr));
        pushButton_50->setText(QString());
        pushButton_37->setText(QApplication::translate("Virtual_Keyboard", "t", nullptr));
        pushButton_30->setText(QApplication::translate("Virtual_Keyboard", "k", nullptr));
        pushButton_18->setText(QApplication::translate("Virtual_Keyboard", "\342\206\265", nullptr));
        pushButton_42->setText(QApplication::translate("Virtual_Keyboard", "v", nullptr));
        pushButton_16->setText(QApplication::translate("Virtual_Keyboard", "n", nullptr));
        pushButton_38->setText(QApplication::translate("Virtual_Keyboard", "c", nullptr));
        pushButton_13->setText(QApplication::translate("Virtual_Keyboard", "q", nullptr));
        pushButton_34->setText(QApplication::translate("Virtual_Keyboard", "i", nullptr));
        pushButton_27->setText(QApplication::translate("Virtual_Keyboard", "a", nullptr));
        pushButton_49->setText(QApplication::translate("Virtual_Keyboard", ",", nullptr));
        pushButton_47->setText(QApplication::translate("Virtual_Keyboard", "123", nullptr));
        pushButton_41->setText(QApplication::translate("Virtual_Keyboard", "f", nullptr));
        pushButton_29->setText(QApplication::translate("Virtual_Keyboard", "p", nullptr));
        pushButton_44->setText(QApplication::translate("Virtual_Keyboard", "m", nullptr));
        pushButton_48->setText(QApplication::translate("Virtual_Keyboard", ".", nullptr));
        pushButton_20->setText(QApplication::translate("Virtual_Keyboard", "j", nullptr));
        pushButton_36->setText(QApplication::translate("Virtual_Keyboard", "y", nullptr));
        pushButton_52->setText(QApplication::translate("Virtual_Keyboard", "L", nullptr));
        pushButton_67->setText(QApplication::translate("Virtual_Keyboard", "\342\206\265", nullptr));
        pushButton_58->setText(QApplication::translate("Virtual_Keyboard", "O", nullptr));
        pushButton_63->setText(QApplication::translate("Virtual_Keyboard", "S", nullptr));
        pushButton_71->setText(QApplication::translate("Virtual_Keyboard", "123", nullptr));
        pushButton_65->setText(QApplication::translate("Virtual_Keyboard", "Z", nullptr));
        pushButton_79->setText(QApplication::translate("Virtual_Keyboard", "P", nullptr));
        pushButton_17->setText(QApplication::translate("Virtual_Keyboard", "W", nullptr));
        pushButton_70->setText(QApplication::translate("Virtual_Keyboard", ".", nullptr));
        pushButton_54->setText(QApplication::translate("Virtual_Keyboard", ",", nullptr));
        pushButton_53->setText(QApplication::translate("Virtual_Keyboard", "X", nullptr));
        pushButton_56->setText(QApplication::translate("Virtual_Keyboard", "\342\207\247", nullptr));
        pushButton_62->setText(QApplication::translate("Virtual_Keyboard", "G", nullptr));
        pushButton_74->setText(QApplication::translate("Virtual_Keyboard", "N", nullptr));
        pushButton_51->setText(QApplication::translate("Virtual_Keyboard", "Y", nullptr));
        pushButton_61->setText(QApplication::translate("Virtual_Keyboard", "I", nullptr));
        pushButton_57->setText(QApplication::translate("Virtual_Keyboard", "M", nullptr));
        pushButton_78->setText(QApplication::translate("Virtual_Keyboard", "J", nullptr));
        pushButton_72->setText(QString());
        pushButton_80->setText(QApplication::translate("Virtual_Keyboard", "Q", nullptr));
        pushButton_68->setText(QApplication::translate("Virtual_Keyboard", "K", nullptr));
        pushButton_59->setText(QApplication::translate("Virtual_Keyboard", "E", nullptr));
        pushButton_64->setText(QApplication::translate("Virtual_Keyboard", "V", nullptr));
        pushButton_75->setText(QApplication::translate("Virtual_Keyboard", "C", nullptr));
        pushButton_81->setText(QApplication::translate("Virtual_Keyboard", "R", nullptr));
        pushButton_60->setText(QApplication::translate("Virtual_Keyboard", "\342\214\253 ", nullptr));
        pushButton_73->setText(QApplication::translate("Virtual_Keyboard", "A", nullptr));
        pushButton_69->setText(QApplication::translate("Virtual_Keyboard", "B", nullptr));
        pushButton_77->setText(QApplication::translate("Virtual_Keyboard", "H", nullptr));
        pushButton_55->setText(QApplication::translate("Virtual_Keyboard", "U", nullptr));
        pushButton_76->setText(QApplication::translate("Virtual_Keyboard", "F", nullptr));
        pushButton_66->setText(QApplication::translate("Virtual_Keyboard", "D", nullptr));
        pushButton_82->setText(QApplication::translate("Virtual_Keyboard", "T", nullptr));
        pushButton_105->setText(QApplication::translate("Virtual_Keyboard", ":", nullptr));
        pushButton_109->setText(QApplication::translate("Virtual_Keyboard", "7", nullptr));
        pushButton_93->setText(QApplication::translate("Virtual_Keyboard", "\342\206\265", nullptr));
        pushButton_94->setText(QApplication::translate("Virtual_Keyboard", "-", nullptr));
        pushButton_83->setText(QApplication::translate("Virtual_Keyboard", "(", nullptr));
        pushButton_100->setText(QApplication::translate("Virtual_Keyboard", "_", nullptr));
        pushButton_116->setText(QApplication::translate("Virtual_Keyboard", "/", nullptr));
        pushButton_103->setText(QString());
        pushButton_112->setText(QApplication::translate("Virtual_Keyboard", "@", nullptr));
        pushButton_114->setText(QApplication::translate("Virtual_Keyboard", "abc", nullptr));
        pushButton_96->setText(QApplication::translate("Virtual_Keyboard", "9", nullptr));
        pushButton_102->setText(QApplication::translate("Virtual_Keyboard", "'", nullptr));
        pushButton_90->setText(QApplication::translate("Virtual_Keyboard", ";", nullptr));
        pushButton_115->setText(QApplication::translate("Virtual_Keyboard", "*", nullptr));
        pushButton_111->setText(QApplication::translate("Virtual_Keyboard", "0", nullptr));
        pushButton_101->setText(QApplication::translate("Virtual_Keyboard", "6", nullptr));
        pushButton_95->setText(QApplication::translate("Virtual_Keyboard", "$", nullptr));
        pushButton_104->setText(QApplication::translate("Virtual_Keyboard", "1", nullptr));
        pushButton_84->setText(QApplication::translate("Virtual_Keyboard", ".", nullptr));
        pushButton_106->setText(QApplication::translate("Virtual_Keyboard", "8", nullptr));
        pushButton_87->setText(QApplication::translate("Virtual_Keyboard", ")", nullptr));
        pushButton_91->setText(QApplication::translate("Virtual_Keyboard", "5", nullptr));
        pushButton_108->setText(QApplication::translate("Virtual_Keyboard", "\"", nullptr));
        pushButton_110->setText(QApplication::translate("Virtual_Keyboard", "%", nullptr));
        pushButton_97->setText(QApplication::translate("Virtual_Keyboard", "#", nullptr));
        pushButton_85->setText(QString());
        pushButton_92->setText(QApplication::translate("Virtual_Keyboard", "+", nullptr));
        pushButton_98->setText(QApplication::translate("Virtual_Keyboard", "!", nullptr));
        pushButton_244->setText(QApplication::translate("Virtual_Keyboard", "\302\265", nullptr));
        pushButton_89->setText(QApplication::translate("Virtual_Keyboard", "\342\214\253 ", nullptr));
        pushButton_88->setText(QApplication::translate("Virtual_Keyboard", "?", nullptr));
        pushButton_86->setText(QApplication::translate("Virtual_Keyboard", "4", nullptr));
        pushButton_113->setText(QApplication::translate("Virtual_Keyboard", ",", nullptr));
        pushButton_107->setText(QApplication::translate("Virtual_Keyboard", "3", nullptr));
        pushButton_99->setText(QApplication::translate("Virtual_Keyboard", "2", nullptr));
        pushButton_127->setText(QApplication::translate("Virtual_Keyboard", "0", nullptr));
        pushButton_119->setText(QApplication::translate("Virtual_Keyboard", "4", nullptr));
        pushButton_126->setText(QApplication::translate("Virtual_Keyboard", "7", nullptr));
        pushButton_128->setText(QApplication::translate("Virtual_Keyboard", "\342\206\265", nullptr));
        pushButton_118->setText(QApplication::translate("Virtual_Keyboard", "8", nullptr));
        pushButton_124->setText(QApplication::translate("Virtual_Keyboard", "9", nullptr));
        pushButton_125->setText(QApplication::translate("Virtual_Keyboard", "\342\214\253 ", nullptr));
        pushButton_129->setText(QApplication::translate("Virtual_Keyboard", ".", nullptr));
        pushButton_131->setText(QString());
        pushButton_130->setText(QApplication::translate("Virtual_Keyboard", "%", nullptr));
        pushButton_120->setText(QApplication::translate("Virtual_Keyboard", "1", nullptr));
        pushButton_122->setText(QApplication::translate("Virtual_Keyboard", "6", nullptr));
        pushButton_117->setText(QApplication::translate("Virtual_Keyboard", "5", nullptr));
        pushButton_123->setText(QApplication::translate("Virtual_Keyboard", "3", nullptr));
        pushButton_121->setText(QApplication::translate("Virtual_Keyboard", "2", nullptr));
        toolButton_56->setText(QApplication::translate("Virtual_Keyboard", "Reading Block Temperature", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Virtual_Keyboard: public Ui_Virtual_Keyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIRTUAL_KEYBOARD_H
