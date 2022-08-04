#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtNetwork/QNetworkConfigurationManager>
#include <QNetworkSession>
void MainWindow::on_pushButton_12_clicked()
{
    QString line;
    QString lines[1000];
    QString pwd=ui->lineEdit_2->text();
    QFile file("/etc/wpa_supplicant/wpa_supplicant.conf");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        stream<<"ctrl_interface=DIR=/var/run/wpa_supplicant GROUP=netdev\n";
        stream<<"update_config=1\n";
        stream<<"country=IN\n";
        stream<<"\n";
        stream<<"network={\n";
        stream<<"\tssid=";
        stream<<ui->comboBox_4->currentText()+"\n";
        stream<<"\tpsk=\"";
        stream<<ui->lineEdit_2->text()+"\"\n";
        stream<<"\tkey_mgmt=WPA-PSK\n";
        stream<<"}";
        file.close();
        QProcess process2;
        process2.start("sh",QStringList()<<"-c"<<"sudo wpa_cli -i wlan0 reconfigure");
        process2.waitForFinished();
    }
}

void MainWindow::on_pushButton_23_clicked()
{
    ui->lineEdit_2->setEchoMode(QLineEdit::Normal);
    ui->pushButton_23->hide();
    ui->pushButton_25->show();
}

void MainWindow::on_pushButton_25_clicked()
{
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->pushButton_25->hide();
    ui->pushButton_23->show();

}



