#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "printer.h"
//static double bc_y_val=0;
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

void MainWindow::clearGraph_end()
{
    clearData();
    ui->customPlot->graph(0)->setData(qv_x,qv_y);
    ui->customPlot->xAxis->setLabel("POINTS");
    ui->customPlot->yAxis->setLabel("OD");
    // set axes ranges, so we see all data:
    ui->customPlot->xAxis->setRange(0,5);
    ui->customPlot->yAxis->setRange(0,5);
    ui->customPlot->addGraph();
    ui->customPlot->graph(1)->setData(qv_x,qv_y);
    ui->customPlot->addGraph();
    ui->customPlot->graph(2)->setData(qv_x,qv_y);
    ui->customPlot->addGraph();
    ui->customPlot->graph(3)->setData(qv_x,qv_y);
    ui->customPlot->replot();
    ui->customPlot->update();
}

void MainWindow::on_RunBlank_Btn_clicked()
{
    QString TestName = ui->TestName_Lbl->text();
    ui->label->setText("");
    ui->label_6->setVisible(false);
    ui->label_203->setVisible(false);
    ui->label_204->setVisible(false);
    ui->label_207->setVisible(false);
    ui->label_208->setVisible(false);
    ui->label_75->setVisible(false);
    ui->label_209->setVisible(false);
    ui->label_6->setText("");
    ui->label_204->setText("");
    ui->label_33->setText("");
    ui->RunBlank_Btn->setDisabled(true);


    QString wavelength , intensity ;
    double blankval = 0 , mulfact=0;
    double transmission=0,absorbance=0 ;
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
    while(query.next())
    {
        mulfact=query.value(12).toDouble();
    }
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
    plot_end_blnk();
    multiFact=mulfact;
    bc_y_val=0;
    ymin=absorbance-0.02;
    ymax=absorbance+0.02;
    QThread::msleep(200);
    for(int i=0;i<=5;i++)
    {
        filtwave[0]=reading(wave,inten);
        if(i>=0)
        {
            transmission=blankval/filtwave[0];
            absorbance=log10(transmission);
            addPoint(i,absorbance);
            plot_end_blnk();
        }
        QApplication::processEvents();
    }

    //double od;
    //od=abs(absorbance);
    //qDebug()<<od;
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

    ui->RunBlank_Btn->setDisabled(false);


}

void MainWindow::plot_end_blnk()
{
    line=1;
}

