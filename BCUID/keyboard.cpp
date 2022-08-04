#include "mainwindow.h"
#include "ui_mainwindow.h"
static int opt=0;

void MainWindow::on_pushButton_17_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_17->text());
}

void MainWindow::on_pushButton_13_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_13->text());
}

void MainWindow::on_pushButton_14_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_14->text());

}

void MainWindow::on_Patient_Name_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->label_4->setText("Patient Name");
    opt=119;
    ui->lineEdit->setText(ui->Patient_Name->text());
}

void MainWindow::on_Patient_Age_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Patient Age");
    opt=120;
    ui->lineEdit->setText(ui->Patient_Age->text());
}

void MainWindow::on_Patient_Gender_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->label_4->setText("Patient Gender");
    opt=121;
    //ui->lineEdit->setText(ui->Patient_Gender->text());
}

void MainWindow::on_pushButton_230_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(1);
    ui->label_4->setText("Maintenance Password");
    opt=122;
    ui->lineEdit->setText(ui->lineEdit_148->text());
}

void MainWindow::on_pushButton_240_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Sample ID");
    opt=123;
    ui->lineEdit->setText(ui->lineEdit_149->text());
}

void MainWindow::on_pushButton_47_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}

void MainWindow::on_pushButton_71_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(2);
}

void MainWindow::on_pushButton_46_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);
}

void MainWindow::on_pushButton_56_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::on_pushButton_18_clicked()
{
    QString text=ui->lineEdit->text();

    if(opt==1)
    {
        ui->PatientInfo_LineEdit->setText(text);
        ui->stackedWidget->setCurrentIndex(2);
    }
    else if(opt==2)
    {
        ui->lineEdit_4->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==3)
    {
        ui->lineEdit_5->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==4)
    {
        ui->lineEdit_6->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==5)
    {
        ui->lineEdit_7->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==6)
    {
        ui->lineEdit_8->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==7)
    {
        ui->lineEdit_22->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==8)
    {
        ui->lineEdit_9->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==9)
    {
        ui->lineEdit_10->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==10)
    {
        ui->lineEdit_12->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==11)
    {
        ui->lineEdit_11->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==12)
    {
        ui->lineEdit_88->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==13)
    {
        ui->lineEdit_92->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==14)
    {
        ui->lineEdit_89->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==15)
    {
        ui->lineEdit_95->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==16)
    {
        ui->lineEdit_90->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==17)
    {
        ui->lineEdit_94->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==18)
    {
        ui->lineEdit_91->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==19)
    {
        ui->lineEdit_93->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }

    else if(opt==20)
    {
        ui->lineEdit_21->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==21)
    {
        ui->lineEdit_23->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==22)
    {
        ui->lineEdit_26->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==23)
    {
        ui->lineEdit_25->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==24)
    {
        ui->lineEdit_28->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==25)
    {
        ui->lineEdit_29->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==26)
    {
        ui->lineEdit_24->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==27)
    {
        ui->lineEdit_27->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==28)
    {
        ui->lineEdit_30->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==29)
    {
        ui->lineEdit_31->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==30)
    {
        ui->lineEdit_32->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==31)
    {
        ui->lineEdit_37->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==32)
    {
        ui->lineEdit_33->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==33)
    {
        ui->lineEdit_34->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==34)
    {
        ui->lineEdit_36->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==35)
    {
        ui->lineEdit_35->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==36)
    {
        ui->lineEdit_112->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==37)
    {
        ui->lineEdit_116->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==38)
    {
        ui->lineEdit_113->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==39)
    {
        ui->lineEdit_119->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==40)
    {
        ui->lineEdit_114->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==41)
    {
        ui->lineEdit_118->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==42)
    {
        ui->lineEdit_115->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==43)
    {
        ui->lineEdit_117->setText(text);
        ui->stackedWidget->setCurrentIndex(6);

    }

    else if(opt==44)
    {
        ui->lineEdit_58->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==45)
    {
        ui->lineEdit_59->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==46)
    {
        ui->lineEdit_60->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==47)
    {
        ui->lineEdit_61->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==48)
    {
        ui->lineEdit_62->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==49)
    {
        ui->lineEdit_63->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==50)
    {
        ui->lineEdit_38->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==51)
    {
        ui->lineEdit_39->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==52)
    {
        ui->lineEdit_40->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==53)
    {
        ui->lineEdit_41->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==54)
    {
        ui->lineEdit_54->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==55)
    {
        ui->lineEdit_64->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==56)
    {
        ui->lineEdit_55->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==57)
    {
        ui->lineEdit_56->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==58)
    {
        ui->lineEdit_57->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==59)
    {
        ui->lineEdit_65->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==60)
    {
        ui->lineEdit_128->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==61)
    {
        ui->lineEdit_132->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==62)
    {
        ui->lineEdit_129->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==63)
    {
        ui->lineEdit_135->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==64)
    {
        ui->lineEdit_130->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==65)
    {
        ui->lineEdit_134->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==66)
    {
        ui->lineEdit_131->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==67)
    {
        ui->lineEdit_133->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }

    else if(opt==68)
    {
        ui->lineEdit_66->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==69)
    {
        ui->lineEdit_67->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==70)
    {
        ui->lineEdit_68->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }

    else if(opt==71)
    {
        ui->lineEdit_69->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==72)
    {
        ui->lineEdit_70->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==73)
    {
        ui->lineEdit_71->setText(text);
        ui->stackedWidget->setCurrentIndex(8);

    }

    else if(opt==74)
    {
        ui->lineEdit_42->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==75)
    {
        ui->lineEdit_43->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }

    else if(opt==76)
    {
        ui->lineEdit_45->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==77)
    {
        ui->lineEdit_44->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==78)
    {
        ui->lineEdit_47->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }

    else if(opt==79)
    {
        ui->lineEdit_46->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==80)
    {
        ui->lineEdit_48->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }

    else if(opt==81)
    {
        ui->lineEdit_49->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==82)
    {
        ui->lineEdit_51->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==83)
    {
        ui->lineEdit_50->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==84)
    {
        ui->lineEdit_53->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==85)
    {
        ui->lineEdit_52->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==86)
    {
        ui->PatientInfo_LineEdit_2->setText(text);
        ui->stackedWidget->setCurrentIndex(2);
    }

    else if(opt==87)
    {
        ui->PatientInfo_LineEdit_3->setText(text);
        ui->stackedWidget->setCurrentIndex(2);
    }

    else if(opt==88)
    {
        ui->lineEdit_2->setText(text);
        ui->stackedWidget->setCurrentIndex(17);
    }

    else if(opt==110)
    {
        ui->lineEdit_141->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==111)
    {
        ui->lineEdit_142->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==112)
    {
        ui->lineEdit_143->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==113)
    {
        ui->lineEdit_144->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==114)
    {
        ui->lineEdit_145->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }

    else if(opt==115)
    {
        ui->lineEdit_146->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }

    else if(opt==116)
    {
        ui->lineEdit_147->setText(text);
        ui->stackedWidget->setCurrentIndex(21);
    }

    else if(opt==117)
    {
        ui->LabName->setText(text);
        ui->stackedWidget->setCurrentIndex(23);
    }

    else if(opt==118)
    {
        ui->UserName->setText(text);
        ui->stackedWidget->setCurrentIndex(23);
    }

    else if(opt==119)
    {
        ui->Patient_Name->setText(text);
        ui->stackedWidget->setCurrentIndex(25);
    }
    else if(opt==120)
    {
        ui->Patient_Age->setText(text);
        ui->stackedWidget->setCurrentIndex(25);
    }
    else if(opt==121)
    {
        //ui->Patient_Gender->setText(text);
        ui->stackedWidget->setCurrentIndex(25);
    }
    else if(opt==122)
    {
        ui->lineEdit_148->setText(text);
        ui->stackedWidget->setCurrentIndex(15);
    }
    else if(opt==123)
    {
        ui->lineEdit_149->setText(text);
        ui->stackedWidget->setCurrentIndex(13);
    }
    else
    {
        QSqlQuery query;

        if(opt==89)
            query.prepare("update tests set intensity=:text where sno=1");
        else if(opt==90)
            query.prepare("update tests set intensity=:text where sno=2");
        else if(opt==91)
            query.prepare("update tests set intensity=:text where sno=3");
        else if(opt==92)
            query.prepare("update tests set intensity=:text where sno=4");
        else if(opt==93)
            query.prepare("update tests set intensity=:text where sno=5");
        else if(opt==94)
            query.prepare("update tests set intensity=:text where sno=6");
        else if(opt==95)
            query.prepare("update tests set intensity=:text where sno=7");

        if(opt==96)
            query.prepare("update tests set ABS=:text where sno=1");
        else if(opt==97)
            query.prepare("update tests set ABS=:text where sno=2");
        else if(opt==98)
            query.prepare("update tests set ABS=:text where sno=3");
        else if(opt==99)
            query.prepare("update tests set ABS=:text where sno=4");
        else if(opt==100)
            query.prepare("update tests set ABS=:text where sno=5");
        else if(opt==101)
            query.prepare("update tests set ABS=:text where sno=6");
        else if(opt==102)
            query.prepare("update tests set ABS=:text where sno=7");

        if(opt==103)
            query.prepare("update tests set ABSO=:text where sno=1");
        else if(opt==104)
            query.prepare("update tests set ABSO=:text where sno=2");
        else if(opt==105)
            query.prepare("update tests set ABSO=:text where sno=3");
        else if(opt==106)
            query.prepare("update tests set ABSO=:text where sno=4");
        else if(opt==107)
            query.prepare("update tests set ABSO=:text where sno=5");
        else if(opt==108)
            query.prepare("update tests set ABSO=:text where sno=6");
        else if(opt==109)
            query.prepare("update tests set ABSO=:text where sno=7");

        query.bindValue(":text",text);
        query.exec();
        on_pushButton_7_clicked();
    }

}

