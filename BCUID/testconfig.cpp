#include "mainwindow.h"
#include "ui_mainwindow.h"

static QString array[100]={""};

//********************Test Configuration Button**************************

void MainWindow::on_TestConfig_Btn_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
//********************Test Configuration (Add New Test)**************************
void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
    ui->tabWidget_2->setCurrentIndex(0);
    ui->lineEdit_4->setText("");
    ui->lineEdit_5->setText("");
    ui->lineEdit_6->setText("");
    ui->lineEdit_7->setText("");
    ui->lineEdit_8->setText("");
    ui->lineEdit_22->setText("");
    ui->lineEdit_9->setText("");
    ui->lineEdit_10->setText("");
    ui->lineEdit_12->setText("");
    ui->lineEdit_11->setText("");
    ui->lineEdit_88->setText("");
    ui->lineEdit_92->setText("");
    ui->lineEdit_89->setText("");
    ui->lineEdit_95->setText("");
    ui->lineEdit_90->setText("");
    ui->lineEdit_94->setText("");
    ui->lineEdit_91->setText("");
    ui->lineEdit_93->setText("");
    ui->lineEdit_21->setText("");
    ui->lineEdit_23->setText("");
    ui->lineEdit_26->setText("");
    ui->lineEdit_25->setText("");
    ui->lineEdit_28->setText("");
    ui->lineEdit_29->setText("");
    ui->lineEdit_141->setText("");
    ui->lineEdit_142->setText("");
}

