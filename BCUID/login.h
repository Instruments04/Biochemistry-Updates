#ifndef LOGIN_H
#define LOGIN_H
#include <QDialog>
#include "bcmainwindow.h"


namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_pushButton_2_clicked();

    void on_Login_Btn_clicked();

    void on_LabName_Btn_clicked();

    void on_UserName_Btn_clicked();

private:

    Ui::Login *ui;

    //BCMainWindow * bcmainwindow;


};

#endif // LOGIN_H