void MainWindow::on_pushButton_15_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_15->text());
}

void MainWindow::on_pushButton_22_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_22->text());
}

void MainWindow::on_pushButton_37_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_37->text());
}

void MainWindow::on_pushButton_36_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_36->text());
}

void MainWindow::on_pushButton_35_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_35->text());
}

void MainWindow::on_pushButton_34_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_34->text());
}

void MainWindow::on_pushButton_33_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_33->text());
}

void MainWindow::on_pushButton_29_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_29->text());
}

void MainWindow::on_pushButton_27_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_27->text());
}

void MainWindow::on_pushButton_21_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_21->text());
}

void MainWindow::on_pushButton_31_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_31->text());
}

void MainWindow::on_pushButton_41_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_41->text());
}

void MainWindow::on_pushButton_19_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_19->text());
}

void MainWindow::on_pushButton_32_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_32->text());
}

void MainWindow::on_pushButton_20_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_20->text());
}

void MainWindow::on_pushButton_30_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_30->text());
}

void MainWindow::on_pushButton_28_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_28->text());
}

void MainWindow::on_pushButton_40_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_40->text());
}

void MainWindow::on_pushButton_39_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_39->text());
}

void MainWindow::on_pushButton_38_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_38->text());
}

void MainWindow::on_pushButton_42_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_42->text());
}

void MainWindow::on_pushButton_43_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_43->text());
}

void MainWindow::on_pushButton_16_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_16->text());
}

void MainWindow::on_pushButton_44_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_44->text());
}

void MainWindow::on_pushButton_49_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_49->text());
}

void MainWindow::on_pushButton_48_clicked()
{

    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_48->text());
}