void MainWindow::on_Save_Btn_clicked()
{
    //ui->stackedWidget->setCurrentIndex(0);


    QString name, unit ,  wave,rctn,temp, fact, blnk, dely, read, lag, linmin, linmax, normin, normax;
    QString mode, nostd, rpt, con1,con2,con3,con4,con5,con6,con7,con8;
    QString ctrl1avg, ctrl1min, ctrl1max , ctrl1bno, ctrl2avg, ctrl2min,ctrl2max, ctrl2bno , Inc_Dec;

    name=ui->lineEdit_4->text();
    unit=ui->lineEdit_5->text();
    wave = ui->WaveLength_Combo->currentText();
    rctn=ui->ReactionType_Combo->currentText();
    temp=ui->Temp_Combo->currentText();
    fact=ui->lineEdit_6->text();
    blnk=ui->BlankType_Combo->currentText();
    dely=ui->lineEdit_7->text();
    read=ui->lineEdit_8->text();
    lag=ui->lineEdit_22->text();
    linmin=ui->lineEdit_9->text();
    linmax=ui->lineEdit_10->text();
    normin=ui->lineEdit_12->text();
    normax=ui->lineEdit_11->text();
    mode=ui->comboBox->currentText();
    nostd=ui->comboBox_5->currentText();
    rpt=ui->comboBox_6->currentText();
    con1=ui->lineEdit_88->text();
    con2=ui->lineEdit_92->text();
    con3=ui->lineEdit_89->text();
    con4=ui->lineEdit_95->text();
    con5=ui->lineEdit_90->text();
    con6=ui->lineEdit_94->text();
    con7=ui->lineEdit_91->text();
    con8=ui->lineEdit_93->text();
    ctrl1avg=ui->lineEdit_21->text();
    ctrl1min=ui->lineEdit_23->text();
    ctrl1max=ui->lineEdit_141->text();
    ctrl1bno=ui->lineEdit_26->text();
    ctrl2avg=ui->lineEdit_25->text();
    ctrl2min=ui->lineEdit_28->text();
    ctrl1max=ui->lineEdit_142->text();
    ctrl2bno=ui->lineEdit_29->text();

    if(name=="")
    {
        ui->lineEdit_4->setStyleSheet("border: 1px solid red");
        ui->pushButton_118->setVisible(false);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Please Enter Test Name.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Test Name. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        if (msg.exec()== QMessageBox::Yes)
        {
            ui->pushButton_118->setVisible(true);
            ui->lineEdit_4->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->lineEdit_4->setStyleSheet("border: 1px solid red");
            ui->pushButton_118->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }


    }

    else if (unit=="")
    {
        ui->lineEdit_5->setStyleSheet("border: 1px solid red");
        ui->pushButton_119->setVisible(false);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Please Enter Test Unit.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            ui->pushButton_119->setVisible(true);
            ui->lineEdit_5->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->lineEdit_5->setStyleSheet("border: 1px solid red");
            ui->pushButton_119->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        //        QMessageBox::StandardButton reply;
        //        reply = QMessageBox::question(this, "WARNING", " Please Enter Test Unit. ",
        //                                      QMessageBox::Yes|QMessageBox::No);

    }
    else if (wave=="")
    {
        ui->WaveLength_Combo->setStyleSheet("border: 1px solid red");
        //ui->UserName_Btn->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Wavelength. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Please Enter Wavelength.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            //ui->LabName_Btn->setVisible(true);
            ui->WaveLength_Combo->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->WaveLength_Combo->setStyleSheet("border: 1px solid red");
            // ui->UserName_Btn->setVisible(false);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
    }
    else if (rctn=="") {
        ui->ReactionType_Combo->setStyleSheet("border: 1px solid red");
        //ui->UserName_Btn->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Reaction Type. ",
//                                      QMessageBox::Yes|QMessageBox::No);

        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText(" Please Enter Reaction Type.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)

        {
            //ui->LabName_Btn->setVisible(true);
            ui->ReactionType_Combo->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->ReactionType_Combo->setStyleSheet("border: 1px solid red");
            //ui->UserName_Btn->setVisible(false);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }

    }
    else if (temp=="") {
        ui->Temp_Combo->setStyleSheet("border: 1px solid red");
        // ui->UserName_Btn->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Temparature. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText(" Please Enter Temparature.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            // ui->LabName_Btn->setVisible(true);
            ui->Temp_Combo->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->Temp_Combo->setStyleSheet("border: 1px solid red");
            //ui->UserName_Btn->setVisible(false);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }

    }
    else if (fact=="") {
        ui->lineEdit_6->setStyleSheet("border: 1px solid red");
        ui->pushButton_123->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Factor. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText(" Please Enter Factor.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            ui->pushButton_123->setVisible(true);
            ui->lineEdit_6->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->lineEdit_6->setStyleSheet("border: 1px solid red");
            ui->pushButton_123->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }

    }
    else if (blnk=="") {
        ui->BlankType_Combo->setStyleSheet("border: 1px solid red");
        //ui->UserName_Btn->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Blank Type. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Please Enter Blank Type.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            //ui->LabName_Btn->setVisible(true);
            ui->BlankType_Combo->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->BlankType_Combo->setStyleSheet("border: 1px solid red");
            //ui->UserName_Btn->setVisible(false);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }

    }
    else if (dely=="") {
        ui->lineEdit_7->setStyleSheet("border: 1px solid red");
        ui->pushButton_124->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Dely Time. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Please Enter Dely Time. ");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            ui->pushButton_124->setVisible(true);
            ui->lineEdit_7->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->lineEdit_7->setStyleSheet("border: 1px solid red");
            ui->pushButton_124->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }

    }
    else if (read=="") {
        ui->lineEdit_8->setStyleSheet("border: 1px solid red");
        ui->pushButton_122->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Read Time. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Please Enter Read Time.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            ui->pushButton_122->setVisible(true);
            ui->lineEdit_8->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->UserName->setStyleSheet("border: 1px solid red");
            ui->pushButton_122->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }

    }
    else if (lag=="") {
        ui->lineEdit_22->setStyleSheet("border: 1px solid red");
        ui->pushButton_121->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Lag Time. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText(" Please Enter Lag Time.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            ui->pushButton_121->setVisible(true);
            ui->lineEdit_22->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->lineEdit_22->setStyleSheet("border: 1px solid red");
            ui->pushButton_121->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }

    }
    else if (linmin=="") {
        ui->lineEdit_9->setStyleSheet("border: 1px solid red");
        ui->pushButton_120->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Linear Min. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Please Enter Linear Min.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            ui->pushButton_120->setVisible(true);
            ui->lineEdit_9->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->lineEdit_9->setStyleSheet("border: 1px solid red");
            ui->pushButton_120->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }

    }
    else if (linmax=="") {
        ui->lineEdit_10->setStyleSheet("border: 1px solid red");
        ui->pushButton_120->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Linear Max. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Please Enter Linear Max.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            ui->pushButton_120->setVisible(true);
            ui->lineEdit_10->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->lineEdit_10->setStyleSheet("border: 1px solid red");
            ui->pushButton_120->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
    }
    else if (normin=="") {
        ui->lineEdit_12->setStyleSheet("border: 1px solid red");
        ui->pushButton_126->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Normal Min. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText(" Please Enter Normal Min.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            ui->pushButton_126->setVisible(true);
            ui->lineEdit_12->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->lineEdit_12->setStyleSheet("border: 1px solid red");
            ui->pushButton_126->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }

    }
    else if (normax=="") {
        ui->lineEdit_11->setStyleSheet("border: 1px solid red");
        ui->pushButton_127->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Normal Max. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Please Enter Normal Max.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            ui->pushButton_127->setVisible(true);
            ui->lineEdit_11->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }
        else
        {
            ui->lineEdit_11->setStyleSheet("border: 1px solid red");
            ui->pushButton_127->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(0);
        }

    }
    else if (mode=="") {
        ui->comboBox->setStyleSheet("border: 1px solid red");
        //ui->UserName_Btn->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Mode. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Please Enter Mode.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            //ui->LabName_Btn->setVisible(true);
            ui->comboBox->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(1);
        }
        else
        {
            ui->comboBox->setStyleSheet("border: 1px solid red");
            //ui->UserName_Btn->setVisible(false);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(1);
        }

    }


    else if (nostd=="") {
        ui->comboBox_5->setStyleSheet("border: 1px solid red");
        //ui->UserName_Btn->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter No.of Stand. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText(" Please Enter Repeat.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            //ui->LabName_Btn->setVisible(true);
            ui->comboBox_5->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(1);
        }
        else
        {
            ui->comboBox_5->setStyleSheet("border: 1px solid red");
            //ui->UserName_Btn->setVisible(false);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(1);
        }

    }
    else if (rpt=="") {
        ui->comboBox_6->setStyleSheet("border: 1px solid red");
        //ui->UserName_Btn->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter Repeat. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText(" Please Enter Repeat.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            //ui->comboBox_6->setVisible(true);
            ui->comboBox_6->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(1);
        }
        else
        {
            ui->comboBox_6->setStyleSheet("border: 1px solid red");
            // ui->UserName_Btn->setVisible(false);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(1);
        }

    }
    else if (con1=="") {
        ui->lineEdit_88->setStyleSheet("border: 1px solid red");
        ui->pushButton_207->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter con1. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText(" Please Enter con1.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            ui->pushButton_207->setVisible(true);
            ui->lineEdit_88->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(1);
        }
        else
        {
            ui->lineEdit_88->setStyleSheet("border: 1px solid red");
            ui->pushButton_207->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(1);
        }

    }
    else if (con2=="") {
        ui->lineEdit_92->setStyleSheet("border: 1px solid red");
        ui->pushButton_213->setVisible(false);
//        QMessageBox::StandardButton reply;
//        reply = QMessageBox::question(this, "WARNING", " Please Enter con2. ",
//                                      QMessageBox::Yes|QMessageBox::No);
        QMessageBox msg;
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        QPixmap p("/home/pi/git/BCUIDF/img/notification.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Please Enter con2.");
        msg.setStandardButtons(QMessageBox::Yes);
        msg.setFixedWidth(500);

        if (msg.exec() == QMessageBox::Yes)
        {
            ui->pushButton_213->setVisible(true);
            ui->lineEdit_92->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(1);
        }
        else
        {
            ui->lineEdit_92->setStyleSheet("border: 1px solid red");
            ui->pushButton_213->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(1);
        }

    }
    // else if (con3=="") {
    //     ui->lineEdit_89->setStyleSheet("border: 1px solid red");
    //     ui->pushButton_210->setVisible(false);
    //     QMessageBox::StandardButton reply;
    //     reply = QMessageBox::question(this, "WARNING", " Please Enter con3. ",
    //                                   QMessageBox::Yes|QMessageBox::No);
    //     if (reply == QMessageBox::Yes)
    //     {
    //         ui->pushButton_210->setVisible(true);
    //         ui->lineEdit_89->setStyleSheet("border: none");
    //         ui->stackedWidget->setCurrentIndex(4);
    //         ui->tabWidget_2->setCurrentIndex(1);
    //     }
    //     else
    //     {
    //         ui->lineEdit_89->setStyleSheet("border: 1px solid red");
    //         ui->pushButton_210->setVisible(true);
    //         ui->stackedWidget->setCurrentIndex(4);
    //         ui->tabWidget_2->setCurrentIndex(1);
    //     }

    // }
    // else if (con4=="") {
    //     ui->lineEdit_95->setStyleSheet("border: 1px solid red");
    //     ui->pushButton_212->setVisible(false);
    //     QMessageBox::StandardButton reply;
    //     reply = QMessageBox::question(this, "WARNING", " Please Enter con4. ",
    //                                   QMessageBox::Yes|QMessageBox::No);
    //     if (reply == QMessageBox::Yes)
    //     {
    //         ui->pushButton_212->setVisible(true);
    //         ui->lineEdit_95->setStyleSheet("border: none");
    //         ui->stackedWidget->setCurrentIndex(4);
    //         ui->tabWidget_2->setCurrentIndex(1);
    //     }
    //     else
    //     {
    //         ui->lineEdit_95->setStyleSheet("border: 1px solid red");
    //         ui->pushButton_212->setVisible(true);
    //         ui->stackedWidget->setCurrentIndex(4);
    //         ui->tabWidget_2->setCurrentIndex(1);
    //     }

    // }
    // else if (con5=="") {
    //     ui->lineEdit_90->setStyleSheet("border: 1px solid red");
    //     ui->pushButton_208->setVisible(false);
    //     QMessageBox::StandardButton reply;
    //     reply = QMessageBox::question(this, "WARNING", " Please Enter con5. ",
    //                                   QMessageBox::Yes|QMessageBox::No);
    //     if (reply == QMessageBox::Yes)
    //     {
    //         ui->pushButton_208->setVisible(true);
    //         ui->lineEdit_90->setStyleSheet("border: none");
    //         ui->stackedWidget->setCurrentIndex(4);
    //         ui->tabWidget_2->setCurrentIndex(1);
    //     }
    //     else
    //     {
    //         ui->lineEdit_90->setStyleSheet("border: 1px solid red");
    //         ui->pushButton_208->setVisible(true);
    //         ui->stackedWidget->setCurrentIndex(4);
    //         ui->tabWidget_2->setCurrentIndex(1);
    //     }

    // }
    // else if (con6=="") {
    //     ui->lineEdit_94->setStyleSheet("border: 1px solid red");
    //     ui->pushButton_214->setVisible(false);
    //     QMessageBox::StandardButton reply;
    //     reply = QMessageBox::question(this, "WARNING", " Please Enter con6. ",
    //                                   QMessageBox::Yes|QMessageBox::No);
    //     if (reply == QMessageBox::Yes)
    //     {
    //         ui->pushButton_214->setVisible(true);
    //         ui->lineEdit_94->setStyleSheet("border: none");
    //         ui->stackedWidget->setCurrentIndex(4);
    //         ui->tabWidget_2->setCurrentIndex(1);
    //     }
    //     else
    //     {
    //         ui->lineEdit_94->setStyleSheet("border: 1px solid red");
    //         ui->pushButton_214->setVisible(true);
    //         ui->stackedWidget->setCurrentIndex(4);
    //         ui->tabWidget_2->setCurrentIndex(1);
    //     }

    // }
    // else if (con7=="") {
    //     ui->lineEdit_91->setStyleSheet("border: 1px solid red");
    //     ui->pushButton_209->setVisible(false);
    //     QMessageBox::StandardButton reply;
    //     reply = QMessageBox::question(this, "WARNING", " Please Enter con7. ",
    //                                   QMessageBox::Yes|QMessageBox::No);
    //     if (reply == QMessageBox::Yes)
    //     {
    //         ui->pushButton_209->setVisible(true);
    //         ui->lineEdit_91->setStyleSheet("border: none");
    //         ui->stackedWidget->setCurrentIndex(4);
    //         ui->tabWidget_2->setCurrentIndex(1);
    //     }
    //     else
    //     {
    //         ui->lineEdit_91->setStyleSheet("border: 1px solid red");
    //         ui->pushButton_209->setVisible(true);
    //         ui->stackedWidget->setCurrentIndex(4);
    //         ui->tabWidget_2->setCurrentIndex(1);
    //     }

    // }
    // else if (con8=="") {
    //     ui->lineEdit_93->setStyleSheet("border: 1px solid red");
    //     ui->pushButton_211->setVisible(false);
    //     QMessageBox::StandardButton reply;
    //     reply = QMessageBox::question(this, "WARNING", " Please Enter con8. ",
    //                                   QMessageBox::Yes|QMessageBox::No);
    //     if (reply == QMessageBox::Yes)
    //     {
    //         ui->pushButton_211->setVisible(true);
    //         ui->lineEdit_93->setStyleSheet("border: none");
    //         ui->stackedWidget->setCurrentIndex(4);
    //         ui->tabWidget_2->setCurrentIndex(1);
    //     }
    //     else
    //     {
    //         ui->lineEdit_93->setStyleSheet("border: 1px solid red");
    //         ui->pushButton_211->setVisible(true);
    //         ui->stackedWidget->setCurrentIndex(4);
    //         ui->tabWidget_2->setCurrentIndex(1);
    //     }

    // }

    else if (ctrl1avg=="") {
        ui->lineEdit_21->setStyleSheet("border: 1px solid red");
        ui->pushButton_136->setVisible(false);
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "WARNING", " Please Enter Ctrl1avg. ",
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes)
        {
            ui->pushButton_136->setVisible(true);
            ui->lineEdit_21->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(2);
        }
        else
        {
            ui->lineEdit_21->setStyleSheet("border: 1px solid red");
            ui->pushButton_136->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(2);
        }

    }
    else if (ctrl1min=="") {
        ui->lineEdit_23->setStyleSheet("border: 1px solid red");
        ui->pushButton_137->setVisible(false);
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "WARNING", " Please Enter Ctrl1min. ",
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes)
        {
            ui->pushButton_137->setVisible(true);
            ui->lineEdit_23->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(2);
        }
        else
        {
            ui->lineEdit_23->setStyleSheet("border: 1px solid red");
            ui->pushButton_137->setVisible(true);
            ui->stackedWidget->setCurrentIndex(4);
            ui->tabWidget_2->setCurrentIndex(2);
        }

    }

    else
    {
        ui->lineEdit_4->setStyleSheet("border:none");
        ui->lineEdit_5->setStyleSheet("border:none");
        ui->lineEdit_6->setStyleSheet("border:none");
        ui->lineEdit_7->setStyleSheet("border:none");
        ui->lineEdit_8->setStyleSheet("border:none");
        ui->lineEdit_9->setStyleSheet("border:none");
        ui->lineEdit_10->setStyleSheet("border:none");
        ui->lineEdit_11->setStyleSheet("border:none");
        ui->lineEdit_12->setStyleSheet("border:none");
        ui->lineEdit_21->setStyleSheet("border:none");
        ui->lineEdit_22->setStyleSheet("border:none");
        ui->lineEdit_23->setStyleSheet("border:none");
        ui->lineEdit_25->setStyleSheet("border:none");
        ui->lineEdit_26->setStyleSheet("border:none");
        ui->lineEdit_28->setStyleSheet("border:none");
        ui->lineEdit_29->setStyleSheet("border:none");
        ui->lineEdit_88->setStyleSheet("border:none");
        ui->lineEdit_89->setStyleSheet("border:none");
        ui->lineEdit_90->setStyleSheet("border:none");
        ui->lineEdit_91->setStyleSheet("border:none");
        ui->lineEdit_92->setStyleSheet("border:none");
        ui->lineEdit_93->setStyleSheet("border:none");
        ui->lineEdit_94->setStyleSheet("border:none");
        ui->lineEdit_95->setStyleSheet("border:none");
        ui->lineEdit_141->setStyleSheet("border:none");
        ui->lineEdit_142->setStyleSheet("border:none");

        ui->pushButton_118->setVisible(true);
        ui->pushButton_119->setVisible(true);
        ui->pushButton_120->setVisible(true);
        ui->pushButton_121->setVisible(true);
        ui->pushButton_122->setVisible(true);
        ui->pushButton_123->setVisible(true);
        ui->pushButton_124->setVisible(true);
        ui->pushButton_125->setVisible(true);
        ui->pushButton_126->setVisible(true);
        ui->pushButton_127->setVisible(true);
        ui->pushButton_138->setVisible(true);
        ui->pushButton_139->setVisible(true);
        ui->pushButton_140->setVisible(true);
        ui->pushButton_141->setVisible(true);
        ui->pushButton_137->setVisible(true);
        ui->pushButton_136->setVisible(true);

        ui->pushButton_207->setVisible(true);
        ui->pushButton_208->setVisible(true);
        ui->pushButton_209->setVisible(true);
        ui->pushButton_210->setVisible(true);
        ui->pushButton_211->setVisible(true);
        ui->pushButton_212->setVisible(true);
        ui->pushButton_213->setVisible(true);
        ui->pushButton_214->setVisible(true);
        ui->pushButton_218->setVisible(true);
        ui->pushButton_219->setVisible(true);



        QSqlQuery qry;

        qry.prepare("insert into test(name,wave,rctn,unit,temp,fact,blnk,dely,read,lag,linmin,linmax,normin,normax,mode,nostd,rpt,con1,con2,con3,con4,con5,con6,con7,con8,"
                    "ctrl1avg,ctrl1min,ctrl1max,ctrl1bno,ctrl2avg,ctrl2min,ctrl2max,ctrl2bno, Inc_Dec) values(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");

        qry.addBindValue(name);
        qry.addBindValue(wave);
        qry.addBindValue(rctn);
        qry.addBindValue(unit);
        qry.addBindValue(temp);
        qry.addBindValue(fact);
        qry.addBindValue(blnk);
        qry.addBindValue(dely);
        qry.addBindValue(read);
        qry.addBindValue(lag);
        qry.addBindValue(linmin);
        qry.addBindValue(linmax);
        qry.addBindValue(normin);
        qry.addBindValue(normax);
        qry.addBindValue(mode);
        qry.addBindValue(nostd);
        qry.addBindValue(rpt);
        qry.addBindValue(con1);
        qry.addBindValue(con2);
        qry.addBindValue(con3);
        qry.addBindValue(con4);
        qry.addBindValue(con5);
        qry.addBindValue(con6);
        qry.addBindValue(con7);
        qry.addBindValue(con8);
        qry.addBindValue(ctrl1avg);
        qry.addBindValue(ctrl1min);
        qry.addBindValue(ctrl1max);
        qry.addBindValue(ctrl1bno);
        qry.addBindValue(ctrl2avg);
        qry.addBindValue(ctrl2min);
        qry.addBindValue(ctrl2max);
        qry.addBindValue(ctrl2bno);
        qry.addBindValue(Inc_Dec);
        qry.exec();
        ui->stackedWidget->setCurrentIndex(0);

        qDebug()<<"Ok";
    }




}


