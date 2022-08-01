
#include "mainwindow.h"
#include "ui_mainwindow.h"
static QString array[100]={""};

void MainWindow::on_Test_Btn_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    ui->tabWidget->setCurrentIndex(0);
    ui->gridLayout->update();
    ui->gridLayout_6->update();
    ui->gridLayout_8->update();
    QSqlQuery query;
    query.prepare("SELECT name FROM test");
    query.exec();
    int count=0;
    while(query.next())
    {
        QString s=query.value(0).toString();
        array[count]=s;
        count++;
        //qDebug()<<s;
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
                connect(button, &QPushButton::clicked, this,&MainWindow::cald);
                ui->gridLayout->addWidget(button,i,j);
                count1++;
            }
        }
    }

}

void MainWindow::cald()
{
    QSqlQuery query;
    QObject *senderObj = sender(); // This will give Sender object
    QString senderObjName = senderObj->objectName();
    QString TestName=senderObjName;

    QString name, unit , Fact , Rctn , EndPoint , TwoPoint, Kinetic , Blnk , Calibrate , Wave;
    unsigned int fact = 0  , blnk = 0 , Cal = 0 , wave=0;
    Fact = char (fact);
    Blnk =  char (blnk);
    Calibrate = char (Cal);
    Wave=char(wave);

    query.prepare("select * from test where name='"+TestName+"'");
    query.exec();
    while(query.next())
    {
        name=query.value(1).toString();
        Wave=query.value(2).toString();
    }

    if(Wave=="340")
    {
        int Blankval =0 , wave=0;
        query.prepare("select * from tests where sno = 1");
        query.exec();
        while (query.next())
        {
            Blankval= query.value(11).toInt();
            wave=query.value(8).toInt();
            qDebug()<<Blankval<<"Stored";

            if(Blankval==0)
            {
                test();
            }
            else
            {
                tested();

            }
        }
    }
    else if (Wave=="405") {
        qDebug()<<Wave<<405;
        int Blankval =0 , wave=0;
        query.prepare("select * from tests where sno = 2");
        query.exec();
        while (query.next())
        {
            Blankval= query.value(11).toInt();
            wave=query.value(8).toInt();
            qDebug()<<Blankval<<wave;
            if(Blankval==0)
            {
                qDebug()<<"405-- Blankval Empty...!";
                test();
            }
            else
            {
                qDebug()<<"405-- Blankval exist...!";

                if(Blankval==0)
                {
                    test();
                }
                else
                {
                    tested();

                }
            }
        }
    }
    else if (Wave=="507")
    {
        qDebug()<<Wave<<507;
        int Blankval =0 , wave=0;
        query.prepare("select * from tests where sno = 3");
        query.exec();
        while (query.next())
        {
            Blankval= query.value(11).toInt();
            wave=query.value(8).toInt();
            qDebug()<<Blankval<<wave;
            if(Blankval==0)
            {
                qDebug()<<"507-- Blankval Empty...!";
                test();
            }
            else
            {
                qDebug()<<"507-- Blankval exist...!";

                if(Blankval==0)
                {
                    test();
                }
                else
                {
                    tested();

                }
            }
        }
    }
    else if (Wave=="545") {
        qDebug()<<Wave<<545;
        int Blankval =0 , wave=0;
        query.prepare("select * from tests where sno = 4");
        query.exec();
        while (query.next())
        {
            Blankval= query.value(11).toInt();
            wave=query.value(8).toInt();
            qDebug()<<Blankval<<wave;
            if(Blankval==0)
            {
                qDebug()<<"545-- Blankval Empty...!";
                test();

            }
            else
            {
                qDebug()<<"545-- Blankval exist...!";
                if(Blankval==0)
                {
                    test();
                }
                else
                {
                    tested();

                }

            }
        }
    }
    else if (Wave=="572") {
        qDebug()<<Wave<<572;
        int Blankval =0 , wave=0;
        query.prepare("select * from tests where sno = 5");
        query.exec();
        while (query.next())
        {
            Blankval= query.value(11).toInt();
            wave=query.value(8).toInt();
            qDebug()<<Blankval<<wave;
            if(Blankval==0)
            {
                qDebug()<<"572-- Blankval Empty...!";
                test();
            }
            else
            {
                qDebug()<<"572-- Blankval exist...!";
                if(Blankval==0)
                {
                    test();
                }
                else
                {
                    tested();

                }
            }
        }
    }
    else if (Wave=="628") {
        qDebug()<<Wave<<628;
        int Blankval =0 , wave=0;
        query.prepare("select * from tests where sno = 6");
        query.exec();
        while (query.next())
        {
            Blankval= query.value(11).toInt();
            wave=query.value(8).toInt();
            qDebug()<<Blankval<<wave;
            if(Blankval==0)
            {
                qDebug()<<"628-- Blankval Empty...!";
                test();
            }
            else
            {
                qDebug()<<"628-- Blankval exist...!";

                if(Blankval==0)
                {
                    test();
                }
                else
                {
                    tested();

                }
            }
        }
    }
    else if (Wave=="700")
    {
        qDebug()<<Wave<<700;
        int Blankval =0 , wave=0;
        query.prepare("select * from tests where sno = 7");
        query.exec();
        while (query.next())
        {
            Blankval= query.value(11).toInt();
            wave=query.value(8).toInt();
            qDebug()<<Blankval<<wave;
            if(Blankval==0)
            {
                qDebug()<<"700-- Blankval Empty...!";
                test();
            }
            else
            {
                qDebug()<<"700-- Blankval exist...!";

                if(Blankval==0)
                {
                    test();
                }
                else
                {
                    tested();

                }
            }
        }
    }
}
void MainWindow::test()
{
    QSqlQuery query;
    ui->stackedWidget->setCurrentIndex(24);
    QObject *senderObj = sender(); // This will give Sender object
    QString senderObjName = senderObj->objectName();
    QString TestName=senderObjName;

    QString name, unit , Fact , Rctn , EndPoint , TwoPoint, Kinetic , Blnk , Calibrate , Wave;
    unsigned int fact = 0  , blnk = 0 , Cal = 0 , wave=0;
    Fact = char (fact);
    Blnk =  char (blnk);
    Calibrate = char (Cal);
    Wave=char(wave);

    query.prepare("select * from test where name='"+TestName+"'");
    query.exec();
    while(query.next())
    {
        name=query.value(1).toString();
        Wave=query.value(2).toString();
    }
    ui->label_91->setText(Wave);
    QThread::msleep(1000);
    //tested();
}