void MainWindow::on_pushButton_67_clicked()
{
    QString text=ui->lineEdit->text();

    if(opt==1)
    {
        ui->PatientInfo_LineEdit->setText(text);
        ui->stackedWidget->setCurrentIndex(2);
    }
    else if(opt==2)
    {
        ui->lineEdit_4->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==3)
    {
        ui->lineEdit_5->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==4)
    {
        ui->lineEdit_6->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==5)
    {
        ui->lineEdit_7->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==6)
    {
        ui->lineEdit_8->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==7)
    {
        ui->lineEdit_22->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==8)
    {
        ui->lineEdit_9->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==9)
    {
        ui->lineEdit_10->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==10)
    {
        ui->lineEdit_12->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==11)
    {
        ui->lineEdit_11->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==12)
    {
        ui->lineEdit_88->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==13)
    {
        ui->lineEdit_92->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==14)
    {
        ui->lineEdit_89->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==15)
    {
        ui->lineEdit_95->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==16)
    {
        ui->lineEdit_90->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==17)
    {
        ui->lineEdit_94->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==18)
    {
        ui->lineEdit_91->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==19)
    {
        ui->lineEdit_93->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }

    else if(opt==20)
    {
        ui->lineEdit_21->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==21)
    {
        ui->lineEdit_23->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==22)
    {
        ui->lineEdit_26->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==23)
    {
        ui->lineEdit_25->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==24)
    {
        ui->lineEdit_28->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==25)
    {
        ui->lineEdit_29->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==26)
    {
        ui->lineEdit_24->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==27)
    {
        ui->lineEdit_27->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==28)
    {
        ui->lineEdit_30->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==29)
    {
        ui->lineEdit_31->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==30)
    {
        ui->lineEdit_32->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==31)
    {
        ui->lineEdit_37->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==32)
    {
        ui->lineEdit_33->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==33)
    {
        ui->lineEdit_34->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==34)
    {
        ui->lineEdit_36->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==35)
    {
        ui->lineEdit_35->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==36)
    {
        ui->lineEdit_112->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==37)
    {
        ui->lineEdit_116->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==38)
    {
        ui->lineEdit_113->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==39)
    {
        ui->lineEdit_119->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==40)
    {
        ui->lineEdit_114->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==41)
    {
        ui->lineEdit_118->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==42)
    {
        ui->lineEdit_115->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==43)
    {
        ui->lineEdit_117->setText(text);
        ui->stackedWidget->setCurrentIndex(6);

    }

    else if(opt==44)
    {
        ui->lineEdit_58->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==45)
    {
        ui->lineEdit_59->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==46)
    {
        ui->lineEdit_60->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==47)
    {
        ui->lineEdit_61->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==48)
    {
        ui->lineEdit_62->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==49)
    {
        ui->lineEdit_63->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==50)
    {
        ui->lineEdit_38->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==51)
    {
        ui->lineEdit_39->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==52)
    {
        ui->lineEdit_40->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==53)
    {
        ui->lineEdit_41->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==54)
    {
        ui->lineEdit_54->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==55)
    {
        ui->lineEdit_64->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==56)
    {
        ui->lineEdit_55->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==57)
    {
        ui->lineEdit_56->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==58)
    {
        ui->lineEdit_57->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==59)
    {
        ui->lineEdit_65->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==60)
    {
        ui->lineEdit_128->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==61)
    {
        ui->lineEdit_132->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==62)
    {
        ui->lineEdit_129->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==63)
    {
        ui->lineEdit_135->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==64)
    {
        ui->lineEdit_130->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==65)
    {
        ui->lineEdit_134->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==66)
    {
        ui->lineEdit_131->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==67)
    {
        ui->lineEdit_133->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }

    else if(opt==68)
    {
        ui->lineEdit_66->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==69)
    {
        ui->lineEdit_67->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==70)
    {
        ui->lineEdit_68->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }

    else if(opt==71)
    {
        ui->lineEdit_69->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==72)
    {
        ui->lineEdit_70->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==73)
    {
        ui->lineEdit_71->setText(text);
        ui->stackedWidget->setCurrentIndex(8);

    }

    else if(opt==74)
    {
        ui->lineEdit_42->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==75)
    {
        ui->lineEdit_43->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }

    else if(opt==76)
    {
        ui->lineEdit_45->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==77)
    {
        ui->lineEdit_44->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==78)
    {
        ui->lineEdit_47->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }

    else if(opt==79)
    {
        ui->lineEdit_46->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==80)
    {
        ui->lineEdit_48->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }

    else if(opt==81)
    {
        ui->lineEdit_49->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==82)
    {
        ui->lineEdit_51->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==83)
    {
        ui->lineEdit_50->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==84)
    {
        ui->lineEdit_53->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==85)
    {
        ui->lineEdit_52->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==86)
    {
        ui->PatientInfo_LineEdit_2->setText(text);
        ui->stackedWidget->setCurrentIndex(2);
    }

    else if(opt==87)
    {
        ui->PatientInfo_LineEdit_3->setText(text);
        ui->stackedWidget->setCurrentIndex(2);
    }

    else if(opt==88)
    {
        ui->lineEdit_2->setText(text);
        ui->stackedWidget->setCurrentIndex(17);
    }

    else if(opt==110)
    {
        ui->lineEdit_141->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==111)
    {
        ui->lineEdit_142->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==112)
    {
        ui->lineEdit_143->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==113)
    {
        ui->lineEdit_144->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==114)
    {
        ui->lineEdit_145->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }

    else if(opt==115)
    {
        ui->lineEdit_146->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }

    else if(opt==116)
    {
        ui->lineEdit_147->setText(text);
        ui->stackedWidget->setCurrentIndex(21);
    }

    else if(opt==117)
    {
        ui->LabName->setText(text);
        ui->stackedWidget->setCurrentIndex(23);
    }

    else if(opt==118)
    {
        ui->UserName->setText(text);
        ui->stackedWidget->setCurrentIndex(23);
    }

    else if(opt==119)
    {
        ui->Patient_Name->setText(text);
        ui->stackedWidget->setCurrentIndex(25);
    }
    else if(opt==120)
    {
        ui->Patient_Age->setText(text);
        ui->stackedWidget->setCurrentIndex(25);
    }
    else if(opt==121)
    {
        //ui->Patient_Gender->setText(text);
        ui->stackedWidget->setCurrentIndex(25);
    }
    else if(opt==122)
    {
        ui->lineEdit_148->setText(text);
        ui->stackedWidget->setCurrentIndex(15);
    }
    else if(opt==123)
    {
        ui->lineEdit_149->setText(text);
        ui->stackedWidget->setCurrentIndex(13);
    }
    else
    {
        QSqlQuery query;

        if(opt==89)
            query.prepare("update tests set intensity=:text where sno=1");
        else if(opt==90)
            query.prepare("update tests set intensity=:text where sno=2");
        else if(opt==91)
            query.prepare("update tests set intensity=:text where sno=3");
        else if(opt==92)
            query.prepare("update tests set intensity=:text where sno=4");
        else if(opt==93)
            query.prepare("update tests set intensity=:text where sno=5");
        else if(opt==94)
            query.prepare("update tests set intensity=:text where sno=6");
        else if(opt==95)
            query.prepare("update tests set intensity=:text where sno=7");

        if(opt==96)
            query.prepare("update tests set ABS=:text where sno=1");
        else if(opt==97)
            query.prepare("update tests set ABS=:text where sno=2");
        else if(opt==98)
            query.prepare("update tests set ABS=:text where sno=3");
        else if(opt==99)
            query.prepare("update tests set ABS=:text where sno=4");
        else if(opt==100)
            query.prepare("update tests set ABS=:text where sno=5");
        else if(opt==101)
            query.prepare("update tests set ABS=:text where sno=6");
        else if(opt==102)
            query.prepare("update tests set ABS=:text where sno=7");

        if(opt==103)
            query.prepare("update tests set ABSO=:text where sno=1");
        else if(opt==104)
            query.prepare("update tests set ABSO=:text where sno=2");
        else if(opt==105)
            query.prepare("update tests set ABSO=:text where sno=3");
        else if(opt==106)
            query.prepare("update tests set ABSO=:text where sno=4");
        else if(opt==107)
            query.prepare("update tests set ABSO=:text where sno=5");
        else if(opt==108)
            query.prepare("update tests set ABSO=:text where sno=6");
        else if(opt==109)
            query.prepare("update tests set ABSO=:text where sno=7");

        query.bindValue(":text",text);
        query.exec();
        on_pushButton_7_clicked();
    }
}

void MainWindow::on_pushButton_224_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Multiplication Factor");
    opt=116;
    ui->lineEdit->setText(ui->lineEdit_147->text());
}