//********************Test Configuration (Edit Button)**************************


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);

    ui->gridLayout->update();
    ui->gridLayout_6->update();
    ui->gridLayout_8->update();
    ui->tabWidget_6->setCurrentIndex(0);
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
                connect(button, &QPushButton::clicked, this, &MainWindow::cald2);
                ui->gridLayout_6->addWidget(button,i,j);
                //lay->addWidget(button,i,j);
            }
            count1++;
        }
    }
}

void MainWindow::cald2()
{
    QObject *senderObj = sender(); // This will give Sender object
    QString senderObjName = senderObj->objectName();
    ui->label_16->setText(senderObjName);
    ui->lineEdit_24->setText(senderObjName);
    ui->stackedWidget->setCurrentIndex(6);
    ui->tabWidget_4->setCurrentIndex(0);

    QString unit;
    QSqlQuery query;
    QString  Wave ,Rctn , Blnk , Temp, Fact , Dely, Read, Lag, Linmin, Linmax, Normin, Normax;
    QString Mode , Nostd , Rpt , Con1,Con2,Con3,Con4,Con5,Con6,Con7,Con8;
    QString Ctrl1avg, Ctrl1min,Ctrl1max, Ctrl1bno, Ctrl2avg, Ctrl2min,Ctrl2max, Ctrl2bno , StandAbso , Inc_Dec;


    QString TestName = ui->label_16->text();

    int  wave =0 ,rctn =0 , temp =0 ,blnk =0,fact = 0,  dely = 0, read = 0, lag = 0, linmin = 0, linmax = 0, normin = 0, normax = 0;
    int  mode = 0, nostd =0, rpt= 0,con1 = 0,con2 = 0,con3 = 0,con4 = 0,con5 = 0,con6 = 0,con7 = 0,con8 = 0;
    int ctrl1avg = 0, ctrl1min = 0,ctrl1max=0, ctrl1bno = 0, ctrl2avg = 0, ctrl2min = 0,ctrl2max=0, ctrl2bno = 0 , StandAbs =0;

    Wave = char (wave);
    Rctn = char (rctn);
    Blnk = char (blnk);
    Temp = char (temp);
    Fact = char (fact);
    Dely=char(dely);
    Read=char(read);
    Lag=char(lag);
    Linmin=char(linmin);
    Linmax=char(linmax);
    Normin=char(normin);
    Normax=char(normax);
    Mode = char (mode);
    Nostd = char (nostd);
    Rpt = char (rpt);
    Con1=char(con1);
    Con2=char(con2);
    Con3=char(con3);
    Con4=char(con4);
    Con5=char(con5);
    Con6=char(con6);
    Con7=char(con7);
    Con8=char(con8);

    Ctrl1avg=char(ctrl1avg);
    Ctrl1min=char(ctrl1min);
    Ctrl1max=char(ctrl1max);
    Ctrl1bno=char(ctrl1bno);
    Ctrl2avg=char(ctrl2avg);
    Ctrl2min=char(ctrl2min);
    Ctrl2max=char(ctrl2max);
    Ctrl2bno=char(ctrl2bno);
    StandAbso=char(StandAbs);
    //Inc_Dec=char(inc_dec);

    query.prepare("select * from test where name='"+TestName+"'");
    query.exec();
    while(query.next())
    {
        unit=query.value(4).toString();
        Wave=query.value(2).toString();
        Rctn=query.value(3).toString();
        Temp=query.value(5).toString();
        Fact=query.value(6).toString();
        Blnk=query.value(7).toString();
        Dely=query.value(8).toString();
        Read=query.value(9).toString();
        Lag=query.value(10).toString();
        Linmin=query.value(11).toString();
        Linmax=query.value(12).toString();
        Normin=query.value(13).toString();
        Normax=query.value(14).toString();
        Mode=query.value(15).toString();
        Nostd=query.value(16).toString();
        Rpt=query.value(17).toString();
        Con1=query.value(18).toString();
        Con2=query.value(19).toString();
        Con3=query.value(20).toString();
        Con4=query.value(21).toString();
        Con5=query.value(22).toString();
        Con6=query.value(23).toString();
        Con7=query.value(24).toString();
        Con8=query.value(25).toString();
        Ctrl1avg=query.value(26).toString();
        Ctrl1min=query.value(27).toString();
        Ctrl1max=query.value(35).toString();
        Ctrl1bno=query.value(28).toString();
        Ctrl2avg=query.value(29).toString();
        Ctrl2min=query.value(30).toString();
        Ctrl2max=query.value(34).toString();
        Ctrl2bno=query.value(31).toString();
        StandAbso=query.value(33).toString();
        Inc_Dec=query.value(34).toString();

    }

    ui->lineEdit_27->setText(unit);
    ui->WaveLength_Combo_2->setCurrentText(Wave);
    ui->ReactionType_Combo_2->setCurrentText(Rctn);
    ui->Temp_Combo_2->setCurrentText(Temp);
    ui->lineEdit_30->setText(Fact);
    ui->BlankType_Combo_2->setCurrentText(Blnk);
    ui->lineEdit_31->setText(Dely);
    ui->lineEdit_32->setText(Read);
    ui->lineEdit_37->setText(Lag);
    ui->lineEdit_33->setText(Linmin);
    ui->lineEdit_34->setText(Linmax);
    ui->lineEdit_36->setText(Normin);
    ui->lineEdit_35->setText(Normax);
    ui->comboBox_2->setCurrentText(Mode);
    ui->comboBox_7->setCurrentText(Nostd);
    ui->comboBox_8->setCurrentText(Rpt);
    ui->lineEdit_112->setText(Con1);
    ui->lineEdit_116->setText(Con2);
    ui->lineEdit_113->setText(Con3);
    ui->lineEdit_119->setText(Con4);
    ui->lineEdit_114->setText(Con5);
    ui->lineEdit_118->setText(Con6);
    ui->lineEdit_115->setText(Con7);
    ui->lineEdit_117->setText(Con8);
    ui->lineEdit_58->setText(Ctrl1avg);
    ui->lineEdit_59->setText(Ctrl1min);
    ui->lineEdit_143->setText(Ctrl1max);
    ui->lineEdit_60->setText(Ctrl1bno);
    ui->lineEdit_61->setText(Ctrl2avg);
    ui->lineEdit_62->setText(Ctrl2min);
    ui->lineEdit_144->setText(Ctrl2max);
    ui->lineEdit_63->setText(Ctrl2bno);
    ui->lineEdit_104->setText(StandAbso);

}


