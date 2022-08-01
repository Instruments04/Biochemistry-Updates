#include "mainwindow.h"
#include "ui_mainwindow.h"
static QString array[100]={""};

void MainWindow::on_QC_Btn_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
    ui->tabWidget_3->setCurrentIndex(0);
    QSqlQuery query;
    query.prepare("SELECT name FROM test");
    query.exec();
    int count=0;
    while(query.next())
    {
        QString s=query.value(0).toString();
        array[count]=s;
        count++;
        qDebug()<<s;
    }
    int count1=0;
    const QSize btnSize = QSize(150, 50);
    for (int i=0;i<15 ;i++ )
    {
        for (int j=0;j<5 ;j++ )
        {
            if(count1==count)
                break;
            else
            {
                QPushButton *button = new QPushButton(array[count1]);
                button->setFixedSize(btnSize);
                button->setObjectName(array[count1]);
                connect(button, &QPushButton::clicked, this, &MainWindow::cald1);
                ui->gridLayout_2->addWidget(button,i,j);
            }
            count1++;
        }
    }
}

void MainWindow::cald1()
{
    QObject *senderObj = sender(); // This will give Sender object
    QString senderObjName = senderObj->objectName();
    ui->label_45->setText(senderObjName);
    ui->stackedWidget->setCurrentIndex(10);

}