void MainWindow::on_pushButton_93_clicked()
{
    QString text=ui->lineEdit->text();

    if(opt==1)
    {
        ui->PatientInfo_LineEdit->setText(text);
        ui->stackedWidget->setCurrentIndex(2);
    }
    else if(opt==2)
    {
        ui->lineEdit_4->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==3)
    {
        ui->lineEdit_5->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==4)
    {
        ui->lineEdit_6->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==5)
    {
        ui->lineEdit_7->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==6)
    {
        ui->lineEdit_8->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==7)
    {
        ui->lineEdit_22->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==8)
    {
        ui->lineEdit_9->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==9)
    {
        ui->lineEdit_10->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==10)
    {
        ui->lineEdit_12->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==11)
    {
        ui->lineEdit_11->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==12)
    {
        ui->lineEdit_88->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==13)
    {
        ui->lineEdit_92->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==14)
    {
        ui->lineEdit_89->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==15)
    {
        ui->lineEdit_95->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==16)
    {
        ui->lineEdit_90->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==17)
    {
        ui->lineEdit_94->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==18)
    {
        ui->lineEdit_91->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==19)
    {
        ui->lineEdit_93->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }

    else if(opt==20)
    {
        ui->lineEdit_21->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==21)
    {
        ui->lineEdit_23->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==22)
    {
        ui->lineEdit_26->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==23)
    {
        ui->lineEdit_25->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==24)
    {
        ui->lineEdit_28->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==25)
    {
        ui->lineEdit_29->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==26)
    {
        ui->lineEdit_24->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==27)
    {
        ui->lineEdit_27->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==28)
    {
        ui->lineEdit_30->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==29)
    {
        ui->lineEdit_31->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==30)
    {
        ui->lineEdit_32->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==31)
    {
        ui->lineEdit_37->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==32)
    {
        ui->lineEdit_33->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==33)
    {
        ui->lineEdit_34->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==34)
    {
        ui->lineEdit_36->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==35)
    {
        ui->lineEdit_35->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==36)
    {
        ui->lineEdit_112->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==37)
    {
        ui->lineEdit_116->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==38)
    {
        ui->lineEdit_113->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==39)
    {
        ui->lineEdit_119->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==40)
    {
        ui->lineEdit_114->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==41)
    {
        ui->lineEdit_118->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==42)
    {
        ui->lineEdit_115->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==43)
    {
        ui->lineEdit_117->setText(text);
        ui->stackedWidget->setCurrentIndex(6);

    }

    else if(opt==44)
    {
        ui->lineEdit_58->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==45)
    {
        ui->lineEdit_59->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==46)
    {
        ui->lineEdit_60->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==47)
    {
        ui->lineEdit_61->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==48)
    {
        ui->lineEdit_62->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==49)
    {
        ui->lineEdit_63->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==50)
    {
        ui->lineEdit_38->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==51)
    {
        ui->lineEdit_39->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==52)
    {
        ui->lineEdit_40->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==53)
    {
        ui->lineEdit_41->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==54)
    {
        ui->lineEdit_54->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==55)
    {
        ui->lineEdit_64->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==56)
    {
        ui->lineEdit_55->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==57)
    {
        ui->lineEdit_56->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==58)
    {
        ui->lineEdit_57->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==59)
    {
        ui->lineEdit_65->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==60)
    {
        ui->lineEdit_128->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==61)
    {
        ui->lineEdit_132->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==62)
    {
        ui->lineEdit_129->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==63)
    {
        ui->lineEdit_135->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==64)
    {
        ui->lineEdit_130->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==65)
    {
        ui->lineEdit_134->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==66)
    {
        ui->lineEdit_131->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==67)
    {
        ui->lineEdit_133->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }

    else if(opt==68)
    {
        ui->lineEdit_66->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==69)
    {
        ui->lineEdit_67->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==70)
    {
        ui->lineEdit_68->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }

    else if(opt==71)
    {
        ui->lineEdit_69->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==72)
    {
        ui->lineEdit_70->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }
    else if(opt==73)
    {
        ui->lineEdit_71->setText(text);
        ui->stackedWidget->setCurrentIndex(8);

    }

    else if(opt==74)
    {
        ui->lineEdit_42->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==75)
    {
        ui->lineEdit_43->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }

    else if(opt==76)
    {
        ui->lineEdit_45->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==77)
    {
        ui->lineEdit_44->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==78)
    {
        ui->lineEdit_47->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }

    else if(opt==79)
    {
        ui->lineEdit_46->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==80)
    {
        ui->lineEdit_48->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }

    else if(opt==81)
    {
        ui->lineEdit_49->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==82)
    {
        ui->lineEdit_51->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==83)
    {
        ui->lineEdit_50->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==84)
    {
        ui->lineEdit_53->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==85)
    {
        ui->lineEdit_52->setText(text);
        ui->stackedWidget->setCurrentIndex(10);
    }
    else if(opt==86)
    {
        ui->PatientInfo_LineEdit_2->setText(text);
        ui->stackedWidget->setCurrentIndex(2);
    }

    else if(opt==87)
    {
        ui->PatientInfo_LineEdit_3->setText(text);
        ui->stackedWidget->setCurrentIndex(2);
    }

    else if(opt==88)
    {
        ui->lineEdit_2->setText(text);
        ui->stackedWidget->setCurrentIndex(17);
    }

    else if(opt==110)
    {
        ui->lineEdit_141->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==111)
    {
        ui->lineEdit_142->setText(text);
        ui->stackedWidget->setCurrentIndex(4);
    }
    else if(opt==112)
    {
        ui->lineEdit_143->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==113)
    {
        ui->lineEdit_144->setText(text);
        ui->stackedWidget->setCurrentIndex(6);
    }
    else if(opt==114)
    {
        ui->lineEdit_145->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }

    else if(opt==115)
    {
        ui->lineEdit_146->setText(text);
        ui->stackedWidget->setCurrentIndex(8);
    }

    else if(opt==116)
    {
        ui->lineEdit_147->setText(text);
        ui->stackedWidget->setCurrentIndex(21);
    }

    else if(opt==117)
    {
        ui->LabName->setText(text);
        ui->stackedWidget->setCurrentIndex(23);
    }

    else if(opt==118)
    {
        ui->UserName->setText(text);
        ui->stackedWidget->setCurrentIndex(23);
    }

    else if(opt==119)
    {
        ui->Patient_Name->setText(text);
        ui->stackedWidget->setCurrentIndex(25);
    }
    else if(opt==120)
    {
        ui->Patient_Age->setText(text);
        ui->stackedWidget->setCurrentIndex(25);
    }
    else if(opt==121)
    {
        //ui->Patient_Gender->setText(text);
        ui->stackedWidget->setCurrentIndex(25);
    }
    else if(opt==122)
    {
        ui->lineEdit_148->setText(text);
        ui->stackedWidget->setCurrentIndex(15);
    }
    else if(opt==123)
    {
        ui->lineEdit_149->setText(text);
        ui->stackedWidget->setCurrentIndex(13);
    }

    else
    {
        QSqlQuery query;

        if(opt==89)
            query.prepare("update tests set intensity=:text where sno=1");
        else if(opt==90)
            query.prepare("update tests set intensity=:text where sno=2");
        else if(opt==91)
            query.prepare("update tests set intensity=:text where sno=3");
        else if(opt==92)
            query.prepare("update tests set intensity=:text where sno=4");
        else if(opt==93)
            query.prepare("update tests set intensity=:text where sno=5");
        else if(opt==94)
            query.prepare("update tests set intensity=:text where sno=6");
        else if(opt==95)
            query.prepare("update tests set intensity=:text where sno=7");

        if(opt==96)
            query.prepare("update tests set ABS=:text where sno=1");
        else if(opt==97)
            query.prepare("update tests set ABS=:text where sno=2");
        else if(opt==98)
            query.prepare("update tests set ABS=:text where sno=3");
        else if(opt==99)
            query.prepare("update tests set ABS=:text where sno=4");
        else if(opt==100)
            query.prepare("update tests set ABS=:text where sno=5");
        else if(opt==101)
            query.prepare("update tests set ABS=:text where sno=6");
        else if(opt==102)
            query.prepare("update tests set ABS=:text where sno=7");

        if(opt==103)
            query.prepare("update tests set ABSO=:text where sno=1");
        else if(opt==104)
            query.prepare("update tests set ABSO=:text where sno=2");
        else if(opt==105)
            query.prepare("update tests set ABSO=:text where sno=3");
        else if(opt==106)
            query.prepare("update tests set ABSO=:text where sno=4");
        else if(opt==107)
            query.prepare("update tests set ABSO=:text where sno=5");
        else if(opt==108)
            query.prepare("update tests set ABSO=:text where sno=6");
        else if(opt==109)
            query.prepare("update tests set ABSO=:text where sno=7");

        query.bindValue(":text",text);
        query.exec();
        on_pushButton_7_clicked();
    }

}