void MainWindow::on_Update_Btn_clicked()
{

    QString name, unit;
    QSqlQuery query;

    QString  Fact, Wave, Rctn ,  Temp,Blnk, Dely, Read, Lag, Linmin, Linmax, Normin, Normax;
    QString Mode, Nostd, Rpt, Con1,Con2,Con3,Con4,Con5,Con6,Con7,Con8;
    QString Ctrl1avg, Ctrl1min,Ctrl1max, Ctrl1bno, Ctrl2avg, Ctrl2min,Ctrl2max, Ctrl2bno , Inc_Dec;

    int wave = 0, rctn = 0, temp = 0, fact = 0, blnk = 0, dely = 0, read = 0, lag = 0, linmin = 0, linmax = 0, normin = 0, normax = 0;
    int mode = 0, nostd = 0, rpt = 0, con1 = 0,con2 = 0,con3 = 0,con4 = 0,con5 = 0,con6 = 0,con7 = 0,con8 = 0;
    int ctrl1avg = 0, ctrl1min = 0,ctrl1max=0, ctrl1bno = 0, ctrl2avg = 0, ctrl2min = 0,ctrl2max=0, ctrl2bno = 0 ;


    Wave = char(wave);
    Fact=char(fact);
    Rctn=char(rctn);
    Temp=char(temp);
    Blnk =char (blnk);
    Dely=char(dely);
    Read=char(read);
    Lag=char(lag);
    Linmin=char(linmin);
    Linmax=char(linmax);
    Normin=char(normin);
    Normax=char(normax);
    Mode= char(mode);
    Nostd= char(nostd);
    Rpt= char(rpt);
    Con1=char(con1);
    Con2=char(con2);
    Con3=char(con3);
    Con4=char(con4);
    Con5=char(con5);
    Con6=char(con6);
    Con7=char(con7);
    Con8=char(con8);

    Ctrl1avg=char(ctrl1avg);
    Ctrl1min=char(ctrl1min);
    Ctrl1max=char(ctrl1max);
    Ctrl1bno=char(ctrl1bno);
    Ctrl2avg=char(ctrl2avg);
    Ctrl2min=char(ctrl2min);
    Ctrl2max=char(ctrl2max);
    Ctrl2bno=char(ctrl2bno);
    //Inc_Dec=char(inc_dec);


    name = ui->lineEdit_24->text();
    unit=ui->lineEdit_27->text();
    Wave=ui->WaveLength_Combo_2->currentText();
    Rctn=ui->ReactionType_Combo_2->currentText();
    Temp=ui->Temp_Combo_2->currentText();
    Fact=ui->lineEdit_30->text();
    Blnk=ui->BlankType_Combo_2->currentText();
    Dely=ui->lineEdit_31->text();
    Read=ui->lineEdit_32->text();
    Lag=ui->lineEdit_37->text();
    Linmin=ui->lineEdit_33->text();
    Linmax=ui->lineEdit_34->text();
    Normin=ui->lineEdit_36->text();
    Normax=ui->lineEdit_35->text();
    Mode=ui->comboBox_2->currentText();
    Nostd=ui->comboBox_7->currentText();
    Rpt=ui->comboBox_8->currentText();
    Con1=ui->lineEdit_112->text();
    Con2=ui->lineEdit_116->text();
    Con3=ui->lineEdit_113->text();
    Con4=ui->lineEdit_119->text();
    Con5=ui->lineEdit_114->text();
    Con6=ui->lineEdit_118->text();
    Con7=ui->lineEdit_115->text();
    Con8=ui->lineEdit_117->text();
    Ctrl1avg=ui->lineEdit_58->text();
    Ctrl1min=ui->lineEdit_59->text();
    Ctrl1max=ui->lineEdit_143->text();
    Ctrl1bno=ui->lineEdit_60->text();
    Ctrl2avg=ui->lineEdit_61->text();
    Ctrl2min=ui->lineEdit_62->text();
    Ctrl2max=ui->lineEdit_144->text();
    Ctrl2bno=ui->lineEdit_63->text();

    query.prepare("update test set name='"+name+"',unit='"+unit+"',wave='"+Wave+"', rctn='"+Rctn+"', temp='"+Temp+"', fact='"+Fact+"', blnk='"+Blnk+"', dely='"+Dely+"', read='"+Read+"', lag='"+Lag+"',linmin='"+Linmin+"', linmax='"+Linmax+"', normin='"+Normin+"', normax='"+Normax+"', mode='"+Mode+"', nostd='"+Nostd+"', rpt='"+Rpt+"', con1='"+Con1+"',con2='"+Con2+"',con3='"+Con3+"',con4='"+Con4+"',con5='"+Con5+"',con6='"+Con6+"',con7='"+Con7+"',con8='"+Con8+"',ctrl1avg='"+Ctrl1avg+"', ctrl1min='"+Ctrl1min+"',ctrl1max='"+Ctrl1max+"', ctrl1bno='"+Ctrl1bno+"', ctrl2avg='"+Ctrl2avg+"', ctrl2min='"+Ctrl2min+"', ctrl2max='"+Ctrl2max+"',ctrl2bno='"+Ctrl2bno+"' ,Inc_Dec='"+Inc_Dec+"'  where name='"+name+"'");
    if(query.exec())
    {
        QMessageBox::information(this,tr("Update"),tr("Updated"));
        //conn.connclose();
        ui->gridLayout->update();
        ui->gridLayout_6->update();
        ui->gridLayout_8->update();
        qDebug()<<"Update done";
        ui->stackedWidget->setCurrentIndex(0);
    }
    else
    {

    }


}

