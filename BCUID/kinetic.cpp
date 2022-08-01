#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "printer.h"
#define steps 7
#define dir 0
#define en 3
#define hm_sen 4
#define LED 26
#define init 0
#define range 100
#define BARCODE_GND 21
#define ADC_BASE 100
#define SPI_CHAN 0
#define LED_BASE 200
#define dataPin 21
#define clockPin 22
#define latchPin 23

void MainWindow::on_RunBlank_Btn_3_clicked()
{
    QString TestName = ui->TestName_Lbl_6->text();
    ui->label->setText("");
    ui->label_106->setText("");
    ui->label_121->setText("");
    ui->label_123->setText("");
    ui->label_125->setText("");
    ui->label_127->setText("");
    ui->label_128->setText("");
    ui->label_132->setText("");
    ui->label_204->setText("");
    ui->label_33->setText("");
    ui->label_203->setVisible(true);
    ui->label_204->setVisible(true);
    QString wavelength , intensity ;
    double blankval = 0, transmission=0,absorbance=0 ;
    QSqlQuery query;
    query.prepare("select * from test where name = '"+TestName+"'");
    query.exec();
    while(query.next())
    {
        wavelength=query.value(2).toString();
    }
    query.prepare("select * from tests where wave = '"+wavelength+"'");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toString();
        blankval =query.value(11).toDouble();
    }
    int inten = intensity.toInt();
    int wave = wavelength.toInt();
    query.prepare("select * from tests where sno = 1");
    query.exec();
    bc_y_val=0;
    ymin=absorbance-0.02;
    ymax=absorbance+0.02;
    if(wave==340)
        wave=0;
    else if(wave==405)
        wave=1;
    else if(wave==507)
        wave=2;
    else if(wave==545)
        wave=3;
    else if(wave==572)
        wave=4;
    else if(wave==628)
        wave=5;
    else if(wave==700)
        wave=6;
    QThread::sleep(1);
    const int order = 2; // 4th order (=2 biquads)
    Iir::Butterworth::LowPass<order> fwave;
    clearData();
    plot_kinetic_blnk();
    QThread::msleep(200);
    for(int i=0;i<=5;i++)
    {
        filtwave[0]=reading(wave,inten);
        if(i>=0)
        {
            transmission=blankval/filtwave[0];
            absorbance=log10(transmission);
            addPoint(i,absorbance);
        }
        QApplication::processEvents();
    }



    ui->label->setText(QString::number(absorbance, 'f', 3));
    QString Blankval;
    int blnkval = 0;
    Blankval = char (blnkval);
    Blankval = ui->label->text();
    query.prepare("update test set blnkval='"+Blankval+"' where name='"+TestName+"'");
    if(query.exec())
    {
    }
    else
    {
    }
}

void MainWindow::plot_kinetic_blnk()
{
    line=7;
}

void MainWindow::on_RunCal_Btn_3_clicked()
{
    option=3;
    clearGraph_end();
    ui->RunCal_Btn_3->setDisabled(true);
    ui->label_106->setText("");
    ui->label_121->setText("");
    ui->label_123->setText("");
    ui->label_125->setText("");
    ui->label_127->setText("");
    ui->label_128->setText("");
    ui->label_132->setText("");
    ui->label_204->setText("");
    ui->label_34->setText("");
    ui->label_196->setText("");
    ui->label_33->setText("");
    ui->label_203->setVisible(false);
    ui->label_204->setVisible(false);
    ui->label_207->setVisible(false);
    ui->label_75->setVisible(false);
    ui->label_203->setVisible(false);
    ui->label_204->setVisible(false);
    ui->label_100->setVisible(true);
    ui->label_34->setVisible(true);
    ui->label_197->setVisible(true);
    ui->label_196->setVisible(true);
    ui->label_76->setVisible(false);
    ui->label_203->setText("ΔA");
    ui->label_100->setText("Std OD");
    QString wavelength , intensity ;
    double blankval = 0 , mulfact = 0, con1 = 0  ;
    int read = 0 ,lag = 0, dely = 0 ;
    QString TestName = ui->TestName_Lbl_6->text();
    QSqlQuery query;
    query.prepare("select * from test where name = '"+TestName+"'");
    query.exec();
    while(query.next())
    {
        wavelength=query.value(2).toString();
        read=query.value(9).toInt();
        lag=query.value(10).toInt();
        dely=query.value(8).toInt();
        con1=query.value(18).toDouble();
    }
    query.prepare("select * from tests where wave = '"+wavelength+"'");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toString();
        blankval=query.value(11).toDouble();
    }
    read_intensity = intensity.toInt();
    int wave = wavelength.toInt();
    query.prepare("select * from tests where sno = 1");
    query.exec();
    while(query.next())
    {
        mulfact=query.value(12).toDouble();
    }
    if(wave==340)
        read_wave=0;
    else if(wave==405)
        read_wave=1;
    else if(wave==507)
        read_wave=2;
    else if(wave==545)
        read_wave=3;
    else if(wave==572)
        read_wave=4;
    else if(wave==628)
        read_wave=5;
    else if(wave==700)
        read_wave=6;
    QThread::sleep(1);
    const int order = 2; // 4th order (=2 biquads)
    Iir::Butterworth::LowPass<order> fwave;
    clearData();
    total_read_point=read+dely;
    current_read_point=0;
    blank_val=blankval;
    val=read/lag;
    dly=dely;
    lagg=lag;
    concen=con1;
    multiFact=mulfact;
    bc_y_val=0;
    ymin=absorbance-0.02;
    ymax=absorbance+0.02;
    plot_kinetic_calibrate();
    readtimer->start(10000);
}