void MainWindow::on_pushButton_45_clicked()
{
    ui->lineEdit->backspace();
}


void MainWindow::on_pushButton_80_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_80->text());
}

void MainWindow::on_pushButton_59_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_59->text());
}

void MainWindow::on_pushButton_81_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_81->text());
}

void MainWindow::on_pushButton_82_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_82->text());
}

void MainWindow::on_pushButton_51_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_51->text());
}

void MainWindow::on_pushButton_55_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_55->text());
}

void MainWindow::on_pushButton_61_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_61->text());
}

void MainWindow::on_pushButton_58_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_58->text());
}

void MainWindow::on_pushButton_79_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_79->text());
}

void MainWindow::on_pushButton_73_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_73->text());
}

void MainWindow::on_pushButton_63_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_63->text());
}

void MainWindow::on_pushButton_66_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_66->text());
}

void MainWindow::on_pushButton_76_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_76->text());
}

void MainWindow::on_pushButton_62_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_62->text());
}

void MainWindow::on_pushButton_77_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_77->text());
}

void MainWindow::on_pushButton_78_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_78->text());
}

void MainWindow::on_pushButton_68_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_68->text());
}

void MainWindow::on_pushButton_52_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_52->text());
}

void MainWindow::on_pushButton_65_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_65->text());
}

void MainWindow::on_pushButton_53_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_53->text());
}

void MainWindow::on_pushButton_75_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_75->text());
}

void MainWindow::on_pushButton_64_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_64->text());
}

void MainWindow::on_pushButton_69_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_69->text());
}

void MainWindow::on_pushButton_74_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_74->text());
}

void MainWindow::on_pushButton_57_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_57->text());
}

void MainWindow::on_pushButton_54_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_54->text());
}

void MainWindow::on_pushButton_70_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_70->text());
}

void MainWindow::on_pushButton_104_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_104->text());
}

void MainWindow::on_pushButton_99_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_99->text());
}

void MainWindow::on_pushButton_107_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_107->text());
}

void MainWindow::on_pushButton_86_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_86->text());
}

void MainWindow::on_pushButton_91_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_91->text());
}

void MainWindow::on_pushButton_101_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_101->text());
}

void MainWindow::on_pushButton_109_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_109->text());
}

void MainWindow::on_pushButton_106_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_106->text());
}

void MainWindow::on_pushButton_96_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_96->text());
}

void MainWindow::on_pushButton_111_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_111->text());
}

void MainWindow::on_pushButton_112_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_112->text());
}

void MainWindow::on_pushButton_97_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_97->text());
}

void MainWindow::on_pushButton_95_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_95->text());
}

void MainWindow::on_pushButton_100_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_100->text());
}

void MainWindow::on_pushButton_85_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+'&');
}

void MainWindow::on_pushButton_94_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_94->text());
}

void MainWindow::on_pushButton_92_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_92->text());
}

void MainWindow::on_pushButton_83_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_83->text());
}

void MainWindow::on_pushButton_87_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_87->text());
}

void MainWindow::on_pushButton_116_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_116->text());
}

void MainWindow::on_pushButton_110_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_110->text());
}

void MainWindow::on_pushButton_115_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_115->text());
}

void MainWindow::on_pushButton_108_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_108->text());
}

void MainWindow::on_pushButton_102_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_102->text());
}

void MainWindow::on_pushButton_105_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_105->text());
}

void MainWindow::on_pushButton_90_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_90->text());
}

void MainWindow::on_pushButton_98_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_98->text());
}

void MainWindow::on_pushButton_88_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_88->text());
}

void MainWindow::on_pushButton_113_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_113->text());
}

void MainWindow::on_pushButton_84_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+ui->pushButton_84->text());
}

void MainWindow::on_pushButton_114_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::on_pushButton_103_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+" ");
}

void MainWindow::on_pushButton_72_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+" ");
}

void MainWindow::on_pushButton_50_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+" ");
}

void MainWindow::on_pushButton_89_clicked()
{
    ui->lineEdit->backspace();
}

void MainWindow::on_pushButton_60_clicked()
{
    ui->lineEdit->backspace();
}



void MainWindow::on_pushButton_117_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Patient Info");
    opt=1;
    ui->lineEdit->setText(ui->PatientInfo_LineEdit->text());
}

void MainWindow::on_pushButton_118_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->label_4->setText("Test Name");
    opt=2;
    ui->lineEdit->setText(ui->lineEdit_4->text());
}

void MainWindow::on_pushButton_119_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->label_4->setText("Unit");
    opt=3;
    ui->lineEdit->setText(ui->lineEdit_5->text());
}

void MainWindow::on_pushButton_123_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Factor");
    opt=4;
    ui->lineEdit->setText(ui->lineEdit_6->text());
}

void MainWindow::on_pushButton_124_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Delay Time(S)");
    opt=5;
    ui->lineEdit->setText(ui->lineEdit_7->text());
}

void MainWindow::on_pushButton_122_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Incubation Time(S)");
    opt=6;
    ui->lineEdit->setText(ui->lineEdit_8->text());
}

void MainWindow::on_pushButton_121_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Lag Time(S)");
    opt=7;
    ui->lineEdit->setText(ui->lineEdit_22->text());
}

void MainWindow::on_pushButton_120_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Linear Range(Min)");
    opt=8;
    ui->lineEdit->setText(ui->lineEdit_9->text());
}