//********************Test Configuration (Delete Button)**************************



void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);

    ui->gridLayout->update();
    ui->gridLayout_6->update();
    ui->gridLayout_8->update();
    ui->tabWidget_7->setCurrentIndex(0);
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
                connect(button, &QPushButton::clicked, this, &MainWindow::cald3);
                ui->gridLayout_8->addWidget(button,i,j);
                //lay->addWidget(button,i,j);
            }
            count1++;
        }
    }

}

void MainWindow::cald3()
{
    QObject *senderObj = sender(); // This will give Sender object
    QString senderObjName = senderObj->objectName();

    ui->lineEdit_38->setText(senderObjName);
    ui->stackedWidget->setCurrentIndex(8);
    ui->tabWidget_5->setCurrentIndex(0);

    QString name, unit;
    QSqlQuery query;
    QString  Wave ,Rctn , Blnk , Temp, Fact , Dely, Read, Lag, Linmin, Linmax, Normin, Normax;
    QString Mode , Nostd , Rpt , Con1,Con2,Con3,Con4,Con5,Con6,Con7,Con8;
    QString Ctrl1avg, Ctrl1min,Ctrl1max, Ctrl1bno, Ctrl2avg, Ctrl2min,Ctrl2max, Ctrl2bno , StandAbso , Inc_Dec;


    QString TestName = ui->lineEdit_38->text();

    int  wave =0 ,rctn =0 , temp =0 ,blnk =0,fact = 0,  dely = 0, read = 0, lag = 0, linmin = 0, linmax = 0, normin = 0, normax = 0;
    int  mode = 0, nostd =0, rpt= 0,con1 = 0,con2 = 0,con3 = 0,con4 = 0,con5 = 0,con6 = 0,con7 = 0,con8 = 0;
    int ctrl1avg = 0, ctrl1min = 0,ctrl1max=0, ctrl1bno = 0, ctrl2avg = 0, ctrl2min = 0,ctrl2max=0, ctrl2bno = 0 , StandAbs = 0 ;

    Wave = char (wave);
    Rctn = char (rctn);
    Blnk = char (blnk);
    Temp = char (temp);
    Fact = char (fact);
    Dely=char(dely);
    Read=char(read);
    Lag=char(lag);
    Linmin=char(linmin);
    Linmax=char(linmax);
    Normin=char(normin);
    Normax=char(normax);
    Mode = char (mode);
    Nostd = char (nostd);
    Rpt = char (rpt);
    Con1=char(con1);
    Con2=char(con2);
    Con3=char(con3);
    Con4=char(con4);
    Con5=char(con5);
    Con6=char(con6);
    Con7=char(con7);
    Con8=char(con8);

    Ctrl1avg=char(ctrl1avg);
    Ctrl1min=char(ctrl1min);
    Ctrl1max=char(ctrl1max);
    Ctrl1bno=char(ctrl1bno);
    Ctrl2avg=char(ctrl2avg);
    Ctrl2min=char(ctrl2min);
    Ctrl2max=char(ctrl2max);
    Ctrl2bno=char(ctrl2bno);
    StandAbso= char(StandAbs);
    //    Inc_Dec=char(inc_dec);

    query.prepare("select * from test where name='"+TestName+"'");
    query.exec();
    while(query.next())
    {
        unit=query.value(4).toString();
        Wave=query.value(2).toString();
        Rctn=query.value(3).toString();
        Temp=query.value(5).toString();
        Fact=query.value(6).toString();
        Blnk=query.value(7).toString();
        Dely=query.value(8).toString();
        Read=query.value(9).toString();
        Lag=query.value(10).toString();
        Linmin=query.value(11).toString();
        Linmax=query.value(12).toString();
        Normin=query.value(13).toString();
        Normax=query.value(14).toString();
        Mode=query.value(15).toString();
        Nostd=query.value(16).toString();
        Rpt=query.value(17).toString();
        Con1=query.value(18).toString();
        Con2=query.value(19).toString();
        Con3=query.value(20).toString();
        Con4=query.value(21).toString();
        Con5=query.value(22).toString();
        Con6=query.value(23).toString();
        Con7=query.value(24).toString();
        Con8=query.value(25).toString();
        Ctrl1avg=query.value(26).toString();
        Ctrl1min=query.value(27).toString();
        Ctrl1max=query.value(35).toString();
        Ctrl1bno=query.value(28).toString();
        Ctrl2avg=query.value(29).toString();
        Ctrl2min=query.value(30).toString();
        Ctrl2max=query.value(34).toString();
        Ctrl2bno=query.value(31).toString();
        StandAbso=query.value(33).toString();
        Inc_Dec=query.value(34).toString();

    }

    ui->lineEdit_39->setText(unit);
    ui->WaveLength_Combo_3->setCurrentText(Wave);
    ui->ReactionType_Combo_3->setCurrentText(Rctn);
    ui->Temp_Combo_3->setCurrentText(Temp);
    ui->lineEdit_40->setText(Fact);
    ui->BlankType_Combo_3->setCurrentText(Blnk);
    ui->lineEdit_41->setText(Dely);
    ui->lineEdit_54->setText(Read);
    ui->lineEdit_64->setText(Lag);
    ui->lineEdit_55->setText(Linmin);
    ui->lineEdit_56->setText(Linmax);
    ui->lineEdit_57->setText(Normin);
    ui->lineEdit_65->setText(Normax);
    ui->comboBox_3->setCurrentText(Mode);
    ui->comboBox_9->setCurrentText(Nostd);
    ui->comboBox_10->setCurrentText(Rpt);
    ui->lineEdit_128->setText(Con1);
    ui->lineEdit_132->setText(Con2);
    ui->lineEdit_129->setText(Con3);
    ui->lineEdit_135->setText(Con4);
    ui->lineEdit_130->setText(Con5);
    ui->lineEdit_134->setText(Con6);
    ui->lineEdit_131->setText(Con7);
    ui->lineEdit_133->setText(Con8);
    ui->lineEdit_66->setText(Ctrl1avg);
    ui->lineEdit_67->setText(Ctrl1min);
    ui->lineEdit_145->setText(Ctrl1max);
    ui->lineEdit_68->setText(Ctrl1bno);
    ui->lineEdit_69->setText(Ctrl2avg);
    ui->lineEdit_70->setText(Ctrl2min);
    ui->lineEdit_144->setText(Ctrl2max);
    ui->lineEdit_71->setText(Ctrl2bno);
    ui->lineEdit_120->setText(StandAbso);
}

void MainWindow::on_Delete_Btn_clicked()
{
    QString TestName=ui->lineEdit_38->text();
    QSqlQuery query;
    query.prepare("Delete from test where name='"+TestName+"'");
    if(query.exec())
    {
        QMessageBox::information(this,tr("Delete"),tr("Delete"));
        ui->gridLayout->update();
        ui->tableView->update();
        ui->gridLayout_2->update();
        ui->gridLayout_6->update();
        ui->gridLayout_8->update();
        ui->tabWidget->update();
        ui->tabWidget_6->update();
        ui->stackedWidget->setCurrentIndex(0);


    }
    else
    {
        QMessageBox::critical(this,tr("error::"),query.lastError().text());
    }
}