void MainWindow::Open()
{
    one = ui->label_114->text().toInt();
    two = ui->label_115->text().toInt();
    three = ui->label_117->text().toInt();
    four = ui->label_118->text().toInt();
    five = ui->label_124->text().toInt();
    six = ui->label_126->text().toInt();
    seven = ui->label_183->text().toInt();
    qDebug()<<one<<two<<three<<four<<five<<six<<seven;

    if(one==0)
    {

    }
    else {
        tested();
    }


    qDebug()<<"Port Opened";
    //tested();
}

void MainWindow::on_pushButton_227_clicked()
{
    QSqlQuery query;
    QString name;
    int Wave=0 ;
    int intensity=0;
    Wave=ui->label_91->text().toInt();
    qDebug()<<name<<Wave;
    if(Wave==340)
    {
        int wave=0;
        query.prepare("select * from tests where sno=1");
        query.exec();
        while(query.next())
        {
            intensity=query.value(1).toInt();
        }
        filtwave[0]=reading(wave , intensity);
        w340=filtwave[0];
        ui->label_114->setNum(w340);
        ui->label_92->setNum(w340);
        //qDebug()<<w340;
        QString Blankval;
        Blankval = ui->label_114->text();
        query.prepare("update tests set blankval='"+Blankval+"' where sno=1");
        if(query.exec())
        {
        }
        else
        {

        }
        //ENter
        if (endval<=Blankval>=startval)
        {


            qDebug()<<w340<<Blankval<<"340 clicked";
            QThread::msleep(1000);
            // Open();
            QMessageBox msg(this);
            msg.setWindowModality(Qt::WindowModal);
            msg.setWindowTitle(QLatin1String("Information"));
            msg.setStyleSheet("font:16pt Arial;");

            QPixmap p("/home/pi/git/BCUIDF/img/check-mark.png");
            auto newPixmap = p.scaled(65, 65);
            msg.setIconPixmap(newPixmap);
            msg.setStyleSheet("font:16pt Arial;");
            msg.setText("Internal Quality Check - 340nm");
            msg.setStyleSheet("text-align:center; text=PASS; font:16pt Arial;");
            msg.setInformativeText("Pass");
            msg.setStandardButtons(QMessageBox::Ok);
            msg.setFixedWidth(500);
            if(msg.exec() == QMessageBox::Ok)

            {
                ui->stackedWidget->setCurrentIndex(1);
            }
        }
        else
        {
            qDebug()<<startval<<Blankval<<endval;
            QMessageBox msg(this);
            msg.setWindowModality(Qt::WindowModal);
            msg.setWindowTitle(QLatin1String("WARNING"));
            msg.setDetailedText("Internal Quality Failed - 340nm");
            msg.setStyleSheet("font:16pt Arial;");
            msg.setText("Internal Quality Failed - 340nm");
            QPixmap p("/home/pi/git/BCUIDF/img/cancel.png");
            auto newPixmap = p.scaled(80, 80);
            msg.setIconPixmap(newPixmap);
            msg.setInformativeText("Failed");
            msg.setInformativeText("Contact Service Team...");
            msg.setStandardButtons(QMessageBox::Ok);
            //msg.setIcon(QMessageBox::Icon::Warning);
            qDebug()<<w340<<Blankval;
            if(msg.exec() == QMessageBox::Ok)

            {

                ui->stackedWidget->setCurrentIndex(1);
            }

        }
    }
    else if(Wave==405)
    {
        int wave=1;
        query.prepare("select * from tests where sno=2");
        query.exec();
        while(query.next())
        {
            intensity=query.value(1).toInt();
        }
        filtwave[0]=reading(wave , intensity);
        w405=filtwave[0];
        ui->label_115->setNum(w405);
        ui->label_92->setNum(w405);
        //qDebug()<<w340;
        QString Blankval;
        Blankval = ui->label_115->text();
        query.prepare("update tests set blankval='"+Blankval+"' where sno=2");
        if(query.exec())
        {

            if (Blankval>=startval)
            {
                qDebug()<<w405<<Blankval<<"405 clicked";
                QThread::msleep(1000);
                // Open();
                QMessageBox msg(this);
                msg.setWindowModality(Qt::WindowModal);
                msg.setWindowTitle(QLatin1String("Information"));
                QPixmap p("/home/pi/git/BCUIDF/img/check-mark.png");
                auto newPixmap = p.scaled(80, 80);
                msg.setIconPixmap(newPixmap);
                msg.setStyleSheet("font:16pt Arial;");
                msg.setText("Internal Quality Check - 405nm");
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setFixedWidth(500);
                if(msg.exec() == QMessageBox::Ok)

                {
                    ui->stackedWidget->setCurrentIndex(1);
                }

            }
            else
            {
                QMessageBox msg(this);
                msg.setWindowModality(Qt::WindowModal);
                msg.setWindowTitle(QLatin1String("WARNING"));
                QPixmap p("/home/pi/git/BCUIDF/img/cancel.png");
                auto newPixmap = p.scaled(80, 80);
                msg.setIconPixmap(newPixmap);
                msg.setStyleSheet("font:16pt Arial;");
                msg.setText("Internal Quality Failed - 405nm");
                msg.setInformativeText("Contact Service Team...");
                msg.setStandardButtons(QMessageBox::Ok);
                //msg.setIcon(QMessageBox::Icon::Warning);
                if(msg.exec() == QMessageBox::Ok)

                {

                    ui->stackedWidget->setCurrentIndex(1);
                }


            }
        }
    }
    else if(Wave==507)
    {
        int wave=2;
        query.prepare("select * from tests where sno=3");
        query.exec();
        while(query.next())
        {
            intensity=query.value(1).toInt();
        }
        filtwave[0]=reading(wave , intensity);
        w507=filtwave[0];
        ui->label_117->setNum(w507);
        ui->label_92->setNum(w507);
        //qDebug()<<w340;
        QString Blankval;
        Blankval = ui->label_117->text();
        query.prepare("update tests set blankval='"+Blankval+"' where sno=3");
        if(query.exec())
        {

            if (Blankval>=startval)
            {
                qDebug()<<w507<<Blankval<<"507 clicked";
                QThread::msleep(1000);
                // Open();
                QMessageBox msg(this);
                msg.setWindowModality(Qt::WindowModal);
                msg.setWindowTitle(QLatin1String("Information"));
                QPixmap p("/home/pi/git/BCUIDF/img/check-mark.png");
                auto newPixmap = p.scaled(80, 80);
                msg.setIconPixmap(newPixmap);
                msg.setStyleSheet("font:16pt Arial;");
                msg.setText("Internal Quality Check - 507nm");
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setFixedWidth(500);
                if(msg.exec() == QMessageBox::Ok)

                {
                    ui->stackedWidget->setCurrentIndex(1);
                }

            }
            else
            {
                QMessageBox msg(this);
                msg.setWindowModality(Qt::WindowModal);
                msg.setWindowTitle(QLatin1String("WARNING"));
                QPixmap p("/home/pi/git/BCUIDF/img/cancel.png");
                auto newPixmap = p.scaled(80, 80);
                msg.setIconPixmap(newPixmap);
                msg.setStyleSheet("font:16pt Arial;");
                msg.setText("Internal Quality Failed - 507nm");
                msg.setInformativeText("Contact Service Team...");
                msg.setStandardButtons(QMessageBox::Ok);
                //msg.setIcon(QMessageBox::Icon::Warning);
                if(msg.exec() == QMessageBox::Ok)

                {

                    ui->stackedWidget->setCurrentIndex(1);
                }

            }
        }
    }
    else if(Wave==545)
    {
        int wave=3;
        query.prepare("select * from tests where sno=4");
        query.exec();
        while(query.next())
        {
            intensity=query.value(1).toInt();
        }
        filtwave[0]=reading(wave , intensity);
        w545=filtwave[0];
        ui->label_118->setNum(w545);
        ui->label_92->setNum(w545);
        //qDebug()<<w545;
        QString Blankval;
        Blankval = ui->label_118->text();
        query.prepare("update tests set blankval='"+Blankval+"' where sno=4");
        if(query.exec())
        {
            if (Blankval>=startval)
            {
                qDebug()<<w545<<Blankval<<"545 clicked";
                QThread::msleep(1000);
                // Open();
                QMessageBox msg(this);
                msg.setWindowModality(Qt::WindowModal);
                msg.setWindowTitle(QLatin1String("Information"));
                QPixmap p("/home/pi/git/BCUIDF/img/check-mark.png");
                auto newPixmap = p.scaled(80, 80);
                msg.setIconPixmap(newPixmap);
                msg.setStyleSheet("font:16pt Arial;");
                msg.setText("Internal Quality Check - 545nm");
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setFixedWidth(500);
                if(msg.exec() == QMessageBox::Ok)
                {
                    ui->stackedWidget->setCurrentIndex(1);
                }
            }

            else
            {
                QMessageBox msg(this);
                msg.setWindowModality(Qt::WindowModal);
                msg.setWindowTitle(QLatin1String("WARNING"));
                QPixmap p("/home/pi/git/BCUIDF/img/cancel.png");
                auto newPixmap = p.scaled(80, 80);
                msg.setIconPixmap(newPixmap);
                msg.setStyleSheet("font:16pt Arial;");
                msg.setText("Internal Quality Failed - 545nm");
                msg.setInformativeText("Contact Service Team...");
                msg.setStandardButtons(QMessageBox::Ok);
                //msg.setIcon(QMessageBox::Icon::Warning);
                if(msg.exec() == QMessageBox::Ok)
                {
                    ui->stackedWidget->setCurrentIndex(0);
                }

            }
        }
    }
    else if(Wave==572)
    {
        int wave=4;
        query.prepare("select * from tests where sno=5");
        query.exec();
        while(query.next())
        {
            intensity=query.value(1).toInt();
        }
        filtwave[0]=reading(wave , intensity);
        w572=filtwave[0];
        ui->label_124->setNum(w572);
        ui->label_92->setNum(w572);
        //qDebug()<<w572;
        QString Blankval;
        Blankval = ui->label_124->text();
        query.prepare("update tests set blankval='"+Blankval+"' where sno=5");
        if(query.exec())
        {

            if (Blankval>=startval)
            {
                qDebug()<<w572<<Blankval<<"572 clicked";
                QThread::msleep(1000);
                // Open();
                QMessageBox msg(this);
                msg.setWindowModality(Qt::WindowModal);
                msg.setWindowTitle(QLatin1String("Information"));
                QPixmap p("/home/pi/git/BCUIDF/img/check-mark.png");
                auto newPixmap = p.scaled(80, 80);
                msg.setIconPixmap(newPixmap);
                msg.setStyleSheet("font:16pt Arial;");
                msg.setText("Internal Quality Check - 572nm");
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setFixedWidth(500);
                if(msg.exec() == QMessageBox::Ok)

                {
                    ui->stackedWidget->setCurrentIndex(1);
                }

            }
            else
            {
                QMessageBox msg(this);
                msg.setWindowModality(Qt::WindowModal);
                msg.setWindowTitle(QLatin1String("WARNING"));
                QPixmap p("/home/pi/git/BCUIDF/img/cancel.png");
                auto newPixmap = p.scaled(80, 80);
                msg.setIconPixmap(newPixmap);
                msg.setStyleSheet("font:16pt Arial;");
                msg.setText("Internal Quality Failed - 572nm");
                msg.setInformativeText("Contact Service Team...");
                msg.setStandardButtons(QMessageBox::Ok);
                //msg.setIcon(QMessageBox::Icon::Warning);
                if(msg.exec() == QMessageBox::Ok)

                {

                    ui->stackedWidget->setCurrentIndex(1);
                }

            }
        }
    }
    else if(Wave==628)
    {
        int wave=5;
        query.prepare("select * from tests where sno=6");
        query.exec();
        while(query.next())
        {
            intensity=query.value(1).toInt();
        }
        filtwave[0]=reading(wave , intensity);
        w628=filtwave[0];
        ui->label_126->setNum(w628);
        ui->label_92->setNum(w628);
        //qDebug()<<w628;
        QString Blankval;
        Blankval = ui->label_126->text();
        query.prepare("update tests set blankval='"+Blankval+"' where sno=6");
        if(query.exec())
        {

            if (Blankval>=startval)
            {
                qDebug()<<w628<<Blankval<<"628 clicked";
                QThread::msleep(1000);
                // Open();
                QMessageBox msg(this);
                msg.setWindowModality(Qt::WindowModal);
                msg.setWindowTitle(QLatin1String("Information"));
                QPixmap p("/home/pi/git/BCUIDF/img/check-mark.png");
                auto newPixmap = p.scaled(80, 80);
                msg.setIconPixmap(newPixmap);
                msg.setStyleSheet("font:16pt Arial;");
                msg.setText("Internal Quality Check - 628nm");
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setFixedWidth(500);
                if(msg.exec() == QMessageBox::Ok)

                {
                    ui->stackedWidget->setCurrentIndex(1);
                }

            }
            else
            {
                QMessageBox msg(this);
                msg.setWindowModality(Qt::WindowModal);
                msg.setWindowTitle(QLatin1String("WARNING"));
                QPixmap p("/home/pi/git/BCUIDF/img/cancel.png");
                auto newPixmap = p.scaled(80, 80);
                msg.setIconPixmap(newPixmap);
                msg.setStyleSheet("font:16pt Arial;");
                msg.setText("Internal Quality Failed - 628nm");
                msg.setInformativeText("Contact Service Team...");
                msg.setStandardButtons(QMessageBox::Ok);
                //msg.setIcon(QMessageBox::Icon::Warning);
                if(msg.exec() == QMessageBox::Ok)

                {

                    ui->stackedWidget->setCurrentIndex(1);
                }

            }
        }
    }
    else if(Wave==700)
    {
        int wave=6;
        query.prepare("select * from tests where sno=7");
        query.exec();
        while(query.next())
        {
            intensity=query.value(1).toInt();
        }
        filtwave[0]=reading(wave , intensity);
        w700=filtwave[0];
        ui->label_183->setNum(w700);
        ui->label_92->setNum(w700);
        //qDebug()<<w700;
        QString Blankval;
        Blankval = ui->label_183->text();
        query.prepare("update tests set blankval='"+Blankval+"' where sno=7");
        if(query.exec())
        {

            if (Blankval>=startval)
            {
                qDebug()<<w700<<Blankval<<"700 clicked";
                QThread::msleep(1000);
                // Open();
                QMessageBox msg(this);
                msg.setWindowModality(Qt::WindowModal);
                msg.setWindowTitle(QLatin1String("Information"));
                QPixmap p("/home/pi/git/BCUIDF/img/check-mark.png");
                auto newPixmap = p.scaled(80, 80);
                msg.setIconPixmap(newPixmap);
                msg.setStyleSheet("font:16pt Arial;");
                msg.setText("Internal Quality Check - 700nm");
                msg.setStandardButtons(QMessageBox::Ok);
                msg.setFixedWidth(500);
                if(msg.exec() == QMessageBox::Ok)

                {
                    ui->stackedWidget->setCurrentIndex(1);
                }

            }
            else
            {
                QMessageBox msg(this);
                msg.setWindowModality(Qt::WindowModal);
                msg.setWindowTitle(QLatin1String("WARNING"));
                QPixmap p("/home/pi/git/BCUIDF/img/cancel.png");
                auto newPixmap = p.scaled(80, 80);
                msg.setIconPixmap(newPixmap);
                msg.setStyleSheet("font:16pt Arial;");
                msg.setText("Internal Quality Failed - 700nm");
                msg.setInformativeText("Contact Service Team...");
                msg.setStandardButtons(QMessageBox::Ok);
                //msg.setIcon(QMessageBox::Icon::Warning);
                if(msg.exec() == QMessageBox::Ok)

                {

                    ui->stackedWidget->setCurrentIndex(1);
                }


            }
        }
    }

}


