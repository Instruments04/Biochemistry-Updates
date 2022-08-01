#include "login.h"
#include <QtCore/QCoreApplication>
#include "ui_login.h"
#include "bcmainwindow.h"
#include "ui_bcmainwindow.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_2_clicked()
{
    //this->close();
}

void Login::on_Login_Btn_clicked()
{
    //bcmainwindow = new BCMainWindow(this);
    //bcmainwindow->show();
}