void MainWindow::on_RunCal_Btn_clicked()
{
    QString TestName = ui->TestName_Lbl->text();
    ui->label_34->setText("");
    ui->label_75->setText("");
    ui->label_6->setVisible(true);
    ui->label_33->setText("");
    ui->label_7->setVisible(false);
    ui->label_196->setText("");
    ui->label_204->setVisible(false);
    ui->label_203->setVisible(false);
    ui->label_6->setVisible(false);
    ui->label_100->setText("Std OD");
    ui->label_207->setVisible(true);
    ui->label_75->setVisible(true);
    ui->label_208->setVisible(false);
    ui->label_209->setVisible(false);
    ui->label_196->setVisible(true);
    ui->label_197->setVisible(true);
    ui->label_76->setVisible(false);

    ui->RunCal_Btn->setDisabled(true);

    QString wavelength , intensity ;
    double blankval = 0 , mulfact =0;
    double transmission=0,absorbance=0, con1 = 0;
    QSqlQuery query;
    query.prepare("select * from test where name = '"+TestName+"'");
    query.exec();
    while(query.next())
    {
        wavelength=query.value(2).toString();
        con1=query.value(18).toDouble();
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
    while(query.next())
    {
        mulfact=query.value(12).toDouble();
    }
    multiFact=mulfact;
    bc_y_val=0;
    ymin=absorbance-0.02;
    ymax=absorbance+0.02;
    concen = con1;
    qDebug()<<con1;
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
    plot_end_calibrate();
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
    double od=abs(absorbance);
    ui->label_75->setText(QString::number(od, 'f', 3));
    double od1, od2, od4 , od5 , od6;
    od4=ui->label_75->text().toDouble(); // Cal OD
    od1=ui->label->text().toDouble(); //Blank OD
    od2=od4-od1; // Cal Od - Blank OD
    od5= abs(od2);
    ui->label_34->setText(QString::number(od5, 'f', 3));
    od6=ui->label_34->text().toDouble();
    qDebug()<<concen;
    double fact = concen / od6; // Fact value
    if(fact<100)
    {
        ui->label_196->setText(QString::number(fact, 'f' , 2)); // Calibrate Factor Value
        ui->label_76->setText(QString::number(fact, 'f' , 2)); // Calibrate Factor Value
    }
    else if(fact>100)
    {
        ui->label_196->setText(QString::number(fact, 'f' , 0)); // Calibrate Factor Value
        ui->label_76->setText(QString::number(fact, 'f' , 0)); // Calibrate Factor Value
    }

    ui->RunCal_Btn->setDisabled(false);
}

void MainWindow::plot_end_calibrate()
{
    line=2;
}

void MainWindow::on_Save_Btn_5_clicked()
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
    QString TestName = ui->TestName_Lbl->text();
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

void MainWindow::on_RunSample_Btn_clicked()
{
    ui->RunSample_Btn->setDisabled(true);
    clearGraph_end();
    ui->label_6->setEnabled(true);
    ui->label_6->setText("");
    ui->label_75->setText("");
    ui->label_208->setText("");
    ui->label_7->setVisible(true);
    ui->label_6->setVisible(true);
    ui->label_33->setText("");
    ui->label_7->setText("OD-B.OD");
    ui->label_203->setVisible(false);
    ui->label_204->setVisible(false);
    ui->label_208->setVisible(true);
    ui->label_209->setVisible(true);
    ui->label_207->setVisible(false);
    ui->label_75->setVisible(false);

    QString TestName = ui->TestName_Lbl->text();
    QString wavelength , intensity ;
    double blankval = 0 , mulfact =0 , fact = 0 , transmission=0,absorbance=0,  con1 = 0;
    QSqlQuery query;
    query.prepare("select * from test where name = '"+TestName+"'");
    query.exec();
    while(query.next())
    {
        wavelength=query.value(2).toString();
        fact=query.value(6).toDouble();
        con1=query.value(18).toDouble();
    }
    concen=con1;
    fct=fact;
    qDebug()<<concen;
    bc_y_val=0;
    ymin=absorbance-0.02;
    ymax=absorbance+0.02;
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
    while(query.next())
    {
        mulfact=query.value(12).toDouble();
    }
    multiFact=mulfact;
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
    plot_end();
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
        QThread::msleep(100);
    }
    double od ,od1,od2,od5;
    od = abs(absorbance);
    ui->label_208->setText(QString::number(od, 'f', 3));
    od5=ui->label_208->text().toDouble();
    od1=ui->label->text().toDouble();    //Blank OD
    od2 = od5-od1;                      // Samp OD - Blank OD
    double od6=abs(od2);
    ui->label_6->setText(QString::number(od6, 'f', 3));
    double dod1, dod2,dod3,dod4,dod5 = 0.0,dod6,dod7;
    if(fct == 0.0)
    {
        dod1=ui->label_6->text().toDouble();// Sample OD
        dod2=ui->label_196->text().toDouble();// Factor OD
        dod3=dod1*dod2;
        dod4 = abs(dod3);
        if(dod4<100)
        {
            ui->label_33->setText(QString::number(dod4, 'f' , 2));
        }
        else if(dod4>100)
        {
            ui->label_33->setText(QString::number(dod4, 'f' , 0));
        }
    }
    else
    {
        dod5=ui->label_6->text().toDouble();
        dod6=(fct * dod5);
        dod7 = abs(dod6);
        if(dod7<100)
        {
            ui->label_33->setText(QString::number(dod7, 'f' , 2));
        }
        else if(dod7>100)
        {
            ui->label_33->setText(QString::number(dod7, 'f' , 0));
        }
    }

    ui->RunSample_Btn->setDisabled(false);
}

void MainWindow::clearData()
{
    qv_x.clear();
    qv_y.clear();
}

void MainWindow::plot_end()
{
    line=3;
}