void MainWindow::on_pushButton_125_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Linear Range(Max)");
    opt=9;
    ui->lineEdit->setText(ui->lineEdit_10->text());
}

void MainWindow::on_pushButton_126_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Normal Range(Min)");
    opt=10;
    ui->lineEdit->setText(ui->lineEdit_12->text());
}

void MainWindow::on_pushButton_127_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Normal Range(Max)");
    opt=11;
    ui->lineEdit->setText(ui->lineEdit_11->text());
}

void MainWindow::on_pushButton_207_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(1)");
    opt=12;
    ui->lineEdit->setText(ui->lineEdit_88->text());
}

void MainWindow::on_pushButton_213_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(3)");
    opt=13;
    ui->lineEdit->setText(ui->lineEdit_92->text());
}

void MainWindow::on_pushButton_210_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(5)");
    opt=14;
    ui->lineEdit->setText(ui->lineEdit_89->text());
}

void MainWindow::on_pushButton_212_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(7)");
    opt=15;
    ui->lineEdit->setText(ui->lineEdit_95->text());
}

void MainWindow::on_pushButton_208_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(2)");
    opt=16;
    ui->lineEdit->setText(ui->lineEdit_90->text());
}

void MainWindow::on_pushButton_214_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(4)");
    opt=17;
    ui->lineEdit->setText(ui->lineEdit_94->text());
}

void MainWindow::on_pushButton_209_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(6)");
    opt=18;
    ui->lineEdit->setText(ui->lineEdit_96->text());
}

void MainWindow::on_pushButton_211_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(8)");
    opt=19;
    ui->lineEdit->setText(ui->lineEdit_93->text());
}

void MainWindow::on_pushButton_136_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control 1 - Average");
    opt=20;
    ui->lineEdit->setText(ui->lineEdit_21->text());
}

void MainWindow::on_pushButton_137_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control 1 - Minimum");
    opt=21;
    ui->lineEdit->setText(ui->lineEdit_23->text());
}

void MainWindow::on_pushButton_138_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control 1 - Batch No");
    opt=22;
    ui->lineEdit->setText(ui->lineEdit_26->text());
}

void MainWindow::on_pushButton_139_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control 2 - Average");
    opt=23;
    ui->lineEdit->setText(ui->lineEdit_25->text());
}

void MainWindow::on_pushButton_140_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control 2 - Minimum");
    opt=24;
    ui->lineEdit->setText(ui->lineEdit_28->text());
}

void MainWindow::on_pushButton_141_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control 2 - Batch No");
    opt=25;
    ui->lineEdit->setText(ui->lineEdit_29->text());
}

void MainWindow::on_pushButton_142_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->label_4->setText("Test Name");
    opt=26;
    ui->lineEdit->setText(ui->lineEdit_24->text());
}

void MainWindow::on_pushButton_147_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->label_4->setText("Unit");
    opt=27;
    ui->lineEdit->setText(ui->lineEdit_27->text());
}

void MainWindow::on_pushButton_143_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Factor");
    opt=28;
    ui->lineEdit->setText(ui->lineEdit_30->text());
}

void MainWindow::on_pushButton_148_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Delay Time(S)");
    opt=29;
    ui->lineEdit->setText(ui->lineEdit_31->text());
}

void MainWindow::on_pushButton_149_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Incubation Time(S)");
    opt=30;
    ui->lineEdit->setText(ui->lineEdit_32->text());
}

void MainWindow::on_pushButton_150_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Lag Time(S)");
    opt=31;
    ui->lineEdit->setText(ui->lineEdit_37->text());
}

void MainWindow::on_pushButton_145_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Linear Range(Min)");
    opt=32;
    ui->lineEdit->setText(ui->lineEdit_33->text());
}

void MainWindow::on_pushButton_144_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Linear Range(Max)");
    opt=33;
    ui->lineEdit->setText(ui->lineEdit_34->text());
}

void MainWindow::on_pushButton_146_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Normal Range(Min)");
    opt=34;
    ui->lineEdit->setText(ui->lineEdit_36->text());
}

void MainWindow::on_pushButton_201_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Normal Range(Max)");
    opt=35;
    ui->lineEdit->setText(ui->lineEdit_35->text());
}

void MainWindow::on_pushButton_215_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(1)");
    opt=36;
    ui->lineEdit->setText(ui->lineEdit_112->text());
}

void MainWindow::on_pushButton_236_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(3)");
    opt=37;
    ui->lineEdit->setText(ui->lineEdit_116->text());
}

void MainWindow::on_pushButton_234_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(5)");
    opt=38;
    ui->lineEdit->setText(ui->lineEdit_113->text());
}

void MainWindow::on_pushButton_238_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(7)");
    opt=39;
    ui->lineEdit->setText(ui->lineEdit_119->text());
}

void MainWindow::on_pushButton_232_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(2)");
    opt=40;
    ui->lineEdit->setText(ui->lineEdit_114->text());
}

void MainWindow::on_pushButton_237_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(4)");
    opt=41;
    ui->lineEdit->setText(ui->lineEdit_118->text());
}

void MainWindow::on_pushButton_233_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(6)");
    opt=42;
    ui->lineEdit->setText(ui->lineEdit_115->text());
}

void MainWindow::on_pushButton_235_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(8)");
    opt=43;
    ui->lineEdit->setText(ui->lineEdit_117->text());
}

void MainWindow::on_pushButton_159_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - Average");
    opt=44;
    ui->lineEdit->setText(ui->lineEdit_58->text());
}

void MainWindow::on_pushButton_160_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - Minimum");
    opt=45;
    ui->lineEdit->setText(ui->lineEdit_59->text());
}

void MainWindow::on_pushButton_161_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - Batch No");
    opt=46;
    ui->lineEdit->setText(ui->lineEdit_60->text());
}

void MainWindow::on_pushButton_162_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - Average");
    opt=47;
    ui->lineEdit->setText(ui->lineEdit_61->text());
}

void MainWindow::on_pushButton_163_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - Minimum");
    opt=48;
    ui->lineEdit->setText(ui->lineEdit_62->text());
}

void MainWindow::on_pushButton_164_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - Batch No");
    opt=49;
    ui->lineEdit->setText(ui->lineEdit_63->text());
}


void MainWindow::on_pushButton_151_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->label_4->setText("Test Name");
    opt=50;
    ui->lineEdit->setText(ui->lineEdit_38->text());
}

void MainWindow::on_pushButton_156_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->label_4->setText("Unit");
    opt=51;
    ui->lineEdit->setText(ui->lineEdit_39->text());
}

void MainWindow::on_pushButton_152_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Factor");
    opt=52;
    ui->lineEdit->setText(ui->lineEdit_40->text());
}

void MainWindow::on_pushButton_157_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Delay Time(S)");
    opt=53;
    ui->lineEdit->setText(ui->lineEdit_41->text());
}

void MainWindow::on_pushButton_158_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Incubation Time(S)");
    opt=54;
    ui->lineEdit->setText(ui->lineEdit_54->text());
}