void MainWindow::tested()
{
    // option=6;
    ui->stackedWidget->setCurrentIndex(2);
    QObject *senderObj = sender(); // This will give Sender object
    QString senderObjName = senderObj->objectName();
    QString TestName=senderObjName;
    qDebug()<<TestName;
    QSqlQuery query;
    QString name, unit , Fact , Rctn , EndPoint , TwoPoint, Kinetic , Blnk , Calibrate , Wave;
    unsigned int fact = 0  , blnk = 0 , Cal = 0 , wave=0;
    Fact = char (fact);
    Blnk =  char (blnk);
    Calibrate = char (Cal);
    Wave=char(wave);

    ui->label_33->setText("");
    ui->label_6->setText("");
    ui->label_208->setText("");
    ui->label_120->setText("");
    ui->label_122->setText("");
    ui->label_119->setText("");
    ui->label_106->setText("");
    ui->label_121->setText("");
    ui->label_123->setText("");
    ui->label_125->setText("");
    ui->label_127->setText("");
    ui->label_128->setText("");
    ui->label_204->setText("");
    ui->label_195->setText("");
    ui->label_194->setText("");
    ui->label_198->setText("");
    ui->PatientInfo_LineEdit->setText("");
    ui->PatientInfo_LineEdit_2->setText("");
    ui->PatientInfo_LineEdit_3->setText("");
    name=ui->TestName_Lbl->text();
    name=ui->TestName_Lbl_5->text();
    name=ui->TestName_Lbl_6->text();

    query.prepare("select * from test where name='"+TestName+"'");
    query.exec();
    while(query.next())
    {
        unit=query.value(4).toString();
        Rctn=query.value(3).toString();
        Fact = query.value(6).toString();
        Blnk = query.value(32).toString();
        Calibrate = query.value(33).toString();
    }
    ui->Unit_lineEdit->setText(unit);
    ui->label->setText(Blnk);
    ui->label_196->setText(Fact);
    ui->label_76->setText(Fact);
    if(Rctn == "EndPoint" )
    {
        ui->stackedWidget->setCurrentIndex(2);
        ui->TestName_Lbl->setText(TestName);
        clearGraph_end();
        ui->RunSample_Btn->setEnabled(false);
        ui->RunSample_Btn_2->setEnabled(false);
        ui->RunSample_Btn_3->setEnabled(false);
        ui->label_6->setVisible(false);
        ui->Save_Btn->setEnabled(true);
        ui->label_203->setVisible(false);
        ui->label_204->setVisible(false);
        ui->Save_Btn_2->setEnabled(true);

        // End_Point Btn Hide

        ui->TestName_Lbl->setVisible(true);
        ui->Save_Btn_2->setVisible(true);
        ui->Patient_Info_Lbl_4->setVisible(true);
        ui->pushButton_117->setVisible(true);
        ui->PatientInfo_LineEdit->setVisible(true);
        ui->RunBlank_Btn->setVisible(true);
        ui->label_193->setVisible(true); ui->label->setVisible(true);
        ui->RunCal_Btn->setVisible(true);
        ui->label_100->setVisible(true);
        ui->label_34->setVisible(true); ui->label_196->setVisible(true);
        ui->label_197->setVisible(true);
        ui->Save_Btn_5->setVisible(true);
        ui->RunSample_Btn->setVisible(true);
        ui->label_33->setVisible(true);
        ui->Unit_lineEdit->setVisible(true);
        ui->Print_Btn->setVisible(true);
        ui->label_6->setVisible(false);
        ui->label_207->setVisible(false);

        ui->label_209->setVisible(false);
        ui->label_7->setVisible(false);
        ui->label_32->setVisible(false);
        ui->label_12->setVisible(false);
        ui->label_34->setText("");
        ui->label_196->setText("");
        ui->label_208->setVisible(false);
        ui->label_106->setVisible(false);
        ui->label_120->setVisible(false);
        ui->label_121->setVisible(false);
        ui->label_122->setVisible(false);
        ui->label_123->setVisible(false);
        ui->label_125->setVisible(false);
        ui->label_194->setVisible(false);
        ui->label_195->setVisible(false);
        ui->label_198->setVisible(false);

        // Two_Point Btn Hide

        ui->TestName_Lbl_5->setVisible(false);
        ui->Save_Btn_3->setVisible(false);
        ui->Patient_Info_Lbl_5->setVisible(false);
        ui->pushButton_202->setVisible(false);
        ui->PatientInfo_LineEdit_2->setVisible(false);
        ui->RunBlank_Btn_2->setVisible(false);
        ui->RunCal_Btn_2->setVisible(false);
        ui->label_197->setVisible(false);
        ui->Save_Btn_6->setVisible(false);
        ui->RunSample_Btn_2->setVisible(false);
        ui->Print_Btn_2->setVisible(false);
        ui->label_120->setVisible(false);
        ui->label_122->setVisible(false);
        ui->label_72->setVisible(false);
        ui->label_119->setVisible(false);
        ui->TestName_Lbl_6->setVisible(false);

        //Kinetic Btn _Hide

        ui->Save_Btn_4->setVisible(false);
        ui->Patient_Info_Lbl_6->setVisible(false);
        ui->pushButton_203->setVisible(false);
        ui->PatientInfo_LineEdit_3->setVisible(false);
        ui->RunBlank_Btn_3->setVisible(false);
        ui->RunCal_Btn_3->setVisible(false);
        ui->label_98->setVisible(false);
        ui->label_75->setVisible(false);
        ui->label_197->setVisible(false);
        ui->Save_Btn_7->setVisible(false);
        ui->RunSample_Btn_3->setVisible(false);
        ui->Print_Btn_3->setVisible(false);
        ui->label_106->setVisible(false);
        ui->label_121->setVisible(false);
        ui->label_123->setVisible(false);
        ui->label_125->setVisible(false);
        ui->label_97->setVisible(false);
        ui->label_127->setVisible(false);
        ui->label_98->setVisible(false);
        ui->label_128->setVisible(false);
        ui->label_99->setVisible(false);
        ui->label_132->setVisible(false);
        if(Fact == "")
        {
            ui->RunCal_Btn->setVisible(true);
            ui->RunCal_Btn_2->setVisible(false);
            ui->RunCal_Btn_3->setVisible(false);
            ui->label_100->setText("Std OD");
            ui->label_34->setText(Calibrate);
            ui->label_197->setVisible(true);
            ui->label_196->setVisible(true);
            ui->label_76->setVisible(false);
            ui->RunSample_Btn->setEnabled(true);
            ui->RunSample_Btn_2->setEnabled(false);
            ui->RunSample_Btn_3->setEnabled(false);
        }
        else
        {
            ui->RunCal_Btn->setVisible(true);
            ui->RunCal_Btn_2->setVisible(false);
            ui->RunCal_Btn_3->setVisible(false);
            ui->label_76->setVisible(true);
            ui->label_100->setText("Factor");
            ui->label_196->setText(Fact);
            ui->label_76->setText(Fact);
            ui->label_196->setVisible(false);
            ui->label_197->setVisible(false);
        }
        Wave_LED();
    }
    else if(Rctn == "TwoPoint" )
    {
        ui->stackedWidget->setCurrentIndex(2);
        ui->TestName_Lbl_5->setText(TestName);
        clearGraph_end();
        ui->RunSample_Btn->setEnabled(false);
        ui->RunSample_Btn_2->setEnabled(false);
        ui->RunSample_Btn_3->setEnabled(false);
        ui->RunCal_Btn_2->setEnabled(true);
        ui->label_75->setVisible(false);
        ui->label_208->setVisible(false);
        ui->label_209->setVisible(false);
        ui->label_72->setVisible(false);
        ui->label_119->setVisible(false);

        // Two_Point Btn Hide

        ui->TestName_Lbl_5->setVisible(true);
        ui->Save_Btn_3->setVisible(true);
        ui->Patient_Info_Lbl_5->setVisible(true);
        ui->pushButton_202->setVisible(true);
        ui->PatientInfo_LineEdit_2->setVisible(true);
        ui->RunBlank_Btn_2->setVisible(true);
        ui->RunCal_Btn_2->setVisible(true);
        ui->label_197->setVisible(true);
        ui->Save_Btn_6->setVisible(true);
        ui->RunSample_Btn_2->setVisible(true);
        ui->Print_Btn_2->setVisible(true);
        ui->label_120->setVisible(false);
        ui->label_122->setVisible(false);
        ui->label_34->setText("");
        ui->label_196->setText("");
        ui->label_203->setVisible(false);
        ui->label_204->setVisible(false);

        // End_Point Btn Hide

        ui->TestName_Lbl->setVisible(false);
        ui->Save_Btn_2->setVisible(false);
        ui->Patient_Info_Lbl_4->setVisible(false);
        ui->pushButton_117->setVisible(false);
        ui->PatientInfo_LineEdit->setVisible(false);
        ui->RunBlank_Btn->setVisible(false);
        ui->label->setVisible(true);
        ui->RunCal_Btn->setVisible(false);
        ui->label_100->setVisible(true);
        ui->label_34->setVisible(true);
        ui->label_197->setVisible(false);
        ui->label_207->setVisible(false);
        ui->label_196->setVisible(true);
        ui->Save_Btn_5->setVisible(false);
        ui->RunSample_Btn->setVisible(false);
        ui->label_33->setVisible(true);
        ui->Unit_lineEdit->setVisible(true);
        ui->Print_Btn->setVisible(false);
        ui->label_6->setVisible(false);
        ui->label_7->setVisible(false);

        //Kinetic Btn _Hide

        ui->TestName_Lbl_6->setVisible(false);
        ui->Save_Btn_4->setVisible(false);
        ui->Patient_Info_Lbl_6->setVisible(false);
        ui->pushButton_203->setVisible(false);
        ui->PatientInfo_LineEdit_3->setVisible(false);
        ui->RunBlank_Btn_3->setVisible(false);
        ui->RunCal_Btn_3->setVisible(false);
        ui->label_98->setVisible(false);
        ui->label_197->setVisible(false);
        ui->Save_Btn_7->setVisible(false);
        ui->RunSample_Btn_3->setVisible(false);
        ui->Print_Btn_3->setVisible(false);
        ui->label_106->setVisible(false);
        ui->label_121->setVisible(false);
        ui->label_123->setVisible(false);
        ui->label_125->setVisible(false);
        ui->label_97->setVisible(false);
        ui->label_127->setVisible(false);
        ui->label_98->setVisible(false);
        ui->label_128->setVisible(false);
        ui->label_99->setVisible(false);
        ui->label_132->setVisible(false);
        if(Fact == "")
        {
            ui->RunCal_Btn_2->setVisible(true);
            ui->label_203->setText("ΔA/min");
            ui->label_100->setText("Std OD");
            ui->label_34->setText(Calibrate);
            ui->label_197->setVisible(true);
            ui->label_203->setVisible(false);
            ui->label_204->setVisible(false);
            ui->label_76->setVisible(false);
            ui->RunSample_Btn->setEnabled(false);
            ui->RunSample_Btn_2->setEnabled(true);
            ui->RunSample_Btn_3->setEnabled(false);
        }
        else
        {
            ui->RunCal_Btn_2->setVisible(true);
            ui->label_100->setText("Factor");
            ui->label_196->setText(Fact);
            ui->label_76->setText(Fact);
            ui->label_197->setVisible(false);
            ui->label_203->setVisible(false);
            ui->label_204->setVisible(false);
            ui->label_76->setVisible(true);

            ui->label_196->setVisible(false);
        }
        Wave_LED();
    }
    else if(Rctn == "Kinetic" )
    {
        ui->stackedWidget->setCurrentIndex(2);
        ui->TestName_Lbl_6->setText(TestName);
        clearGraph_end();
        ui->RunSample_Btn->setEnabled(false);
        ui->RunSample_Btn_2->setEnabled(false);
        ui->RunSample_Btn_3->setEnabled(false);
        ui->label_194->setVisible(false);
        ui->label_195->setVisible(false);
        ui->label_198->setVisible(false);
        ui->label_75->setVisible(false);
        ui->label_208->setVisible(false);
        ui->label_209->setVisible(false);

        //Kinetic Btn _Hide

        ui->TestName_Lbl_6->setVisible(true);
        ui->Save_Btn_4->setVisible(true);
        ui->Patient_Info_Lbl_6->setVisible(true);
        ui->pushButton_203->setVisible(true);
        ui->PatientInfo_LineEdit_3->setVisible(true);
        ui->RunBlank_Btn_3->setVisible(true);
        ui->RunCal_Btn_3->setVisible(true);

        ui->label_197->setVisible(false);
        ui->label_207->setVisible(false);
        ui->Save_Btn_7->setVisible(true);
        ui->RunSample_Btn_3->setVisible(true);
        ui->Print_Btn_3->setVisible(true);
        ui->label_106->setVisible(false);
        ui->label_121->setVisible(false);
        ui->label_123->setVisible(false);
        ui->label_12->setVisible(true);
        ui->label_32->setVisible(true);
        ui->label_125->setVisible(false);

        // End_Point Btn Hide

        ui->TestName_Lbl->setVisible(true);
        ui->Save_Btn_2->setVisible(false);
        ui->Patient_Info_Lbl_4->setVisible(false);
        ui->pushButton_117->setVisible(false);
        ui->PatientInfo_LineEdit->setVisible(false);
        ui->RunBlank_Btn->setVisible(false);
        ui->label->setVisible(true);
        ui->RunCal_Btn->setVisible(false);
        ui->label_100->setVisible(true);
        ui->label_34->setVisible(true);
        ui->label_197->setVisible(true);
        ui->label_196->setVisible(true);
        ui->Save_Btn_5->setVisible(false);
        ui->RunSample_Btn->setVisible(false);
        ui->label_33->setVisible(true);
        ui->Unit_lineEdit->setVisible(true);
        ui->Print_Btn->setVisible(false);

        ui->label_6->setVisible(false);
        ui->label_7->setVisible(false);

        // Two_Point Btn Hide

        ui->TestName_Lbl_5->setVisible(false);
        ui->Save_Btn_3->setVisible(false);
        ui->Patient_Info_Lbl_5->setVisible(false);
        ui->pushButton_202->setVisible(false);
        ui->PatientInfo_LineEdit_2->setVisible(false);
        ui->RunBlank_Btn_2->setVisible(false);
        ui->RunCal_Btn_2->setVisible(false);
        ui->label_197->setVisible(false);
        ui->Save_Btn_6->setVisible(false);
        ui->RunSample_Btn_2->setVisible(false);
        ui->Print_Btn_2->setVisible(false);
        ui->label_120->setVisible(false);
        ui->label_122->setVisible(false);
        ui->label_72->setVisible(false);
        ui->label_119->setVisible(false);
        ui->label_99->setVisible(false);
        ui->label_132->setVisible(false);
        ui->label_196->setVisible(false);
        ui->label_97->setVisible(false);
        ui->label_98->setVisible(false);
        ui->label_127->setVisible(false);
        ui->label_128->setVisible(false);
        ui->label_34->setText("");
        ui->label_196->setText("");

        if(Fact == "")
        {
            ui->RunCal_Btn_3->setVisible(true);
            ui->label_197->setVisible(true);
            ui->label_100->setText("Std OD");
            ui->label_203->setText("ΔA/min");
            ui->label_34->setText(Calibrate);
            ui->label_76->setVisible(false);
            ui->RunSample_Btn->setEnabled(false);
            ui->RunSample_Btn_2->setEnabled(false);
            ui->RunSample_Btn_3->setEnabled(true);
            ui->label_99->setVisible(false);
            ui->label_132->setVisible(false);
            ui->label_196->setVisible(true);
            ui->label_97->setVisible(false);
            ui->label_98->setVisible(false);
            ui->label_127->setVisible(false);
            ui->label_128->setVisible(false);
        }
        else
        {
            ui->RunCal_Btn_3->setVisible(true);
            ui->label_100->setText("Factor");
            ui->label_76->setText(Fact);
            ui->label_76->setVisible(true);
            ui-> label_203->setText("ΔA/min");
            ui->label_99->setVisible(false);
            ui->label_132->setVisible(false);
            ui->label_196->setVisible(false);
            ui->label_97->setVisible(false);
            ui->label_98->setVisible(false);
            ui->label_127->setVisible(false);
            ui->label_128->setVisible(false);
        }
        Wave_LED();
    }

}