void MainWindow::addPoint(double x, double y)
{
    qv_x.append(x);
    qv_y.append(y);

    if(y<ymax)
        ymax=y;
    if(y>ymin)
        ymin=y;
    if(y>bc_y_val)
        bc_y_val=y;

    ui->customPlot->graph(0)->setData(qv_x,qv_y);
    ui->customPlot->update();
    ui->customPlot->replot();
    if(line==1)
    {
        ui->customPlot->graph(0)->setData(qv_x,qv_y);
        ui->customPlot->xAxis->setLabel("POINTS");
        ui->customPlot->yAxis->setLabel("OD");
        // set axes ranges, so we see all data:
        ui->customPlot->xAxis->setRange(0, 5);
        ui->customPlot->yAxis->setRange(-0.2,2.6);
        ui->customPlot->update();
        ui->customPlot->replot();
        qDebug()<<"endPoint Blank";
    }
    else if(line==2)
    {
        ui->customPlot->xAxis->setLabel("POINTS");
        ui->customPlot->yAxis->setLabel("OD");
        // set axes ranges, so we see all data:
        ui->customPlot->xAxis->setRange(0, 5);
        ui->customPlot->yAxis->setRange(-0.2,2.6);
        ui->customPlot->update();
        ui->customPlot->replot();

        qDebug()<<"Endpoint Calibrate";
    }
    else if(line==3)
    {
        ui->customPlot->xAxis->setLabel("POINTS");
        ui->customPlot->yAxis->setLabel("OD");
        // set axes ranges, so we see all data:
        ui->customPlot->xAxis->setRange(0, 5);
        ui->customPlot->yAxis->setRange(-0.2,2.6);
        ui->customPlot->update();
        ui->customPlot->replot();

        qDebug()<<"EndPoint Sample";
    }

    else if(line==4)
    {
        ui->customPlot->graph(0)->setData(qv_x,qv_y);
        ui->customPlot->xAxis->setLabel("POINTS");
        ui->customPlot->yAxis->setLabel("OD");
        // set axes ranges, so we see all data:
        ui->customPlot->xAxis->setRange(0, 5);
        ui->customPlot->yAxis->setRange(-0.2,2.6);
        ui->customPlot->replot();
        ui->customPlot->update();
        qDebug()<<"Twopoint blank ";
    }
    else if(line==5)
    {
        QString TestName = ui->TestName_Lbl_5->text();
        QVector<double> xv1(2);
        QVector<double> yv1(2);
        QVector<double> xv2(2);
        QVector<double> yv2(2);
        QVector<double> xv3(2);
        QVector<double> yv3(2);

        xv1[0]=xv1[1]=dly;
        xv2[0]=xv2[1]=total_read_point;
        yv1[0]=yv2[0]=ymin;
        yv1[1]=ymax;
        yv2[1]=ymax;
        //ui->customPlot->legend->setVisible(true);
        ui->customPlot->graph(0)->setData(qv_x,qv_y);
        ui->customPlot->xAxis->setLabel("POINTS");
        ui->customPlot->yAxis->setLabel("OD");
        // set axes ranges, so we see all data:
        ui->customPlot->xAxis->setRange(dly, total_read_point);
        ui->customPlot->yAxis->setRange(ymin,ymax);

        ui->customPlot->update();
        ui->customPlot->addGraph();
        ui->customPlot->graph(1)->setPen(QPen(Qt::red,3));
        ui->customPlot->graph(1)->setData(xv1,yv1);
        ui->customPlot->addGraph();
        ui->customPlot->graph(2)->setPen(QPen(Qt::red,8));
        ui->customPlot->graph(2)->setData(xv2,yv2);
        ui->customPlot->addGraph();
        ui->customPlot->replot();
        qDebug()<<"Two Calibrate";
    }
    else if(line==6)
    {
        QString TestName = ui->TestName_Lbl_5->text();
        QVector<double> xv1(2);
        QVector<double> yv1(2);
        QVector<double> xv2(2);
        QVector<double> yv2(2);
        QVector<double> xv3(2);
        QVector<double> yv3(2);
        xv1[0]=xv1[1]=dly;
        xv2[0]=xv2[1]=total_read_point;
        yv1[0]=yv2[0]=ymin;
        yv1[1]=ymax;
        yv2[1]=ymax;
        ui->customPlot->graph(0)->setData(qv_x,qv_y);
        ui->customPlot->xAxis->setLabel("POINTS");
        ui->customPlot->yAxis->setLabel("OD");
        // set axes ranges, so we see all data:
        ui->customPlot->xAxis->setRange(dly, total_read_point);
        ui->customPlot->yAxis->setRange(ymin,ymax);
        ui->customPlot->update();
        ui->customPlot->addGraph();
        ui->customPlot->graph(1)->setPen(QPen(Qt::red,3));
        ui->customPlot->graph(1)->setData(xv1,yv1);
        ui->customPlot->addGraph();
        ui->customPlot->graph(2)->setPen(QPen(Qt::red,8));
        ui->customPlot->graph(2)->setData(xv2,yv2);
        ui->customPlot->addGraph();
        ui->customPlot->replot();
        qDebug()<<"Two Sample";
    }

    else if(line==7)
    {
        ui->customPlot->graph(0)->setData(qv_x,qv_y);
        ui->customPlot->xAxis->setLabel("POINTS");
        ui->customPlot->yAxis->setLabel("OD");
        // set axes ranges, so we see all data:
        ui->customPlot->xAxis->setRange(0, 5);
        ui->customPlot->yAxis->setRange(-0.2,2.6);
        ui->customPlot->replot();
        ui->customPlot->update();
        qDebug()<<"Kinetic Blank";
    }
    else if (line==8)
    {
        QString TestName = ui->TestName_Lbl_6->text();
        QVector<double> xv1(2);
        QVector<double> yv1(2);
        QVector<double> xv2(2);
        QVector<double> yv2(2);
        QVector<double> xv3(2);
        QVector<double> yv3(2);
        QVector<double> xv4(2);
        QVector<double> yv4(2);
        xv1[0]=xv1[1]=dly;
        xv2[0]=xv2[1]=dly+lagg;
        xv3[0]=xv3[1]=dly+(lagg*2);
        xv4[0]=xv4[1]=dly+(lagg*3);
        yv1[0]=yv2[0]=yv3[0]=yv4[0]=ymin;
        yv1[1]=ymax;
        yv2[1]=ymax;
        yv3[1]=ymax;
        yv4[1]=ymax;
        if(val==2)
        {
            ui->customPlot->graph(0)->setData(qv_x,qv_y);
            ui->customPlot->xAxis->setLabel("POINTS");
            ui->customPlot->yAxis->setLabel("OD");
            // set axes ranges, so we see all data:
            ui->customPlot->xAxis->setRange(dly, total_read_point);
            ui->customPlot->yAxis->setRange(ymin,ymax);
            ui->customPlot->update();
            ui->customPlot->addGraph();
            ui->customPlot->graph(1)->setPen(QPen(Qt::red,3));
            ui->customPlot->graph(1)->setData(xv1,yv1);
            ui->customPlot->addGraph();
            ui->customPlot->graph(2)->setPen(QPen(Qt::red,3));
            ui->customPlot->graph(2)->setData(xv2,yv2);
            ui->customPlot->addGraph();
            ui->customPlot->graph(3)->setPen(QPen(Qt::red,8));
            ui->customPlot->graph(3)->setData(xv3,yv3);
            ui->customPlot->replot();
            qDebug()<<"Kinetic Calibrate";
        }
        else if(val==3)
        {
            ui->customPlot->graph(0)->setData(qv_x,qv_y);
            ui->customPlot->xAxis->setLabel("POINTS");
            ui->customPlot->yAxis->setLabel("OD");
            // set axes ranges, so we see all data:
            ui->customPlot->xAxis->setRange(dly, total_read_point);
            ui->customPlot->yAxis->setRange(ymin,ymax);
            ui->customPlot->update();
            ui->customPlot->addGraph();
            ui->customPlot->graph(1)->setPen(QPen(Qt::red,3));
            ui->customPlot->graph(1)->setData(xv1,yv1);
            ui->customPlot->addGraph();
            ui->customPlot->graph(2)->setPen(QPen(Qt::red,3));
            ui->customPlot->graph(2)->setData(xv2,yv2);
            ui->customPlot->addGraph();
            ui->customPlot->graph(3)->setPen(QPen(Qt::red,3));
            ui->customPlot->graph(3)->setData(xv3,yv3);
            ui->customPlot->addGraph();
            ui->customPlot->graph(4)->setPen(QPen(Qt::red,8));
            ui->customPlot->graph(4)->setData(xv4,yv4);
            ui->customPlot->replot();
            qDebug()<<"Kinetic Calibaret";
        }
    }
    else if (line==9)
    {
        QString TestName = ui->TestName_Lbl_6->text();
        QVector<double> xv1(2);
        QVector<double> yv1(2);
        QVector<double> xv2(2);
        QVector<double> yv2(2);
        QVector<double> xv3(2);
        QVector<double> yv3(2);
        QVector<double> xv4(2);
        QVector<double> yv4(2);
        xv1[0]=xv1[1]=dly;
        xv2[0]=xv2[1]=dly+lagg;
        xv3[0]=xv3[1]=dly+(lagg*2);
        xv4[0]=xv4[1]=dly+(lagg*3);
        yv1[0]=ymin;
        yv2[0]=ymin;
        yv3[0]=ymin;
        yv4[0]=ymin;

        yv1[1]=ymax;
        yv2[1]=ymax;
        yv3[1]=ymax;
        yv4[1]=ymax;
        if(val==2)
        {
            ui->customPlot->graph(0)->setData(qv_x,qv_y);
            ui->customPlot->xAxis->setLabel("POINTS");
            ui->customPlot->yAxis->setLabel("OD");
            // set axes ranges, so we see all data:
            ui->customPlot->xAxis->setRange(0, total_read_point);
            ui->customPlot->yAxis->setRange(ymin,ymax);
            ui->customPlot->update();
            ui->customPlot->addGraph();
            ui->customPlot->graph(1)->setPen(QPen(Qt::red,3));
            ui->customPlot->graph(1)->setData(xv1,yv1);
            ui->customPlot->addGraph();
            ui->customPlot->graph(2)->setPen(QPen(Qt::red,3));
            ui->customPlot->graph(2)->setData(xv2,yv2);
            ui->customPlot->addGraph();
            ui->customPlot->graph(3)->setPen(QPen(Qt::red,8));
            ui->customPlot->graph(3)->setData(xv3,yv3);
            ui->customPlot->replot();
            qDebug()<<"Kinetic Sample";

        }
        else if(val==3)
        {
            ui->customPlot->graph(0)->setData(qv_x,qv_y);
            ui->customPlot->xAxis->setLabel("POINTS");
            ui->customPlot->yAxis->setLabel("OD");
            // set axes ranges, so we see all data:
            ui->customPlot->xAxis->setRange(0, total_read_point);
            ui->customPlot->yAxis->setRange(ymin,ymax);
            ui->customPlot->update();
            ui->customPlot->addGraph();
            ui->customPlot->graph(1)->setPen(QPen(Qt::red,3));
            ui->customPlot->graph(1)->setData(xv1,yv1);
            ui->customPlot->addGraph();
            ui->customPlot->graph(2)->setPen(QPen(Qt::red,3));
            ui->customPlot->graph(2)->setData(xv2,yv2);
            ui->customPlot->addGraph();
            ui->customPlot->graph(3)->setPen(QPen(Qt::red,3));
            ui->customPlot->graph(3)->setData(xv3,yv3);
            ui->customPlot->addGraph();
            ui->customPlot->graph(4)->setPen(QPen(Qt::red,8));
            ui->customPlot->graph(4)->setData(xv4,yv4);
            ui->customPlot->replot();
            qDebug()<<"Kinetic Sample";
        }
    }

}

void MainWindow::on_Print_Btn_clicked()
{

    ui->Print_Btn->setDisabled(true);
    ui->stackedWidget->setCurrentIndex(25);

    ui->EndPoint_Print_Btn->setVisible(true);
    ui->TwoPoint_Print_Btn->setVisible(false);
    ui->Kinetic_Print_Btn->setVisible(false);
    ui->End_Skip_Btn->setVisible(true);
    ui->Two_Skip_Btn->setVisible(false);
    ui->Kinetic_Skip_Btn->setVisible(false);

    /*QApplication::processEvents();
    timer->stop();
    timer1->stop();
    QString sno , Labname , Username;
    QSqlQuery query;
    query.prepare("select * from Userlogin where sno='"+sno+"'");
    query.exec();
    while(query.next())
    {
        Labname=query.value(1).toString();
        Username=query.value(2).toString();
    }
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
    p->write(" Patient ID  : "  + ui->PatientInfo_LineEdit->text());
    p->write("\n Test Name   : "  + ui->TestName_Lbl->text());
    p->write("\n Result      : "   + ui->label_33->text() +  ""   +    ui->Unit_lineEdit->text());
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
    ui->Print_Btn->setDisabled(false);
    return 1;*/
}