void MainWindow::on_pushButton_165_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Lag Time(S)");
    opt=55;
    ui->lineEdit->setText(ui->lineEdit_64->text());
}

void MainWindow::on_pushButton_154_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Linear Range(Min)");
    opt=56;
    ui->lineEdit->setText(ui->lineEdit_55->text());
}

void MainWindow::on_pushButton_153_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Linear Range(Max)");
    opt=57;
    ui->lineEdit->setText(ui->lineEdit_56->text());
}

void MainWindow::on_pushButton_155_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Normal Range(Min)");
    opt=58;
    ui->lineEdit->setText(ui->lineEdit_57->text());
}

void MainWindow::on_pushButton_239_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Normal Range(Max)");
    opt=59;
    ui->lineEdit->setText(ui->lineEdit_65->text());
}

void MainWindow::on_pushButton_248_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(1)");
    opt=60;
    ui->lineEdit->setText(ui->lineEdit_128->text());
}

void MainWindow::on_pushButton_253_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(3)");
    opt=61;
    ui->lineEdit->setText(ui->lineEdit_132->text());
}

void MainWindow::on_pushButton_251_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(5)");
    opt=62;
    ui->lineEdit->setText(ui->lineEdit_129->text());
}

void MainWindow::on_pushButton_255_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(7)");
    opt=63;
    ui->lineEdit->setText(ui->lineEdit_135->text());
}

void MainWindow::on_pushButton_249_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(2)");
    opt=64;
    ui->lineEdit->setText(ui->lineEdit_130->text());
}

void MainWindow::on_pushButton_254_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(4)");
    opt=65;
    ui->lineEdit->setText(ui->lineEdit_134->text());
}

void MainWindow::on_pushButton_250_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(6)");
    opt=66;
    ui->lineEdit->setText(ui->lineEdit_131->text());
}

void MainWindow::on_pushButton_252_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Standard Concentration(8)");
    opt=67;
    ui->lineEdit->setText(ui->lineEdit_133->text());
}

void MainWindow::on_pushButton_166_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - Average");
    opt=68;
    ui->lineEdit->setText(ui->lineEdit_66->text());
}

void MainWindow::on_pushButton_167_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - Minimum");
    opt=69;
    ui->lineEdit->setText(ui->lineEdit_67->text());
}

void MainWindow::on_pushButton_168_clicked()
{
    ui->stackedWidget->setCurrentIndex(68);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - Batch No");
    opt=70;
    ui->lineEdit->setText(ui->lineEdit_68->text());
}

void MainWindow::on_pushButton_169_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - Average");
    opt=71;
    ui->lineEdit->setText(ui->lineEdit_69->text());
}

void MainWindow::on_pushButton_170_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - Minimum");
    opt=72;
    ui->lineEdit->setText(ui->lineEdit_70->text());
}

void MainWindow::on_pushButton_171_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - Batch No");
    opt=73;
    ui->lineEdit->setText(ui->lineEdit_71->text());
}

void MainWindow::on_pushButton_189_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - X(1)");
    opt=74;
    ui->lineEdit->setText(ui->lineEdit_42->text());
}
void MainWindow::on_pushButton_190_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - X(2)");
    opt=75;
    ui->lineEdit->setText(ui->lineEdit_43->text());
}
void MainWindow::on_pushButton_194_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - SD(1)");
    opt=76;
    ui->lineEdit->setText(ui->lineEdit_45->text());
}
void MainWindow::on_pushButton_191_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - SD(2)");
    opt=77;
    ui->lineEdit->setText(ui->lineEdit_44->text());
}
void MainWindow::on_pushButton_193_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - CV(1)");
    opt=78;
    ui->lineEdit->setText(ui->lineEdit_47->text());
}
void MainWindow::on_pushButton_192_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - CV(2))");
    opt=79;
    ui->lineEdit->setText(ui->lineEdit_46->text());
}
void MainWindow::on_pushButton_195_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - X(1)");
    opt=80;
    ui->lineEdit->setText(ui->lineEdit_48->text());
}
void MainWindow::on_pushButton_198_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - X(2)");
    opt=81;
    ui->lineEdit->setText(ui->lineEdit_49->text());
}
void MainWindow::on_pushButton_199_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - CV(1)");
    opt=82;
    ui->lineEdit->setText(ui->lineEdit_51->text());
}
void MainWindow::on_pushButton_197_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - CV(1)");
    opt=83;
    ui->lineEdit->setText(ui->lineEdit_50->text());
}
void MainWindow::on_pushButton_200_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - SD(1)");
    opt=84;
    ui->lineEdit->setText(ui->lineEdit_53->text());
}
void MainWindow::on_pushButton_196_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - SD(2)");
    opt=85;
    ui->lineEdit->setText(ui->lineEdit_52->text());
}

void MainWindow::on_pushButton_202_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Patient Info");
    opt=86;
    ui->lineEdit->setText(ui->PatientInfo_LineEdit_2->text());
}

void MainWindow::on_pushButton_203_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Patient Info");
    opt=87;
    ui->lineEdit->setText(ui->PatientInfo_LineEdit_3->text());
}

void MainWindow::on_pushButton_204_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->label_4->setText("Password");
    opt=88;
    ui->lineEdit->setText(ui->lineEdit_2->text());

    ui->pushButton_23->show();

}

void MainWindow::on_pushButton_172_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Intensity-340");
    opt=89;
    int intensity=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=1");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    QString ity1=QString::number(intensity);
    ui->lineEdit_72->setText(ity1);
    ui->lineEdit->setText(ui->lineEdit_72->text());
}

void MainWindow::on_pushButton_173_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Intensity-405");
    opt=90;
    int intensity=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=2");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    QString ity2=QString::number(intensity);
    ui->lineEdit_73->setText(ity2);
    ui->lineEdit->setText(ui->lineEdit_73->text());
}

void MainWindow::on_pushButton_174_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Intensity-507");

    opt=91;
    int intensity=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=3");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    QString ity3=QString::number(intensity);
    ui->lineEdit_74->setText(ity3);
    ui->lineEdit->setText(ui->lineEdit_74->text());
}

void MainWindow::on_pushButton_175_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Intensity-545");
    opt=92;
    int intensity=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=4");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    QString ity4=QString::number(intensity);
    ui->lineEdit_75->setText(ity4);
    ui->lineEdit->setText(ui->lineEdit_75->text());
}

void MainWindow::on_pushButton_176_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Intensity-572");
    opt=93;
    int intensity=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=5");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    QString ity5=QString::number(intensity);
    ui->lineEdit_76->setText(ity5);
    ui->lineEdit->setText(ui->lineEdit_76->text());
}

void MainWindow::on_pushButton_177_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Intensity-628");
    opt=94;
    int intensity=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=6");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    QString ity6=QString::number(intensity);
    ui->lineEdit_77->setText(ity6);
    ui->lineEdit->setText(ui->lineEdit_77->text());
}