void MainWindow::plot_kinetic_calibrate()
{
    line=8;
}

void MainWindow::on_Save_Btn_7_clicked()
{
    QMessageBox msgBox;
    QSqlQuery query;
    QString CalibrateAbs , Fact;
    int calibrate = 0 ;
    double fact =0;
    CalibrateAbs = char (calibrate);
    CalibrateAbs = ui->label_34->text();
    Fact = char (fact);
    Fact = ui->label_196->text();
    Fact = ui->label_76->text();
    QString TestName = ui->TestName_Lbl_6->text();

    query.prepare("update test set calibrateabs='"+CalibrateAbs+"' , fact='"+Fact+"' where name='"+TestName+"'");
    if(query.exec())
    {
        qDebug()<<"Update Done";
        ui->RunSample_Btn->setEnabled(true);
        ui->RunSample_Btn_2->setEnabled(true);
        ui->RunSample_Btn_3->setEnabled(true);
    }
    else
    {
        qDebug()<<"Error";
    }
}

void MainWindow::on_RunSample_Btn_3_clicked()
{
    option=4;
    clearGraph_end();
    ui->RunSample_Btn_3->setDisabled(true);
    ui->Save_Btn_4->setEnabled(true);
    ui->label_106->setText("");
    ui->label_121->setText("");
    ui->label_123->setText("");
    ui->label_125->setText("");
    ui->label_127->setText("");
    ui->label_128->setText("");
    ui->label_132->setText("");
    ui->label_204->setText("");
    ui->label_194->setText("");
    ui->label_195->setText("");
    ui->label_198->setText("");
    ui->label_33->setText("");
    ui->label_203->setVisible(false);
    ui->label_204->setVisible(true);
    ui->label_207->setVisible(false);
    ui->label_203->setText("ΔA/min");

    QString wavelength , intensity ;
    double blankval = 0 , mulfact =0, fact = 0;
    int read = 0 ,lag =0, dely = 0  ;
    QString TestName = ui->TestName_Lbl_6->text();
    QSqlQuery query;
    query.prepare("select * from test where name = '"+TestName+"'");
    query.exec();
    while(query.next())
    {
        wavelength=query.value(2).toString();
        read=query.value(9).toInt();
        lag=query.value(10).toInt();
        dely=query.value(8).toInt();
        fact=query.value(6).toDouble();
        //con1=query.value(18).toDouble();
    }
    query.prepare("select * from tests where wave = '"+wavelength+"'");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toString();
        blankval=query.value(11).toDouble();
    }
    read_intensity = intensity.toInt();
    int wave = wavelength.toInt();
    query.prepare("select * from tests where sno = 1");
    query.exec();
    while(query.next())
    {
        mulfact=query.value(12).toDouble();
    }
    if(wave==340)
        read_wave=0;
    else if(wave==405)
        read_wave=1;
    else if(wave==507)
        read_wave=2;
    else if(wave==545)
        read_wave=3;
    else if(wave==572)
        read_wave=4;
    else if(wave==628)
        read_wave=5;
    else if(wave==700)
        read_wave=6;
    QThread::sleep(1);
    const int order = 2; // 4th order (=2 biquads)
    Iir::Butterworth::LowPass<order> fwave;
    clearData();
    total_read_point=read+dely;
    current_read_point=0;
    blank_val=blankval;
    val=read/lag;
    dly=dely;
    lagg=lag;
    fct=fact;
    bc_y_val=0;
    ymin=absorbance-0.02;
    ymax=absorbance+0.02;
    multiFact=mulfact;
    plot_kinetic();
    readtimer->start(10000);

}

void MainWindow::plot_kinetic()
{
    line=9;
}

void MainWindow::on_Print_Btn_3_clicked()
{

    ui->Print_Btn_3->setDisabled(true);
    ui->stackedWidget->setCurrentIndex(25);

    ui->EndPoint_Print_Btn->setVisible(false);
    ui->TwoPoint_Print_Btn->setVisible(false);
    ui->Kinetic_Print_Btn->setVisible(true);
    ui->End_Skip_Btn->setVisible(false);
    ui->Two_Skip_Btn->setVisible(false);
    ui->Kinetic_Skip_Btn->setVisible(true);

   /* QApplication::processEvents();
    timer->stop();
    timer1->stop();
    Printer *p = new Printer();
    std::cout << "Trying to open port" << std::endl;
    bool res = p->open("/dev/ttyS0");
    std::cout << "Status: " << res << std::endl;
    if (!res) {
        std::cerr << "Error opening port, aborting" << std::endl;
        return (0);
    }
    p->reset();
    p->setAlign(Printer::MIDDLE);
    p->setBold(true);
    p->write(ui->LabName->text());
    p->feed();
    p->feed();
    p->write("MCA 11 TEST REPORT");
    p->setBold(false);
    p->feed();
    p->feed();
    p->setAlign(Printer::LEFT);
    p->write(" Patient ID  : "  + ui->PatientInfo_LineEdit_3->text());
    p->write("\n TestName    : "  + ui->TestName_Lbl_6->text());
    p->write("\n Result OD   : "   + ui->label_33->text() +  ""   +    ui->Unit_lineEdit->text());
    p->write("\n Date        : "   + ui->SysDate_Lbl->text());
    p->write("\n Time        : "   + ui->SysTime_Lbl->text());
    p->write("\n User Name   : "   + ui->UserName->text());
    p->feed();
    p->feed();
    p->feed();
    p->feed();
    p->close();
    timer->start(1000);
    timer1->start(1000);
    ui->Print_Btn_3->setDisabled(false);
   return 1;*/
}