void MainWindow::on_pushButton_178_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Intensity-700");
    opt=95;
    int intensity=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=7");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    QString ity7=QString::number(intensity);
    ui->lineEdit_78->setText(ity7);
    ui->lineEdit->setText(ui->lineEdit_78->text());
}

void MainWindow::on_pushButton_179_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABS - 340");
    opt=96;
    int ABS=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=1");
    query.exec();
    while(query.next())
    {
        ABS=query.value(9).toInt();
    }
    QString ABS1=QString::number(ABS);
    ui->lineEdit_83->setText(ABS1);
    ui->lineEdit->setText(ui->lineEdit_83->text());
}

void MainWindow::on_pushButton_184_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABS - 405");
    opt=97;
    int ABS=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=2");
    query.exec();
    while(query.next())
    {
        ABS=query.value(9).toInt();
    }
    QString ABS2=QString::number(ABS);
    ui->lineEdit_84->setText(ABS2);
    ui->lineEdit->setText(ui->lineEdit_84->text());
}

void MainWindow::on_pushButton_181_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABS - 507");
    opt=98;
    int ABS=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=3");
    query.exec();
    while(query.next())
    {
        ABS=query.value(9).toInt();
    }
    QString ABS3=QString::number(ABS);
    ui->lineEdit_80->setText(ABS3);
    ui->lineEdit->setText(ui->lineEdit_80->text());
}

void MainWindow::on_pushButton_183_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABS - 545");
    opt=99;
    int ABS=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=4");
    query.exec();
    while(query.next())
    {
        ABS=query.value(9).toInt();
    }
    QString ABS4=QString::number(ABS);
    ui->lineEdit_82->setText(ABS4);
    ui->lineEdit->setText(ui->lineEdit_82->text());
}

void MainWindow::on_pushButton_185_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABS - 572");
    opt=100;
    int ABS=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=5");
    query.exec();
    while(query.next())
    {
        ABS=query.value(9).toInt();
    }
    QString ABS5=QString::number(ABS);
    ui->lineEdit_79->setText(ABS5);
    ui->lineEdit->setText(ui->lineEdit_79->text());
}

void MainWindow::on_pushButton_182_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABS - 628");
    opt=101;
    int ABS=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=6");
    query.exec();
    while(query.next())
    {
        ABS=query.value(9).toInt();
    }
    QString ABS6=QString::number(ABS);
    ui->lineEdit_81->setText(ABS6);
    ui->lineEdit->setText(ui->lineEdit_81->text());
}

void MainWindow::on_pushButton_180_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABS - 700");
    opt=102;
    int ABS=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=7");
    query.exec();
    while(query.next())
    {
        ABS=query.value(9).toInt();
    }
    QString ABS7=QString::number(ABS);
    ui->lineEdit_85->setText(ABS7);
    ui->lineEdit->setText(ui->lineEdit_85->text());
}

void MainWindow::on_pushButton_188_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABSO - 340");
    opt=103;
    int ABSO=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=1");
    query.exec();
    while(query.next())
    {
        ABSO=query.value(10).toInt();
    }
    QString ABSO1=QString::number(ABSO);
    ui->lineEdit_139->setText(ABSO1);
    ui->lineEdit->setText(ui->lineEdit_139->text());
}

void MainWindow::on_pushButton_205_clicked()
{

    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABSO - 405");
    opt=104;
    int ABSO=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=2");
    query.exec();
    while(query.next())
    {
        ABSO=query.value(10).toInt();
    }
    QString ABSO2=QString::number(ABSO);
    ui->lineEdit_137->setText(ABSO2);
    ui->lineEdit->setText(ui->lineEdit_137->text());

}



void MainWindow::on_pushButton_216_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABSO - 507");
    opt=105;
    int ABSO=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=3");
    query.exec();
    while(query.next())
    {
        ABSO=query.value(10).toInt();
    }
    QString ABSO3=QString::number(ABSO);
    ui->lineEdit_86->setText(ABSO3);
    ui->lineEdit->setText(ui->lineEdit_86->text());

}


void MainWindow::on_pushButton_206_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABSO - 545");
    opt=106;
    int ABSO=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=4");
    query.exec();
    while(query.next())
    {
        ABSO=query.value(10).toInt();
    }
    QString ABSO4=QString::number(ABSO);
    ui->lineEdit_87->setText(ABSO4);
    ui->lineEdit->setText(ui->lineEdit_87->text());


}
void MainWindow::on_pushButton_186_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABSO - 572");
    opt=107;
    int ABSO=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=5");
    query.exec();
    while(query.next())
    {
        ABSO=query.value(10).toInt();
    }
    QString ABSO5=QString::number(ABSO);
    ui->lineEdit_140->setText(ABSO5);
    ui->lineEdit->setText(ui->lineEdit_140->text());
}

void MainWindow::on_pushButton_217_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABSO - 628");
    opt=108;
    int ABSO=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=6");
    query.exec();
    while(query.next())
    {
        ABSO=query.value(10).toInt();
    }
    QString ABSO6=QString::number(ABSO);
    ui->lineEdit_136->setText(ABSO6);
    ui->lineEdit->setText(ui->lineEdit_136->text());
}

void MainWindow::on_pushButton_187_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("ABSO - 545");
    opt=109;
    int ABSO=0;
    QSqlQuery query;
    query.prepare("select * from tests where sno=7");
    query.exec();
    while(query.next())
    {
        ABSO=query.value(10).toInt();
    }
    QString ABSO7=QString::number(ABSO);
    ui->lineEdit_138->setText(ABSO7);
    ui->lineEdit->setText(ui->lineEdit_138->text());
}

void MainWindow::on_pushButton_218_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control 1 - Maximum");
    opt=110;
    ui->lineEdit->setText(ui->lineEdit_141->text());
}

void MainWindow::on_pushButton_219_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control 2 - Maximum");
    opt=111;
    ui->lineEdit->setText(ui->lineEdit_142->text());
}

void MainWindow::on_pushButton_220_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - Maximum");
    opt=112;
    ui->lineEdit->setText(ui->lineEdit_143->text());
}

void MainWindow::on_pushButton_221_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - Maximum");
    opt=113;
    ui->lineEdit->setText(ui->lineEdit_144->text());
}

void MainWindow::on_pushButton_222_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control1 - Maximum");
    opt=114;
    ui->lineEdit->setText(ui->lineEdit_145->text());
}

void MainWindow::on_pushButton_223_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(2);
    ui->label_4->setText("Control2 - Maximum");
    opt=115;
    ui->lineEdit->setText(ui->lineEdit_146->text());
}

void MainWindow::on_LabName_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(1);
    ui->label_4->setText("Lab Name");
    opt=117;
    ui->lineEdit->setText(ui->LabName->text());
}

void MainWindow::on_UserName_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
    ui->stackedWidget_2->setCurrentIndex(1);
    ui->label_4->setText("User Name");
    opt=118;
    ui->lineEdit->setText(ui->UserName->text());
}


