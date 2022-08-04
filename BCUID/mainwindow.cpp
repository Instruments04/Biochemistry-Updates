#include <QtCore/QCoreApplication>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "printer.h"
#include <QtNetwork/QNetworkConfigurationManager>
#include <QUrl>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QNetworkSession>
#include <QDateTimeEdit>

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

int filtwave[600];
static QString array[100]={""};
int read_status=0;
int read_wave=0;
int read_intensity=0;
int total_read_point=0;
int current_read_point=0;
double blank_val=0;
int dly=0;
int lagg=0;
int val=0;
double fct=0;
double multiFact=0;
int option=0;
double concen=0;
int w340=0,w405=0,w507=0,w545=0,w572=0,w628=0,w700=0;
double bc_y_val=0;
double absorbance=0;
int line=0;
double ymin=0;
double ymax =0;
double start=0;
double end =0;
int Enter=1;

QString startval="1";
QString endval="10";
QString text;
int Individual;
int Individuals;
int Internal=0;
int External=0;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->frame_5->setVisible(true);
    ui->Power_Btn_2->setVisible(true);
    ui->label_133->setVisible(true);
    ui->stackedWidget->setCurrentIndex(0);
    ui->Save_Btn_2->setDisabled(true);
    ui->tabWidget_2->setCurrentIndex(0);
    ui->tabWidget_4->setCurrentIndex(0);
    ui->tabWidget_5->setCurrentIndex(0);
    wiringPiSetup () ;
    mcp3004Setup (ADC_BASE, SPI_CHAN) ;
    sr595Setup (LED_BASE, 8, dataPin, clockPin, latchPin) ;
    pinMode (en, OUTPUT) ;
    pinMode (dir, OUTPUT) ;
    pinMode (steps, OUTPUT) ;
    pinMode (hm_sen, INPUT) ;
    pinMode (BARCODE_GND, OUTPUT) ;
    digitalWrite(en,HIGH);
    digitalWrite(BARCODE_GND,LOW);
    pinMode (LED, PWM_OUTPUT);
    pwmWrite (LED, 0);
    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("/home/pi/git/Biochemistry-Updates/BCUID/bc.db");
    if(!mydb.open())
    {
        qDebug() << "Can't Connect to DB !";
    }
    else
    {
        qDebug() << "Connected Successfully to DB !";
    }
    setWindowFlags(Qt::FramelessWindowHint);



    // Set the manual handling of click on link
    //ui->webView->page()->setLinkDelegationPolicy(QWebPage::DelegateAllLinks);

    // Connect the signal pressing "Enter" in the field qlineEdit
    // connect(ui->lineEdit_3, &QLineEdit::returnPressed, this, &MainWindow::slotEnter);
    // Connect the signal click on the link to the handler
    //connect(ui->webView, &QWebView::linkClicked, this, &MainWindow::slotLinkClicked);

    //Swipe Gesture**************

    QScroller::grabGesture(ui->scrollArea, QScroller::LeftMouseButtonGesture);
    QScroller::grabGesture(ui->scrollArea_3, QScroller::LeftMouseButtonGesture);
    QScroller::grabGesture(ui->scrollArea_4, QScroller::LeftMouseButtonGesture);
    QScroller::grabGesture(ui->scrollArea_6, QScroller::LeftMouseButtonGesture);
    QScroller::grabGesture(ui->scrollArea_5, QScroller::LeftMouseButtonGesture);
    QScroller::grabGesture(ui->scrollArea_7, QScroller::LeftMouseButtonGesture);

    //Setting & Power Btn Hidden**************

    ui->frame->hide();
    ui->pushButton_23->hide();
    ui->pushButton_25->hide();
    ui->label_92->setVisible(false);

    //Date & Time edit********************

    hourPattern = QString("%1:%2");
    this->date = "";
    this->time = "";
    QDate date=QDate::currentDate();
    QString datetext= date.toString("dd / MM / yyyy");
    ui->SysDate_Lbl->setText(datetext);

    timer = new QTimer(this);
    connect(timer ,SIGNAL(timeout()) , this ,SLOT(ShowTime()));
    timer->setTimerType(Qt::PreciseTimer);
    timer->start(1000);

    readtimer = new QTimer(this);
    connect(readtimer ,SIGNAL(timeout()) , this ,SLOT(reading1()));
    readtimer->setTimerType(Qt::PreciseTimer);
    //readtimer->start(1000);

    timer1 = new QTimer(this);
    connect(timer1, SIGNAL(timeout()), this,SLOT(temp()));
    timer1->start(1000);

    //End-Point Plot********************

    ui->customPlot->addGraph();
    ui->customPlot->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->customPlot->graph(0)->setLineStyle(QCPGraph::lsLine);

    //Wifi Setup*************************

    QStringList list2;
    QProcess process1;
    process1.start("sh",QStringList()<<"-c"<<"sudo iwlist wlan0 scan | grep ESSID");//scan list of wifi networks
    process1.waitForFinished();
    QString data = process1.readAllStandardOutput();
    QString Error= process1.readAllStandardError();
    list2 = (QStringList()<<"------Select-------");//append to dropdownlist
    ui->comboBox_4->addItems(list2);
    QStringList list = data.split("\n");//split data
    for(int i=0;i<list.count()-1;i++)
    {
        QStringList list1 = list.at(i).split("ESSID:");
        QString data1 = list1.at(1);
        list2 = (QStringList()<<data1);
        ui->comboBox_4->addItems(list2);//adding wifi names to dropdownlist
    }
    ;

    QString name;
    //int fact = 0;
    QSqlQuery query;
    query.prepare("select * from test where name = '"+name+"'");
    query.exec();
    while(query.next())
    {
        //  fact = query.value(6).toInt();
    }

    ui->label_210->setVisible(false);
    ui->label_206->setVisible(false);
    ui->lineEdit_148->setVisible(false);
    ui->pushButton_230->setVisible(false);
    ui->pushButton_231->setVisible(false);

    ui->pushButton_10->setVisible(false);
    ui->pushButton_134->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->pushButton_7->setVisible(false);
    ui->pushButton_11->setVisible(false);
    ui->pushButton_131->setVisible(false);
    ui->toolButton->setVisible(false);

    ui->Filter_Btn->setVisible(true);
    ui->Data_Print_Btn->setVisible(true);
    ui->Export_Data->setVisible(true);
    ui->Data_Delete_Btn->setVisible(true);
    ui->Data_Delete_All->setVisible(true);
    ui->Filt_TestName->setVisible(false);
    ui->Filt_Sample_Id->setVisible(false);
    ui->Filt_Date->setVisible(false);
    ui->Print_Individual_Data->setVisible(false);
    ui->Print_All_data->setVisible(false);
    ui->Export_CSV->setVisible(false);
    ui->Export_Pendrive->setVisible(false);
    ui->lineEdit_149->setVisible(false);
    ui->pushButton_240->setVisible(false);
    ui->label_215->setVisible(false);
    ui->label_216->setVisible(false);
    ui->dateEdit_4->setVisible(false);
    ui->dateEdit_5->setVisible(false);
    ui->pushButton_308->setVisible(false);
    ui->pushButton_309->setVisible(false);
    ui->pushButton_310->setVisible(false);
    ui->pushButton_311->setVisible(false);
    ui->Export_Data->setVisible(false);

    ui->PID_lbl->setVisible(false);
    ui->PID_lineEdit->setVisible(false);
    ui->PName_lbl->setVisible(false);
    ui->PName_lineEdit->setVisible(false);
    ui->PAge_lbl->setVisible(false);
    ui->PAge_lineEdit->setVisible(false);
    ui->PGender_lbl->setVisible(false);
    ui->PGender_lineEdit->setVisible(false);
    ui->TName_lbl->setVisible(false);
    ui->TName_lineEdit->setVisible(false);
    ui->ANrmlRang_lbl->setVisible(false);
    ui->ANrmlRang_lineEdit->setVisible(false);
    ui->BNrmlRang_lbl->setVisible(false);
    ui->BNrmlRang_lineEdit->setVisible(false);
    ui->ODVal_lbl->setVisible(false);
    ui->ODVal_lineEdit->setVisible(false);
    ui->ResultOD_lbl->setVisible(false);
    ui->ResultOD_lineEdit->setVisible(false);
    ui->Date_lbl->setVisible(false);
    ui->Date_lineEdit->setVisible(false);
    ui->Time_lbl->setVisible(false);
    ui->Time_lineEdit->setVisible(false);
    ui->comboBox_11->setVisible(false);
    ui->Unit_lineEdit1->setVisible(false);
    ui->Unit_lineEdit1lbl->setVisible(false);
    ui->Print_Individual_Btn->setVisible(false);
    ui->Print_Individual_Btn_2->setVisible(false);
    ui->Delete_Individual_Btn->setVisible(false);
    ui->comboBox_12->setVisible(false);
    ui->Data_Select_Delete->setVisible(false);
    ui->Data_Delete_All->setVisible(false);

    ui->label_219->setVisible(false);
    ui->label_220->setVisible(false);

    // QObject::connect(&manager, SIGNAL(finished(QNetworkReply*)),this, SLOT(downloadFinished(QNetworkReply*)));

    /*ui->webview->page()->setforwardunsupportedcontent(true);
       connect(ui->webview->page(),signal(downloadrequested(qnetworkrequest)),this,slot(download(qnetworkrequest)));
       connect(ui->webview->page(),signal(unsupportedcontent(qnetworkreply*)),this,slot(unsupportedcontent(qnetworkreply*)));*/

    /*for(int i=1;i<=1;i++)
    {
        digitalWrite (LED_BASE + 0,HIGH) ;
        digitalWrite (LED_BASE + 1,HIGH) ;
        digitalWrite (LED_BASE + 2,HIGH) ;
        digitalWrite (LED_BASE + 3,HIGH) ;
        digitalWrite (LED_BASE + 4,HIGH) ;
        digitalWrite (LED_BASE + 5,HIGH) ;
        digitalWrite (LED_BASE + 6,HIGH) ;
        QThread::msleep(1000);
        digitalWrite (LED_BASE + 0,LOW) ;
        digitalWrite (LED_BASE + 1,LOW) ;
        digitalWrite (LED_BASE + 2,LOW) ;
        digitalWrite (LED_BASE + 3,LOW) ;
        digitalWrite (LED_BASE + 4,LOW) ;
        digitalWrite (LED_BASE + 5,LOW) ;
        digitalWrite (LED_BASE + 6,LOW) ;
    }*/
    /* int blank=0;
    query.prepare("select * from tests where sno=1");
    query.exec();
    while(query.next())
    {
        blank=query.value(11).toInt();
    }
    ui->label_114->setNum(blank);
    query.prepare("select * from tests where sno=2");
    query.exec();
    while(query.next())
    {
        blank=query.value(11).toInt();
    }
    ui->label_115->setNum(blank);
    query.prepare("select * from tests where sno=3");
    query.exec();
    while(query.next())
    {
        blank=query.value(11).toInt();
    }
    ui->label_117->setNum(blank);
    query.prepare("select * from tests where sno=4");
    query.exec();
    while(query.next())
    {
        blank=query.value(11).toInt();
    }
    ui->label_118->setNum(blank);
    query.prepare("select * from tests where sno=5");
    query.exec();
    while(query.next())
    {
        blank=query.value(11).toInt();
    }
    ui->label_124->setNum(blank);
    query.prepare("select * from tests where sno=6");
    query.exec();
    while(query.next())
    {
        blank=query.value(11).toInt();
    }
    ui->label_126->setNum(blank);
    query.prepare("select * from tests where sno=7");
    query.exec();
    while(query.next())
    {
        blank=query.value(11).toInt();
    }
    ui->label_183->setNum(blank);*/

    QString ONE , TWO , THREE, FOUR, FIVE , SIX , SEVEN ;
    ONE =char (one);
    TWO =char(two);
    THREE=char(three);
    FOUR=char(four);
    FIVE =char(five);
    SIX =char(six);
    SEVEN =char(seven);
    ui->label_114->setText("");
    ui->label_115->setText("");
    ui->label_117->setText("");
    ui->label_118->setText("");
    ui->label_124->setText("");
    ui->label_126->setText("");
    ui->label_183->setText("");
    ONE = ui->label_114->text();
    TWO = ui->label_115->text();
    THREE = ui->label_117->text();
    FOUR = ui->label_118->text();
    FIVE = ui->label_124->text();
    SIX = ui->label_126->text();
    SEVEN = ui->label_183->text();

    query.prepare("update tests set blankval='"+ONE+"' where sno=1");
    if(query.exec())

        query.prepare("update tests set blankval='"+TWO+"' where sno=2");
    if(query.exec())

        query.prepare("update tests set blankval='"+THREE+"' where sno=3");
    if(query.exec())

        query.prepare("update tests set blankval='"+FOUR+"' where sno=4");
    if(query.exec())

        query.prepare("update tests set blankval='"+FIVE+"' where sno=5");
    if(query.exec())

        query.prepare("update tests set blankval='"+SIX+"' where sno=6");
    if(query.exec())

        query.prepare("update tests set blankval='"+SEVEN+"' where sno=7");
    if(query.exec())
    {

    }
    else
    {

    }

    /*for(int i=0;i<200;i++)
    {
      // on_pushButton_227_clicked();
        //on_pushButton_8_clicked();
        //       on_pushButton_9_clicked();
        //        on_pushButton_24_clicked();
        //        on_pushButton_26_clicked();
        //        on_pushButton_128_clicked();
        //        on_pushButton_129_clicked();
        //       on_pushButton_130_clicked();
        QThread::msleep(400);
        //        qDebug() <<i<<"  "<<w340<<"  "<<w405<<"  "<<w507<<"  "<<w545<<"  "<<w572<<"  "<<w628<<"  "<<w700;
        qDebug()<<w340;
    }*/

}
void MainWindow::on_hours_sliderMoved(int position)
{
    ui->time->setText(QString(this->hourPattern).arg(position, 2,10,QChar('0')).arg(ui->minutes->value(),2,10,QChar('0')));
    this->time = ui->time->text();
}

void MainWindow::on_minutes_sliderMoved(int position)
{
    ui->time->setText(QString(this->hourPattern).arg(ui->hours->value(), 2,10,QChar('0')).arg(position,2,10,QChar('0')));
    this->time = ui->time->text();
}

void MainWindow::ShowTime()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->SysTime_Lbl->setText(time_text);
}

void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
    /*this->date = date.toString("dd/MM/yyyy");
    QString string=date.toString("dd/MM/yyyy");
    QString dateTimeString ("date -s ");
    dateTimeString.append(string);
    int systemDateTimeStatus= system(dateTimeString.toStdString().c_str());
    qDebug()<<systemDateTimeStatus;

    if (systemDateTimeStatus == -1)
    {
        qDebug() << "Failed to change date time";
    }*/
}

void MainWindow::on_pushButton_6_clicked()
{

    /* QString string = dateTime.toStdString("\"yyyy-MM-dd hh:mm\"");
 QString string= ui->calendarWidget->selectedDate().toString("dd/MM/yyyy");
    QString dateTimeString ("date -s ");
    dateTimeString.append(string);
    int systemDateTimeStatus= system(dateTimeString.toStdString().c_str());
    if (systemDateTimeStatus == -1)
    {
        qDebug() << "Failed to change date time";
    }*/

    int systemHwClockStatus = system("/sbin/hwclock -r");
    int systemHwClockStatus1 = system("/sbin/hwclock -w");
    qDebug()<<systemHwClockStatus;
    qDebug()<<systemHwClockStatus1;
    //ui->label_89->setText(QString::number(systemHwClockStatus));
    //ui->label_212->setText(QString::number(systemHwClockStatus1));
    if (systemHwClockStatus == -1 )
    {
        qDebug() << "Failed to sync hardware clock";
    }

    /*ui->calendarWidget->selectedDate().toString("dd/MM/yyyy");
    this->date = QString("%1").arg(this->date);
    this->time = QString("%2").arg(this->time);
    ui->SysDate_Lbl->setText(date);
    ui->SysTime_Lbl->setText(time);
    ui->stackedWidget->setCurrentIndex(12);*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotEnter()
{
    // Load the page specified in the URL field lineEdit
    //ui->webView->load(QUrl(ui->lineEdit_3->text()));
}

void MainWindow::slotLinkClicked(QUrl url)
{
    // Clicking on the link put the address in the field qlineEdit
    //ui->lineEdit_3->setText(url.toString());
    //ui->webView->load(url);     // Загружаем страницу по этой ссылке
}
/*void MainWindow::download(const qnetworkrequest &request)
{
  qdebug()<<"download requested: "<<request.url();
 }
 void MainWindow::unsupportedcontent(qnetworkreply * reply)
{
   qdebug()<<"unsupported content: "<<reply->url();
}*/

void MainWindow::on_Home_Btn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_Menu_Btn_2_clicked()
{
    if (ui->frame->isVisible())
        ui->frame->setVisible(false);
    else
        ui->frame->setVisible(true);
}

void MainWindow::on_Home_Btn_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_Home_Btn_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_Home_Btn_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::temp()
{
    Pi2c arduino(7); //Create a new object "arduino" using address "0x07"
    char receive[30]; //Create a buffer of char (single bytes) for the data
    //Receive from the Arduino and put the contents into the "receive" char array
    //timer1->stop();
    QThread::msleep(100);
    arduino.i2cRead(receive,30);
    QThread::msleep(100);
    QString str=receive;
    //Print out what the Arduino is sending...
    //qDebug() << "Arduino Says: " << str.mid(0,2);
    ui->ReadBlock_Lbl_2->setText(str.mid(0,4));
    ui->IncuBlock_Lbl_2->setText(str.mid(5,9));
}

void MainWindow::on_DataHis_Btn_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void MainWindow::on_pushButton_308_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->tableView->model()->rowCount();
    const int columnCount = ui->tableView->model()->columnCount();

    /*out <<  "<html>\n"
        "<head>\n"
        "<meta Content=\"Text/html; charset=Windows-1251\">\n"
        <<  QString("<title>%1</title>\n").arg(strTitle)
        <<  "</head>\n"
        "<body bgcolor=#ffffff link=#5000A0>\n"
        "<table border=1 cellspacing=0 cellpadding=2>\n";*/

    // headers
    out << "<thead><tr bgcolor=#f0f0f0>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tableView->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tableView->isColumnHidden(column)) {
                QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
            "</body>\n"
            "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    QPrinter printer;

    QPrintDialog *dialog = new QPrintDialog(&printer, nullptr);
    if (dialog->exec() == QDialog::Accepted) {
        document->print(&printer);
    }

    delete document;

}

void MainWindow::on_Load_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);

    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* query=new QSqlQuery(mydb);
    query->prepare("select name, unit ,  wave,rctn,temp, fact, blnk, dely, read, lag, linmin, linmax, normin, normax from test ");
    query->exec();
    modal->setQuery(*query);
    ui->tableView->setModel(modal);
    qDebug() << ( modal->rowCount());
}

void MainWindow::on_toolButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_toolButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_Home_Btn_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_toolButton_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_Setting_Btn_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);
}

void MainWindow::on_Load_Btn_2_clicked()
{

    ui->stackedWidget->setCurrentIndex(13);
    ui->comboBox_11->setVisible(false);
    ui->Print_Individual_Btn->setVisible(false);
    ui->Print_Individual_Btn_2->setVisible(false);
    ui->label_213->setText(" ");
    ui->label_214->setText(" ");
    ui->lineEdit_149->setVisible(false);
    ui->pushButton_240->setVisible(false);
    ui->pushButton_311->setVisible(false);
    ui->Filter_Btn->setVisible(true);
    ui->Data_Print_Btn->setVisible(true);
    ui->Export_Btn->setVisible(true);
    ui->Data_Delete_Btn->setVisible(true);
    ui->Data_Delete_All->setVisible(false);
    ui->Filt_TestName->setVisible(false);
    ui->Filt_Sample_Id->setVisible(false);
    ui->Filt_Date->setVisible(false);
    ui->Print_Individual_Data->setVisible(false);
    ui->Print_All_data->setVisible(false);
    //ui->Export_Btn->setVisible(false);
    ui->Export_CSV->setVisible(false);
    ui->Export_Pendrive->setVisible(false);
    ui->tableView_2->setModel(nullptr);
    ui->label_215->setVisible(false);
    ui->label_216->setVisible(false);
    ui->dateEdit_4->setVisible(false);
    ui->dateEdit_5->setVisible(false);
    ui->pushButton_310->setVisible(false);
    ui->label_217->setVisible(false);


    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* query=new QSqlQuery(mydb);
    query->prepare("select PID, TName ,  ANrmlRang,BNrmlRang,ODVal, ResultOD, Date, Time from Reports");
    query->exec();
    modal->setQuery(*query);
    ui->tableView_2->setModel(modal);
    qDebug() << ( modal->rowCount());
}

void MainWindow::on_Home_Btn_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void MainWindow::on_Home_Btn_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void MainWindow::on_Home_Btn_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_Home_Btn_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

int MainWindow::readadc( int pin)
{
    unsigned char buff[] = {static_cast<char>(0x6 | ((pin & 0x7) >> 2)),
                            static_cast<char>((pin & 0x7) << 6),
                            static_cast<char>(0)};

    wiringPiSPIDataRW(SPI_CHAN, buff, 3);
    return ((buff[1] & 0xf) << 8) | buff[2];
}

void MainWindow::updateTime()
{
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(17);
    QTcpSocket socket;
    socket.connectToHost("8.8.8.8", 53);
    if (socket.waitForConnected())
    {
        QString text = socket.localAddress().toString();
        ui->label_8->setText(text);
    }
    else
    {
        QMessageBox msg;
        msg.setText("Couldn't connect to the DNS server! No internet connection...");
        msg.setWindowTitle("No internet connection");
        msg.setIcon(QMessageBox::Critical);
        msg.exec();
    }
}

void MainWindow::on_toolButton_15_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);
}

void MainWindow::on_toolButton_16_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);
}

void MainWindow::on_toolButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(20);
}

void MainWindow::on_toolButton_2_clicked()
{
    if(Internal==1)
    {
        ui->label_9->setText("Internal Printer ....");
        qDebug()<<ui->label_9->text();
    }
    else if (External==2)
    {
        ui->label_9->setText("External Printer ....");
        qDebug()<<ui->label_9->text();
    }

    /*QPrinter printer;
            QPrintDialog dialog(&printer, this);
            dialog.setWindowTitle("Print Setup");
            if(ui->textEdit->textCursor().hasSelection())
                dialog.addEnabledOption(QAbstractPrintDialog::PrintSelection);
            if(dialog.exec() != QDialog::Accepted)
            {
                return;
            }*/
}

void MainWindow::on_toolButton_17_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);
    ui->SysDate_Lbl->setText(date);
}

void MainWindow::on_pushButton_5_clicked()
{
    //    QSqlQuery query;
    //    QStringList tables;
    //    query.prepare("SELECT * FROM sqlite_master");
    //    while (query.next())
    //    {
    //        qDebug() << query.value("sql").toString();
    //        if (query.value("type").toString() == "table")
    //            tables << query.value("name");
    //    }

    //    static const QString insert = QStringLiteral("INSERT INTO %1 (%2) VALUES (%3);");
    //    QStringList columns;
    //    QStringList values;
    //    QSqlRecord record;
    //    bool first = true;
    //    foreach (const QString& table, tables)
    //    {
    //        first = true;
    //        query.prepare(QString("SELECT * FROM [%1]").arg(table));
    //        while (query.next())
    //        {
    //            record = query.record();
    //            for (int i = 0; i < record.count(); i++)
    //            {
    //                if (first)
    //                    columns << record.fieldName(i);

    //                values << record.value(i);
    //            }
    //            first = false;

    //            qDebug() << insert.arg(table).arg(columns.join(", ")).arg(values.join(", "));
    //        }
    //    }
    //    Few not

    QProcess dumpProcess(this);
    QStringList args;
    args << "-uroot" << "-pmysql" << "test";
    dumpProcess.setStandardOutputFile("bc.db");
    dumpProcess.start("/home/pi/git/Biochemistry-Updates-main/BCUIDF/bc.db", args);

    /*QString filter = tr("Database Backup (*.db)");
    QString fileName = QFileDialog::getSaveFileName(this,tr("Backup Database"),QDir::homePath(),filter);
    if(!fileName.isEmpty()){
        QString filePath = QDir::homePath();
        filePath.append("/home/pi/git/BCUID/bc.db");
        QFile sourceFile(filePath);
        if(!sourceFile.open(QIODevice::ReadOnly))
        {
            return;
        }
        QFile destFile("bc.db");
        if(!destFile.open(QIODevice::WriteOnly))
        {
            return;
        }
        QTextStream sourceStream(&sourceFile);
        QTextStream destStream(&destFile);
        QByteArray data;
        sourceStream>>data;
        data = qCompress(data);
        destStream<<data;
        sourceFile.close();
        destFile.close();
    }*/
}

void MainWindow::on_Power_Btn_clicked()
{
    if (QMessageBox::Yes == QMessageBox(QMessageBox::Information, "Power Off", "Are you sure you want to Power Off ", QMessageBox::Yes|QMessageBox::No).exec())
    {
        system("sudo poweroff");  //System Power Off Option
    }
    else
    {

        ui->stackedWidget->setCurrentIndex(0);
    }//ui->stackedWidget->setCurrentIndex(19);
}

void MainWindow::on_pushButton_309_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void MainWindow::on_toolButton_20_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(19);
    int intensity=0  , wavelength=0,ABS = 0 , ABSO = 0;
    QSqlQuery query;
    query.prepare("select * from tests where sno = 1");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
        wavelength=query.value(8).toInt();
        ABS=query.value(9).toInt();
        ABSO=query.value(10).toInt();
    }
    QString ity1=QString::number(intensity);
    QString ABS1=QString::number(ABS);
    QString ABSO1=QString::number(ABSO);
    ui->lineEdit_72->setText(ity1);
    ui->lineEdit_83->setText(ABS1);
    ui->lineEdit_139->setText(ABSO1);
    query.prepare("select * from tests where sno = 2");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
        wavelength=query.value(8).toInt();
        ABS=query.value(9).toInt();
        ABSO=query.value(10).toInt();
    }
    QString ity2=QString::number(intensity);
    QString ABS2=QString::number(ABS);
    QString ABSO2=QString::number(ABSO);
    ui->lineEdit_73->setText(ity2);
    ui->lineEdit_84->setText(ABS2);
    ui->lineEdit_137->setText(ABSO2);
    query.prepare("select * from tests where sno = 3");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
        wavelength=query.value(8).toInt();
        ABS=query.value(9).toInt();
        ABSO=query.value(10).toInt();
    }
    QString ity3=QString::number(intensity);
    QString ABS3=QString::number(ABS);
    QString ABSO3=QString::number(ABSO);
    ui->lineEdit_74->setText(ity3);
    ui->lineEdit_80->setText(ABS3);
    ui->lineEdit_86->setText(ABSO3);
    query.prepare("select * from tests where sno = 4");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
        wavelength=query.value(8).toInt();
        ABS=query.value(9).toInt();
        ABSO=query.value(10).toInt();
    }
    QString ity4=QString::number(intensity);
    QString ABS4=QString::number(ABS);
    QString ABSO4=QString::number(ABSO);
    ui->lineEdit_75->setText(ity4);
    ui->lineEdit_82->setText(ABS4);
    ui->lineEdit_87->setText(ABSO4);
    query.prepare("select * from tests where sno = 5");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
        wavelength=query.value(8).toInt();
        ABS=query.value(9).toInt();
        ABSO=query.value(10).toInt();
    }
    QString ity5=QString::number(intensity);
    QString ABS5=QString::number(ABS);
    QString ABSO5=QString::number(ABSO);
    ui->lineEdit_76->setText(ity5);
    ui->lineEdit_79->setText(ABS5);
    ui->lineEdit_140->setText(ABSO5);
    query.prepare("select * from tests where sno = 6");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
        wavelength=query.value(8).toInt();
        ABS=query.value(9).toInt();
        ABSO=query.value(10).toInt();
    }
    QString ity6=QString::number(intensity);
    QString ABS6=QString::number(ABS);
    QString ABSO6=QString::number(ABSO);
    ui->lineEdit_77->setText(ity6);
    ui->lineEdit_81->setText(ABS6);
    ui->lineEdit_136->setText(ABSO6);

    query.prepare("select * from tests where sno = 7");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
        wavelength=query.value(8).toInt();
        ABS=query.value(9).toInt();
        ABSO=query.value(10).toInt();

    }
    QString ity7=QString::number(intensity);
    QString ABS7=QString::number(ABS);
    QString ABSO7=QString::number(ABSO);
    ui->lineEdit_78->setText(ity7);
    ui->lineEdit_85->setText(ABS7);
    ui->lineEdit_138->setText(ABSO7);
}



void MainWindow::on_toolButton_18_clicked()
{
    ui->stackedWidget->setCurrentIndex(15);
}

void MainWindow::download(const QNetworkRequest &request)
{
    qDebug()<<"Download Requested: "<<request.url();
}

void MainWindow::unsupportedContent(QNetworkReply * reply)
{
    qDebug()<<"Unsupported Content: "<<reply->url();
}

void MainWindow::displayResult(QNetworkReply *reply)
{
    QByteArray buffer = reply->readAll();
    qDebug() << "received reply";
    qDebug() << buffer;
    reply->deleteLater();
}

void MainWindow::on_Power_Btn_2_clicked()
{
    qApp->exit();
}

void MainWindow::on_pushButton_8_clicked()
{
    QSqlQuery query;
    int intensity=0, wavelength = 0 ;
    query.prepare("select * from tests where sno=1");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    filtwave[0]=reading(wavelength , intensity);
    ui->label_114->setNum(filtwave[0]);
    w340=filtwave[0];
    QString Blankval;
    Blankval = ui->label_114->text();
    query.prepare("update tests set blankval='"+Blankval+"' where sno=1");
    if(query.exec())
    {
    }
    else
    {
        qDebug()<<"Error";
    }
}

void MainWindow::on_pushButton_9_clicked()
{
    QSqlQuery query;
    int intensity = 0 , wavelength = 1 ;
    query.prepare("select * from tests where sno=2");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    filtwave[0]=reading(wavelength,intensity);
    ui->label_115->setNum(filtwave[0]);
    w405=filtwave[0];
    QString Blankval;
    Blankval = ui->label_115->text();
    query.prepare("update tests set blankval='"+Blankval+"' where sno=2");
    if(query.exec())
    {
        //qDebug()<<"Update Done";
    }
    else
    {
        qDebug()<<"Error";
    }
}

void MainWindow::on_pushButton_24_clicked()
{
    QSqlQuery query;
    int intensity = 0 , wavelength = 2 ;
    query.prepare("select * from tests where sno=3");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    filtwave[0]=reading(wavelength,intensity);
    ui->label_117->setNum(filtwave[0]);
    w507=filtwave[0];
    QString Blankval;
    Blankval = ui->label_117->text();
    query.prepare("update tests set blankval='"+Blankval+"' where sno=3");
    if(query.exec())
    {
        //qDebug()<<"Update Done";
    }
    else
    {
        qDebug()<<"Error";
    }
}

void MainWindow::on_pushButton_26_clicked()
{
    QSqlQuery query;
    int intensity = 0 , wavelength = 3 ;
    query.prepare("select * from tests where sno=4");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    filtwave[0]=reading(wavelength,intensity);
    ui->label_118->setNum(filtwave[0]);
    w545=filtwave[0];
    QString Blankval;
    Blankval = ui->label_118->text();
    query.prepare("update tests set blankval='"+Blankval+"' where sno=4");
    if(query.exec())
    {
        //qDebug()<<"Update Done";
    }
    else
    {
        qDebug()<<"Error";
    }
}

void MainWindow::on_pushButton_128_clicked()
{
    QSqlQuery query;
    int intensity = 0 , wavelength = 4 ;
    query.prepare("select * from tests where sno=5");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    filtwave[0]=reading(wavelength,intensity);
    ui->label_124->setNum(filtwave[0]);
    w572=filtwave[0];
    QString Blankval;
    Blankval = ui->label_124->text();
    query.prepare("update tests set blankval='"+Blankval+"' where sno=5");
    if(query.exec())
    {
        //qDebug()<<"Update Done";
    }
    else
    {
        qDebug()<<"Error";
    }
}

void MainWindow::on_pushButton_129_clicked()
{
    QSqlQuery query;
    int intensity = 0 , wavelength = 5 ;
    query.prepare("select * from tests where sno=6");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    filtwave[0]=reading(wavelength,intensity);
    ui->label_126->setNum(filtwave[0]);
    w628=filtwave[0];
    QString Blankval;
    Blankval = ui->label_126->text();
    query.prepare("update tests set blankval='"+Blankval+"' where sno=6");
    if(query.exec())
    {
        //qDebug()<<"Update Done";
    }
    else
    {
        qDebug()<<"Error";
    }
}

void MainWindow::on_pushButton_130_clicked()
{
    QSqlQuery query;
    int intensity = 0 , wavelength = 6 ;
    query.prepare("select * from tests where sno=7");
    query.exec();
    while(query.next())
    {
        intensity=query.value(1).toInt();
    }
    filtwave[0]=reading(wavelength,intensity);
    ui->label_183->setNum(filtwave[0]);
    w700=filtwave[0];
    QString Blankval;
    Blankval = ui->label_183->text();
    query.prepare("update tests set blankval='"+Blankval+"' where sno=7");
    if(query.exec())
    {
        //qDebug()<<"Update Done";
    }
    else
    {
        qDebug()<<"Error";
    }
}


void MainWindow::on_Save_Btn_2_clicked()
{
    ui->Save_Btn_2->setDisabled(true);

    QString Date , Time , PName , PGender ,Unit; //PID, , ANrmlRang , BNrmlRang , ODVal , ResultOD ,  ;
    int PID=0  ,ANrmlRang=0 , BNrmlRang=0  , date = 0 ,time=0 ,  PAge =0 ;
    double  ODVal=0 , ResultOD =0;
    Date = char (date);
    Time = char (time);
    QString TestName = ui->TestName_Lbl->text();
    PID = ui->PatientInfo_LineEdit->text().toInt();
    ODVal = ui->label_6->text().toDouble();
    ResultOD = ui->label_33->text().toDouble();
    Date= ui->SysDate_Lbl->text();
    Time =ui->SysTime_Lbl->text();
    PName = ui->Patient_Name->text();
    PAge= ui->Patient_Age->text().toInt();
    PGender = text;
    Unit = ui->Unit_lineEdit->text();
    QSqlQuery query;
    query.prepare("select * from test where name ='"+TestName+"'");
    query.exec();
    while(query.next())
    {
        ANrmlRang = query.value(14).toInt();
        BNrmlRang = query.value(13).toInt();
    }
    query.prepare("insert into Reports(PID  , PName , PAge , PGender,TName , ANrmlRang , BNrmlRang , ODVal , ResultOD,Unit ,  Date ,Time ) values(?,?, ?,?,?,?,?,?,?,?,?, ?)");
    query.addBindValue(PID);
    query.addBindValue(PName);
    query.addBindValue(PAge);
    query.addBindValue(PGender);
    query.addBindValue(TestName);
    query.addBindValue(ANrmlRang);
    query.addBindValue(BNrmlRang);
    query.addBindValue(ODVal);
    query.addBindValue(ResultOD);
    query.addBindValue(Unit);

    query.addBindValue(Date);
    query.addBindValue(Time);

    query.exec();
    ui->Save_Btn_2->setDisabled(false);
}

void MainWindow::on_Save_Btn_3_clicked()
{
    ui->Save_Btn_3->setDisabled(true);
    QString  Date , Time , PAge , PName , PGender , Unit; //PID, , ANrmlRang , BNrmlRang , ODVal , ResultOD ,  ;
    int PID=0  ,ANrmlRang=0 , BNrmlRang=0  , date = 0 ,time=0;
    double  ODVal=0 , ResultOD =0;
    Date = char (date);
    Time = char (time);
    QString TestName = ui->TestName_Lbl_5->text();
    PID = ui->PatientInfo_LineEdit_2->text().toInt();
    ODVal = ui->label_119->text().toDouble();
    Date= ui->SysDate_Lbl->text();
    Time =ui->SysTime_Lbl->text();
    PName = ui->Patient_Name->text();
    PAge= ui->Patient_Age->text().toInt();
    PGender = text;
    Unit = ui->Unit_lineEdit->text();
    QSqlQuery query;
    query.prepare("select * from test where name ='"+TestName+"'");
    query.exec();
    while(query.next())
    {
        ANrmlRang = query.value(14).toInt();
        BNrmlRang = query.value(13).toInt();
    }
    query.prepare("insert into Reports(PID  , PName , PAge , PGender,TName , ANrmlRang , BNrmlRang , ODVal , ResultOD,Unit ,  Date ,Time ) values(?,?, ?,?,?,?,?,?,?,?,?, ?)");
    query.addBindValue(PID);
    query.addBindValue(PName);
    query.addBindValue(PAge);
    query.addBindValue(PGender);
    query.addBindValue(TestName);
    query.addBindValue(ANrmlRang);
    query.addBindValue(BNrmlRang);
    query.addBindValue(ODVal);
    query.addBindValue(ResultOD);
    query.addBindValue(Unit);

    query.addBindValue(Date);
    query.addBindValue(Time);

    ui->Save_Btn_3->setDisabled(false);
}

void MainWindow::on_Save_Btn_4_clicked()
{

    ui->Save_Btn_4->setDisabled(true);
    QString  Date , Time , PAge , PName , PGender , Unit; //PID, , ANrmlRang , BNrmlRang , ODVal , ResultOD ,  ;
    int PID=0  ,ANrmlRang=0 , BNrmlRang=0  , date = 0 ,time=0;
    double  ODVal=0 , ResultOD =0;
    Date = char (date);
    Time = char (time);
    QString TestName = ui->TestName_Lbl_6->text();
    PID = ui->PatientInfo_LineEdit_3->text().toInt();
    ODVal = ui->label_132->text().toDouble();
    Date= ui->SysDate_Lbl->text();
    Time =ui->SysTime_Lbl->text();
    PName = ui->Patient_Name->text();
    PAge= ui->Patient_Age->text().toInt();
    PGender = text;
    Unit = ui->Unit_lineEdit->text();
    QSqlQuery query;
    query.prepare("select * from test where name ='"+TestName+"'");
    query.exec();
    while(query.next())
    {
        ANrmlRang = query.value(14).toInt();
        BNrmlRang = query.value(13).toInt();
    }
    query.prepare("insert into Reports(PID  , PName , PAge , PGender,TName , ANrmlRang , BNrmlRang , ODVal , ResultOD,Unit ,  Date ,Time ) values(?,?, ?,?,?,?,?,?,?,?,?, ?)");
    query.addBindValue(PID);
    query.addBindValue(PName);
    query.addBindValue(PAge);
    query.addBindValue(PGender);
    query.addBindValue(TestName);
    query.addBindValue(ANrmlRang);
    query.addBindValue(BNrmlRang);
    query.addBindValue(ODVal);
    query.addBindValue(ResultOD);
    query.addBindValue(Unit);

    query.addBindValue(Date);
    query.addBindValue(Time);
    query.addBindValue(PID);
    query.exec();
    ui->Save_Btn_4->setDisabled(false);
}

void MainWindow::on_toolButton_3_clicked()
{
    QSqlQuery query;
    QString mulfact;
    double fact = 0.0;
    mulfact = char (fact);
    mulfact = ui->lineEdit_147->text();
    query.prepare("update tests set mulfact='"+mulfact+"' where sno=1");
    if(query.exec())
    {
        qDebug()<<"Update Done";
    }
    else
    {
        qDebug()<<"Error";
    }
}
void MainWindow::on_pushButton_131_clicked()
{
    ui->stackedWidget->setCurrentIndex(18);
    QString mulfact;
    QSqlQuery query;
    query.prepare("select * from tests where sno =1");
    query.exec();
    while(query.next())
    {
        mulfact=query.value(12).toString();
    }
    qDebug()<<mulfact;

    ui->lineEdit_147->setText(mulfact);
}

int MainWindow::reading(int wave,int intensity)
{
    int blank[300];
    filtwave[0]=0;
    pwmWrite (LED, intensity);
    digitalWrite (LED_BASE + wave,HIGH) ;
    QThread::msleep(200);
    for(int i=0;i<300;i++)
    {
        blank[i]=readadc(6-wave);
        QThread::msleep(1);
        if(i>=250)
            filtwave[0]+=blank[i];
    }
    QThread::msleep(10);
    digitalWrite (LED_BASE + wave,LOW) ;
    filtwave[0]=filtwave[0]/50;
    pwmWrite (LED, 0);
    return filtwave[0];
}

void MainWindow::reading1()
{
    int blank[300];
    filtwave[0]=0;
    pwmWrite (LED, read_intensity);
    digitalWrite (LED_BASE + read_wave,HIGH) ;
    QThread::msleep(200);
    for(int i=0;i<300;i++)
    {
        blank[i]=readadc(6-read_wave);
        QThread::msleep(1);
        if(i>=250)
            filtwave[0]+=blank[i];
    }
    QThread::msleep(10);
    digitalWrite (LED_BASE + read_wave,LOW) ;
    filtwave[0]=filtwave[0]/50;
    pwmWrite (LED, 0);
    read_status=1;
    current_read_point=current_read_point+10;
    update_func();
    //qDebug()<<QTime::currentTime()<<" "<<filtwave[0]<<" "<<read_wave<<" "<<read_intensity;
    ui->label_12->setText(QDateTime::fromTime_t(current_read_point).toUTC().toString("hh:mm:ss"));
    //return filtwave[0];
}


void MainWindow::Wave_LED()
{

    QObject *senderObj = sender(); // This will give Sender object
    QString senderObjName = senderObj->objectName();
    QString TestName=senderObjName;
    unsigned int Wave=0;
    QSqlQuery query;
    query.prepare("select * from test where name ='"+TestName+"'");
    query.exec();
    while(query.next())
    {
        Wave = query.value(2).toUInt();
    }
    if(Wave==340)
    {
        digitalWrite (LED_BASE + 8,HIGH) ;
        // qDebug()<<340;
    }
    else if (Wave==405)
    {
        digitalWrite (LED_BASE + 9,HIGH) ;
        //qDebug()<<405;
    }
    else if (Wave==507)
    {
        digitalWrite (LED_BASE + 10,HIGH) ;
        //qDebug()<<507;
    }
    else if (Wave==545)
    {
        digitalWrite (LED_BASE + 11,HIGH) ;
        qDebug()<<545;
    }
    else if (Wave==572)
    {
        digitalWrite (LED_BASE + 12,HIGH) ;
        //qDebug()<<572;
    }
    else if (Wave==628)
    {
        digitalWrite (LED_BASE + 13,HIGH) ;
        //qDebug()<<628;
    }
    else if (Wave==700)
    {
        digitalWrite (LED_BASE + 14,HIGH) ;
        //qDebug()<<700;
    }


}
void MainWindow::update_func()
{
    if(option==1)                           //Two-Point Calibrate
    {
        double transmission=0;
        //double layer=0;
        absorbance=0;
        //layer = absorbance;
        ui->label_32->setNum(current_read_point);
        transmission=blank_val/filtwave[0];
        absorbance=log10(transmission);
        addPoint(current_read_point,absorbance);
        qDebug()<<current_read_point;
        if(current_read_point==dly)
        {
            ui->label_120->setText(QString::number(absorbance, 'f', 3));
            ui->label_120->setVisible(true);
        }

        else if(current_read_point==total_read_point)
        {
            ui->label_122->setText(QString::number(absorbance, 'f', 3));
            ui->label_122->setVisible(true);
        }
        qDebug()<<current_read_point;
        qDebug()<<total_read_point;
        if(total_read_point==current_read_point)
        {
            readtimer->stop();
            twocalcalc();
            ui->RunCal_Btn_2->setEnabled(true);
        }
    }
    else if(option==2)                          //Two-Point Sample
    {
        double transmission=0 ;
        absorbance=0;
        ui->label_32->setNum(current_read_point);
        transmission=blank_val/filtwave[0];
        absorbance=log10(transmission);
        addPoint(current_read_point,absorbance);
        if(current_read_point==dly)
            ui->label_120->setText(QString::number(absorbance, 'f', 3));
        else if(current_read_point==total_read_point)
            ui->label_122->setText(QString::number(absorbance, 'f', 3));
        if(total_read_point==current_read_point)
        {
            readtimer->stop();
            twosampcalc();
            ui->RunSample_Btn_2->setEnabled(true);
        }
    }
    else if(option==3)                              //Kinetic Calibrate
    {
        double transmission=0;
        absorbance=0;
        ui->label_32->setNum(current_read_point);
        transmission=blank_val/filtwave[0];
        absorbance=log10(transmission);
        addPoint(current_read_point,absorbance);
        if(val==2)
        {
            ui->label_97->setVisible(true);
            ui->label_98->setVisible(true);
            ui->label_127->setVisible(true);
            ui->label_128->setVisible(true);
        }
        else if (val==3) {
            ui->label_97->setVisible(true);
            ui->label_98->setVisible(true);
            ui->label_127->setVisible(true);
            ui->label_128->setVisible(true);
            ui->label_99->setVisible(true);
            ui->label_132->setVisible(true);

        }

        if(current_read_point==dly)
        {
            if(val==2)
            {
                ui->label_194->setText(QString::number((absorbance), 'f', 3));
                ui->label_194->setVisible(true);
                ui->label_106->setVisible(false);
            }
            else if (val==3)
            {
                ui->label_106->setText(QString::number((absorbance), 'f', 3));
                ui->label_106->setVisible(true);
                ui->label_194->setVisible(false);
            }

        }
        else if(current_read_point==dly+lagg)
        {
            if(val==2)
            {
                ui->label_195->setText(QString::number((absorbance), 'f', 3));
                ui->label_195->setVisible(true);
                ui->label_121->setVisible(false);
                Kineticcalfirstpoint1();
            }
            else if (val==3)
            {
                ui->label_121->setText(QString::number((absorbance), 'f', 3));
                ui->label_121->setVisible(true);
                ui->label_195->setVisible(false);
                Kineticcalfirstpoint2();
            }
        }
        else if(current_read_point==dly+(lagg*2))
        {
            if(val==2)
            {
                ui->label_198->setText(QString::number((absorbance), 'f', 3));
                ui->label_198->setVisible(true);
                ui->label_123->setVisible(false);
                Kineticcalsecondpoint1();
            }
            else if (val==3)
            {
                ui->label_123->setText(QString::number((absorbance), 'f', 3));
                ui->label_123->setVisible(true);
                ui->label_198->setVisible(false);
                Kineticcalsecondpoint2();
            }
        }
        else if(current_read_point==dly+(lagg*3))
        {
            ui->label_125->setText(QString::number((absorbance), 'f', 3));
            ui->label_125->setVisible(true);
            Kineticcalthirdpoint1();
        }
        if(total_read_point==current_read_point)
        {
            readtimer->stop();

            ui->RunCal_Btn_3->setEnabled(true);
        }
    }
    else if(option==4)                              //Kinetic Sample
    {
        ui->label_203->setVisible(true);
        ui->label_203->setText("ΔA");
        double transmission=0;
        absorbance=0;
        ui->label_32->setNum(current_read_point);
        transmission=blank_val/filtwave[0];
        absorbance=log10(transmission);
        addPoint(current_read_point,absorbance);
        if(val==2)
        {
            ui->label_97->setVisible(true);
            ui->label_98->setVisible(true);
            ui->label_127->setVisible(true);
            ui->label_128->setVisible(true);
        }
        else if (val==3) {
            ui->label_97->setVisible(true);
            ui->label_98->setVisible(true);
            ui->label_127->setVisible(true);
            ui->label_128->setVisible(true);
            ui->label_99->setVisible(true);
            ui->label_132->setVisible(true);

        }
        if(current_read_point==dly)
        {
            if(val==2)
            {
                ui->label_194->setText(QString::number((absorbance), 'f', 3));
                ui->label_194->setVisible(true);
                ui->label_106->setVisible(false);
            }
            else if (val==3)
            {
                ui->label_106->setText(QString::number((absorbance), 'f', 3));
                ui->label_106->setVisible(true);
                ui->label_194->setVisible(false);
            }
        }
        else if(current_read_point==dly+lagg)
        {
            if(val==2)
            {
                ui->label_195->setText(QString::number((absorbance), 'f', 3));
                ui->label_195->setVisible(true);
                ui->label_121->setVisible(false);
                Kineticsampfirstpoint1();
            }
            else if (val==3)
            {
                ui->label_121->setText(QString::number((absorbance), 'f', 3));
                ui->label_121->setVisible(true);
                ui->label_195->setVisible(false);
                Kineticsampfirstpoint2();
            }
        }
        else if(current_read_point==dly+(lagg*2))
        {
            if(val==2)
            {
                ui->label_198->setText(QString::number((absorbance), 'f', 3));
                ui->label_198->setVisible(true);
                ui->label_123->setVisible(false);
                Kineticsampsecondpoint1();
            }
            else if (val==3)
            {
                ui->label_123->setText(QString::number((absorbance), 'f', 3));
                ui->label_123->setVisible(true);
                ui->label_198->setVisible(false);
                Kineticsampsecondpoint2();
            }
        }
        else if(current_read_point==dly+(lagg*3))
        {
            ui->label_125->setText(QString::number((absorbance), 'f', 3));
            ui->label_125->setVisible(true);
            Kineticsampthirdpoint1();
        }
        if(total_read_point==current_read_point)
        {
            readtimer->stop();

            ui->RunSample_Btn_3->setEnabled(true);
        }

    }
}

void MainWindow::twocalcalc()
{
    if(option==1)              //Two-Point Calibrate calc
    {
        double od1 , od2, dod , dod1 ,dod5,fact;
        od1=ui->label_120->text().toDouble(); //1st Read
        od2=ui->label_122->text().toDouble(); //2nd Read
        dod=od2-od1;
        dod1=abs(dod); //Cal value 1
        ui->label_119->setText(QString::number(dod1, 'f', 3));
        ui->label_34->setText(QString::number(dod1, 'f', 3));   //calibrate OD
        dod5=ui->label_34->text().toDouble();
        fact = concen / dod5; // Factor OD
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
    }
}


void MainWindow::twosampcalc()
{
    if(option==2)          //Two-Point Sample Calc
    {
        if(fct == 0.0)
        {
            double od1,od2,od4,dod,dod1, dod4 ,dod5,dod6;
            od1=ui->label_120->text().toDouble();
            od2=ui->label_122->text().toDouble();
            dod=od2-od1; // Samp OD1
            dod1=abs(dod);
            ui->label_119->setText(QString::number(dod1, 'f', 3));
            dod6=ui->label_119->text().toDouble();
            od4=ui->label_196->text().toDouble(); // Factor Value
            dod4= dod6 * od4 ; //Sample OD * Factor Value
            dod5 = abs(dod4); // Result
            ui->label_33->setText(QString::number(dod5, 'f', 2));

        }
        else
        {
            double od1,od2,dod,dod1, dod4 ,dod5,dod6;
            od1=ui->label_120->text().toDouble();
            od2=ui->label_122->text().toDouble();
            dod=od2-od1; // Samp OD 1
            dod1=abs(dod);
            ui->label_119->setText(QString::number(dod1, 'f', 3));
            dod6=ui->label_119->text().toDouble();
            dod4=  dod6 * fct; //Sample OD * Fact Value
            dod5 = abs(dod4);//Result
            if(dod5<100)
            {
                ui->label_33->setText(QString::number(dod5, 'f' , 2));
            }
            else if(dod5>100)
            {
                ui->label_33->setText(QString::number(dod5, 'f' , 0));
            }
        }

        ui->RunCal_Btn_2->setEnabled(true);
        ui->RunBlank_Btn_2->setEnabled(true);
        ui->Save_Btn_6->setEnabled(true);
        ui->Print_Btn_2->setEnabled(true);
    }
}

void MainWindow::Kineticcalfirstpoint1()
{
    if(option==3)           //Kinetic Calibrate -Calc
    {
        double od5,od6,  dod1 , dod2 ;

        od5=ui->label_194->text().toDouble();    //A2
        od6=ui->label_195->text().toDouble();    //A3
        if(val==2)
        {
            ui->label_99->setVisible(false);
            ui->label_132->setVisible(false);
            ui->label_106->setVisible(false);
            ui->label_121->setVisible(false);
            ui->label_123->setVisible(false);
            ui->label_125->setVisible(false);
            ui->label_194->setVisible(true);
            ui->label_195->setVisible(true);
            ui->label_198->setVisible(true);
            ui->label_97->setVisible(true);
            ui->label_98->setVisible(true);
            ui->label_127->setVisible(true);
            ui->label_128->setVisible(true);
            dod1=od6-od5;
            dod2=abs(dod1);
            ui->label_127->setText(QString::number(dod2, 'f', 3));
        }

    }
}
void MainWindow::Kineticcalfirstpoint2()
{
    if(option==3)           //Kinetic Calibrate -Calc
    {
        double od1 , od2 ,dod5 , dod6 ;
        od1=ui->label_106->text().toDouble();    //A1
        od2=ui->label_121->text().toDouble();    //A2

        //dod2=ui->label_127->text().toDouble();
        if(val==3)
        {
            ui->label_99->setVisible(true);
            ui->label_132->setVisible(true);
            ui->label_97->setVisible(true);
            ui->label_98->setVisible(true);
            ui->label_127->setVisible(true);
            ui->label_128->setVisible(true);

            ui->label_125->setVisible(true);
            ui->label_106->setVisible(true);
            ui->label_121->setVisible(true);
            ui->label_123->setVisible(true);
            ui->label_194->setVisible(false);
            ui->label_195->setVisible(false);
            ui->label_198->setVisible(false);
            dod5=od2-od1;
            dod6=abs(dod5);
            ui->label_127->setText(QString::number(dod6, 'f', 3));
        }
    }
}


void MainWindow::Kineticcalsecondpoint1()
{
    if(option==3)           //Kinetic Calibrate -Calc
    {
        double od6,od7, dod = 0.0 ,dod2 , dod3 , dod4 ,dod11 , dod12 , fact;

        od6=ui->label_195->text().toDouble();    //A3
        od7=ui->label_198->text().toDouble();    //A4
        dod2=ui->label_127->text().toDouble();
        if(val==2)
        {
            ui->label_99->setVisible(false);
            ui->label_132->setVisible(false);
            ui->label_106->setVisible(false);
            ui->label_121->setVisible(false);
            ui->label_123->setVisible(false);
            ui->label_125->setVisible(false);
            ui->label_194->setVisible(true);
            ui->label_195->setVisible(true);
            ui->label_198->setVisible(true);
            ui->label_97->setVisible(true);
            ui->label_98->setVisible(true);
            ui->label_127->setVisible(true);
            ui->label_128->setVisible(true);
            dod3=od7-od6;
            dod4=abs(dod3);
            ui->label_128->setText(QString::number(dod4, 'f', 3));
            dod = (dod2+dod4)/2;
        }
        dod11=abs(dod); // Cal OD Value
        ui->label_34->setText(QString::number(dod11, 'f', 3));
        dod12=ui->label_34->text().toDouble();
        fact = concen / dod12;//need to check

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
    }

}
void MainWindow::Kineticcalsecondpoint2()
{
    if(option==3)           //Kinetic Calibrate -Calc
    {
        double  od2 , od3 ,   dod7 , dod8 ;
        od2=ui->label_121->text().toDouble();    //A2
        od3=ui->label_123->text().toDouble();    //A3


        if(val==3)
        {
            ui->label_99->setVisible(true);
            ui->label_132->setVisible(true);
            ui->label_97->setVisible(true);
            ui->label_98->setVisible(true);
            ui->label_127->setVisible(true);
            ui->label_128->setVisible(true);

            ui->label_125->setVisible(true);
            ui->label_106->setVisible(true);
            ui->label_121->setVisible(true);
            ui->label_123->setVisible(true);
            ui->label_194->setVisible(false);
            ui->label_195->setVisible(false);
            ui->label_198->setVisible(false);
            dod7=od3-od2;
            dod8=abs(dod7);
            ui->label_128->setText(QString::number(dod8, 'f', 3));

        }
    }
}
void MainWindow::Kineticcalthirdpoint1()
{
    if(option==3)           //Kinetic Calibrate -Calc
    {
        double od3, od4 , dod =0.0, dod6 ,  dod8 ,dod9,dod10 ,dod11,dod12,fact;

        od3=ui->label_123->text().toDouble();    //A3
        od4=ui->label_125->text().toDouble();    //A4
        dod6=ui->label_127->text().toDouble();
        dod8=ui->label_128->text().toDouble();

        if(val==3)
        {
            ui->label_99->setVisible(true);
            ui->label_132->setVisible(true);
            ui->label_97->setVisible(true);
            ui->label_98->setVisible(true);
            ui->label_127->setVisible(true);
            ui->label_128->setVisible(true);

            ui->label_125->setVisible(true);
            ui->label_106->setVisible(true);
            ui->label_121->setVisible(true);
            ui->label_123->setVisible(true);
            ui->label_194->setVisible(false);
            ui->label_195->setVisible(false);
            ui->label_198->setVisible(false);
            dod9=od4-od3;
            dod10=abs(dod9);
            ui->label_132->setText(QString::number(dod10, 'f', 3));
            dod = (dod6+dod8+dod10)/3; //Avg
        }
        dod11=abs(dod); // Cal OD Value
        ui->label_34->setText(QString::number(dod11, 'f', 3));
        dod12=ui->label_34->text().toDouble();
        fact = concen / dod12;//need to check

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
    }
}

void MainWindow::Kineticsampfirstpoint1()
{
    if(option==4)                  //Kinetic Sample Calc
    {
        ui->label_204->setText("");
        double od5,od6,  dod1=0.0, dod2 ;
        double dod16=0.0, dod17=0.0;

        od5=ui->label_194->text().toDouble();    //A2
        od6=ui->label_195->text().toDouble();    //A3

        if(fct == 0.0)
        {
            if(val==2)
            {
                ui-> label_203->setText("ΔA/min");
                ui->label_106->setVisible(false);
                ui->label_121->setVisible(false);
                ui->label_123->setVisible(false);
                ui->label_125->setVisible(false);
                ui->label_194->setVisible(true);
                ui->label_195->setVisible(true);
                ui->label_198->setVisible(true);
                dod1=od6-od5;
                dod2=abs(dod1);
                ui->label_127->setText(QString::number(dod2, 'f', 3));

            }
        }
        else
        {
            if(val==2)
            {
                ui->label_99->setVisible(false);
                ui->label_132->setVisible(false);
                ui->label_106->setVisible(false);
                ui->label_121->setVisible(false);
                ui->label_123->setVisible(false);
                ui->label_125->setVisible(false);
                ui->label_194->setVisible(true);
                ui->label_195->setVisible(true);
                ui->label_198->setVisible(true);
                ui-> label_203->setText("ΔA/min");
                dod16=od6-od5;
                dod17=abs(dod16);
                ui->label_127->setText(QString::number(dod17, 'f', 3));

            }
        }
    }
}
void MainWindow::Kineticsampfirstpoint2()
{
    if(option==4)                  //Kinetic Sample Calc
    {
        ui->label_204->setText("");
        double od1 , od2 , dod5 , dod6 ;
        double dod20=0.0 , dod21=0.0;
        od1=ui->label_106->text().toDouble();    //A1
        od2=ui->label_121->text().toDouble();    //A2

        if(fct == 0.0)
        {
            if(val==3)
            {
                ui->label_99->setVisible(true);
                ui->label_132->setVisible(true);
                ui->label_97->setVisible(true);
                ui->label_98->setVisible(true);
                ui->label_127->setVisible(true);
                ui->label_128->setVisible(true);

                ui->label_106->setVisible(true);
                ui->label_121->setVisible(true);
                ui->label_123->setVisible(true);
                ui->label_125->setVisible(true);
                ui->label_194->setVisible(false);
                ui->label_195->setVisible(false);
                ui->label_198->setVisible(false);
                ui-> label_203->setText("ΔA/min");
                dod5=od2-od1;
                dod6=abs(dod5);
                ui->label_127->setText(QString::number(dod6, 'f', 3));
            }
        }
        else
        {
            if(val==3)
            {
                ui->label_106->setVisible(true);
                ui->label_121->setVisible(true);
                ui->label_123->setVisible(true);
                ui->label_125->setVisible(true);
                ui->label_194->setVisible(false);
                ui->label_195->setVisible(false);
                ui->label_198->setVisible(false);
                ui-> label_203->setText("ΔA/min");
                dod20=od2-od1;
                dod21=abs(dod20);
                ui->label_127->setText(QString::number(dod21, 'f', 3));
            }
        }
    }
}

void MainWindow::Kineticsampsecondpoint1()
{
    if(option==4)                  //Kinetic Sample Calc
    {
        ui->label_204->setText("");
        double od6,od7, dod =0.0,  dod2 , dod3 , dod4 ,dod11,dod12,dod14,dod15;
        double dod18=0.0 , dod19=0.0 ;

        od6=ui->label_195->text().toDouble();    //A3
        od7=ui->label_198->text().toDouble();    //A4
        dod2=ui->label_127->text().toDouble();
        if(fct == 0.0)
        {
            if(val==2)
            {
                ui-> label_203->setText("ΔA/min");
                ui->label_106->setVisible(false);
                ui->label_121->setVisible(false);
                ui->label_123->setVisible(false);
                ui->label_125->setVisible(false);
                ui->label_194->setVisible(true);
                ui->label_195->setVisible(true);
                ui->label_198->setVisible(true);
                ui->label_97->setVisible(true);
                ui->label_98->setVisible(true);
                ui->label_127->setVisible(true);
                ui->label_128->setVisible(true);
                dod3=od7-od6;
                dod4=abs(dod3);
                ui->label_128->setText(QString::number(dod4, 'f', 3));
                dod= (dod2+dod4)/2;
            }
            dod11=abs(dod);
            ui->label_204->setText(QString::number(dod11, 'f', 3));
            dod12=ui->label_204->text().toDouble();
            //factor = ui->label_196->text().toDouble(); // Factor Value
            dod14= dod12*fct; // Sample OD * Factor Value
            dod15 = abs(dod14);
            if(dod15<100)
            {
                ui->label_33->setText(QString::number(dod15, 'f' , 2));
            }
            else if(dod15>100)
            {
                ui->label_33->setText(QString::number(dod15, 'f' , 0));
            }

        }
        else
        {
            if(val==2)
            {
                ui->label_99->setVisible(false);
                ui->label_132->setVisible(false);
                ui->label_106->setVisible(false);
                ui->label_121->setVisible(false);
                ui->label_123->setVisible(false);
                ui->label_125->setVisible(false);
                ui->label_194->setVisible(true);
                ui->label_195->setVisible(true);
                ui->label_198->setVisible(true);
                ui-> label_203->setText("ΔA/min");
                dod18=od7-od6;
                dod19=abs(dod18);
                ui->label_128->setText(QString::number(dod19, 'f', 3));
                dod= (dod2+dod19)/2;
            }
            dod11=abs(dod);
            ui->label_204->setText(QString::number(dod11, 'f', 3));
            dod12=ui->label_204->text().toDouble();
            //factor = ui->label_196->text().toDouble(); // Factor Value
            dod14= dod12*fct; // Sample OD * Factor Value
            dod15 = abs(dod14);
            if(dod15<100)
            {
                ui->label_33->setText(QString::number(dod15, 'f' , 2));
            }
            else if(dod15>100)
            {
                ui->label_33->setText(QString::number(dod15, 'f' , 0));
            }

        }
    }
}
void MainWindow::Kineticsampsecondpoint2()
{

    if(option==4)                  //Kinetic Sample Calc
    {
        ui->label_204->setText("");
        double  od2 , od3 ,  dod7 , dod8 ;
        double  dod22=0.0 , dod23=0.0 ;

        od2=ui->label_121->text().toDouble();    //A2
        od3=ui->label_123->text().toDouble();    //A3

        if(fct == 0.0)
        {

            if(val==3)
            {
                ui->label_99->setVisible(true);
                ui->label_132->setVisible(true);
                ui->label_97->setVisible(true);
                ui->label_98->setVisible(true);
                ui->label_127->setVisible(true);
                ui->label_128->setVisible(true);

                ui->label_106->setVisible(true);
                ui->label_121->setVisible(true);
                ui->label_123->setVisible(true);
                ui->label_125->setVisible(true);
                ui->label_194->setVisible(false);
                ui->label_195->setVisible(false);
                ui->label_198->setVisible(false);
                ui-> label_203->setText("ΔA/min");
                dod7=od3-od2;
                dod8=abs(dod7);
                ui->label_128->setText(QString::number(dod8, 'f', 3));
            }

        }
        else
        {
            if(val==3)
            {
                ui->label_99->setVisible(true);
                ui->label_132->setVisible(true);
                ui->label_98->setVisible(true);
                ui->label_128->setVisible(true);
                ui->label_97->setVisible(true);
                ui->label_127->setVisible(true);
                ui->label_106->setVisible(true);
                ui->label_121->setVisible(true);
                ui->label_123->setVisible(true);
                ui->label_125->setVisible(true);
                ui->label_194->setVisible(false);
                ui->label_195->setVisible(false);
                ui->label_198->setVisible(false);
                ui-> label_203->setText("ΔA/min");
                dod22=od3-od2;
                dod23=abs(dod22);
                ui->label_128->setText(QString::number(dod23, 'f', 3));
            }

        }
    }
}

void MainWindow::Kineticsampthirdpoint1()
{
    if(option==4)                  //Kinetic Sample Calc
    {
        ui->label_204->setText("");
        double od3 , od4 , dod =0.0,  dod6 , dod8 ,dod9,dod10 ,dod11,dod12,dod14,dod15;
        double dod24=0.0,dod25=0.0,dod26=0.0, dod27 ,dod29,dod30;

        od3=ui->label_123->text().toDouble();    //A3
        od4=ui->label_125->text().toDouble();    //A4
        dod6=ui->label_127->text().toDouble();
        dod8=ui->label_128->text().toDouble();
        if(fct == 0.0)
        {
            if(val==3)
            {
                ui->label_99->setVisible(true);
                ui->label_132->setVisible(true);
                ui->label_97->setVisible(true);
                ui->label_98->setVisible(true);
                ui->label_127->setVisible(true);
                ui->label_128->setVisible(true);

                ui->label_106->setVisible(true);
                ui->label_121->setVisible(true);
                ui->label_123->setVisible(true);
                ui->label_125->setVisible(true);
                ui->label_194->setVisible(false);
                ui->label_195->setVisible(false);
                ui->label_198->setVisible(false);
                ui-> label_203->setText("ΔA/min");
                dod9=od4-od3;
                dod10=abs(dod9);
                ui->label_132->setText(QString::number(dod10, 'f', 3));
                dod = (dod6+dod8+dod10)/3; //Avg
            }
            dod11=abs(dod);
            ui->label_204->setText(QString::number(dod11, 'f', 3));
            dod12=ui->label_204->text().toDouble();
            dod14= dod12*fct; // Sample OD * Factor Value
            dod15 = abs(dod14);
            if(dod15<100)
            {
                ui->label_33->setText(QString::number(dod15, 'f' , 2));
            }
            else if(dod15>100)
            {
                ui->label_33->setText(QString::number(dod15, 'f' , 0));
            }
        }
        else
        {
            if(val==3)
            {
                ui->label_99->setVisible(true);
                ui->label_132->setVisible(true);
                ui->label_98->setVisible(true);
                ui->label_128->setVisible(true);
                ui->label_97->setVisible(true);
                ui->label_127->setVisible(true);
                ui->label_106->setVisible(true);
                ui->label_121->setVisible(true);
                ui->label_123->setVisible(true);
                ui->label_125->setVisible(true);
                ui->label_194->setVisible(false);
                ui->label_195->setVisible(false);
                ui->label_198->setVisible(false);
                ui-> label_203->setText("ΔA/min");
                dod24=od4-od3;
                dod25=abs(dod24);
                ui->label_132->setText(QString::number(dod25, 'f', 3));
                dod = (dod6+dod8+dod25)/3;
            }
            dod26=abs(dod);
            ui->label_204->setText(QString::number(dod26, 'f', 3));
            dod27=ui->label_204->text().toDouble();
            dod29= dod27 * fct; // Sample OD * Fact
            dod30= abs(dod29);
            if(dod30<100)
            {
                ui->label_33->setText(QString::number(dod30, 'f' , 2));
            }
            else if(dod30>100)
            {
                ui->label_33->setText(QString::number(dod30, 'f' , 0));
            }

        }
    }
}

void MainWindow::on_toolButton_19_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_134_clicked()
{
    ui->stackedWidget->setCurrentIndex(21);
}

void MainWindow::on_pushButton_135_clicked()
{
    ui->lineEdit->setText("");
}



void MainWindow::on_pushButton_225_clicked()
{
    QString LabName , UserName ;
    LabName=ui->LabName->text();
    UserName=ui->UserName->text();
    if(LabName=="" && UserName=="")
    {
        ui->LabName->setStyleSheet("border: 1px solid red");
        ui->UserName->setStyleSheet("border: 1px solid red");
        ui->LabName_Btn->setVisible(false);
        ui->UserName_Btn->setVisible(false);
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "WARNING", " Please fill in all the required fields. ",
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes)
        {
            ui->LabName_Btn->setVisible(true);
            ui->UserName_Btn->setVisible(true);
            ui->LabName->setStyleSheet("border: none");
            ui->UserName->setStyleSheet("border: none");
            ui->stackedWidget->setCurrentIndex(23);
        }
        else
        {
            ui->LabName->setStyleSheet("border: 1px solid red");
            ui->UserName->setStyleSheet("border: 1px solid red");
            ui->LabName_Btn->setVisible(false);
            ui->UserName_Btn->setVisible(false);
            ui->stackedWidget->setCurrentIndex(23);
        }
    }
    else if(LabName=="")
    {
        ui->LabName->setStyleSheet("border:1px solid red");
        ui->LabName_Btn->setVisible(false);
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "WARNING", "Please Enter LABNAME",
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes)
        {

            ui->LabName->setStyleSheet("border: none");
            ui->LabName_Btn->setVisible(true);
            ui->stackedWidget->setCurrentIndex(23);
        }
        else
        {
            ui->LabName->setStyleSheet("border: 1px solid red");
            ui->LabName_Btn->setVisible(false);
            ui->stackedWidget->setCurrentIndex(23);
        }
    }
    else if (UserName=="")
    {
        ui->UserName->setStyleSheet("border:1px solid red");
        ui->UserName_Btn->setVisible(false);
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "WARNING", "Please Enter USERNAME",
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes)
        {
            ui->UserName->setStyleSheet("border: none");
            ui->UserName_Btn->setVisible(true);
            ui->stackedWidget->setCurrentIndex(23);
        }

        else
        {
            ui->UserName->setStyleSheet("border: 1px solid red");
            ui->UserName_Btn->setVisible(false);
            ui->stackedWidget->setCurrentIndex(23);
        }
    }
    else
    {
        ui->LabName->setStyleSheet("border:none");
        ui->UserName->setStyleSheet("border:none");
        ui->LabName_Btn->setVisible(true);
        ui->UserName_Btn->setVisible(true);
        QSqlQuery qry;
        qry.prepare("insert into Userlogin(Labname,Username) values(?,?)");
        qry.addBindValue(LabName);
        qry.addBindValue(UserName);
        qry.exec();
        ui->stackedWidget->setCurrentIndex(0);
        qDebug()<<"Ok";
        ui->frame_5->setVisible(true);
    }
}



void MainWindow::on_Export_Data_clicked()
{
    QString filters("csv files (*.csv);;All files (*.*)");
    QString defaultFilter("csv files (*.csv)");

    QString fileName = QFileDialog::getSaveFileName(nullptr, "Save file", QCoreApplication::applicationDirPath(), filters, &defaultFilter);
    fileName += ".csv";
    QFile file(fileName);

    QAbstractItemModel *model =  ui->tableView->model();
    if (file.open(QFile::WriteOnly | QFile::Truncate)) {
        QTextStream data(&file);
        QStringList strList;
        for (int i = 0; i < model->columnCount(); i++) {
            if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
            else
                strList.append("");
        }
        data << strList.join(",") << "\n";
        for (int i = 0; i < model->rowCount(); i++) {
            strList.clear();
            for (int j = 0; j < model->columnCount(); j++) {
                if (model->data(model->index(i, j)).toString().length() > 0)
                    strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                else
                    strList.append("");
            }
            data << strList.join(",") + "\n";
        }
        file.close();
    }
}

void MainWindow::on_toolButton_21_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

int MainWindow::on_pushButton_228_clicked()
{
    ui->Print_Btn->setDisabled(true);
    QApplication::processEvents();
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
    p->write("Patient ID  : "  + ui->PatientInfo_LineEdit->text());
    p->write("\nPatient Name : "  + ui->Patient_Name->text());
    p->write("\nPatient Age  : "  + ui->Patient_Age->text());
    //p->write("\nPatient Gender  : "  + ui->Patient_Gender->text());
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
    return 1;

    /*  QSqlQuery query;
    ui->label_114->setText("");
    ui->label_115->setText("");
    ui->label_117->setText("");
    ui->label_118->setText("");
    ui->label_124->setText("");
    ui->label_126->setText("");
    ui->label_183->setText("");
    QString ONE , TWO ,THREE , FOUR , FIVE , SIX ,SEVEN;
    ONE =    char(one);
    TWO= char(two);
    THREE=char(three);
    FOUR=char(four);
    FIVE=char(five);
    SIX=char(six);
    SEVEN=char(seven);
    ONE = ui->label_114->text();
    TWO = ui->label_115->text();
    THREE = ui->label_117->text();
    FOUR = ui->label_118->text();
    FIVE = ui->label_124->text();
    SIX = ui->label_126->text();
    SEVEN = ui->label_183->text();
    query.prepare("update tests set blankval='"+ONE+"' where sno=1");
    if(query.exec())
        query.prepare("update tests set blankval='"+TWO+"' where sno=2");
    if(query.exec())
        query.prepare("update tests set blankval='"+THREE+"' where sno=3");
    if(query.exec())
        query.prepare("update tests set blankval='"+FOUR+"' where sno=4");
    if(query.exec())
        query.prepare("update tests set blankval='"+FIVE+"' where sno=5");
    if(query.exec())
        query.prepare("update tests set blankval='"+SIX+"' where sno=6");
    if(query.exec())
        query.prepare("update tests set blankval='"+SEVEN+"' where sno=7");
    if(query.exec())
    {
    }
    else
    {
    }*/
}

int MainWindow::on_pushButton_229_clicked()
{

    QApplication::processEvents();
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
    return 1;

    /* QMessageBox msg(this);
    msg.setWindowModality(Qt::WindowModal);
    msg.setWindowTitle(QLatin1String("Information"));
    QPixmap p("/home/pi/git/BCUIDF/img/check-mark.png");
    auto newPixmap = p.scaled(80, 80);
    msg.setIconPixmap(newPixmap);
    msg.setStyleSheet("font:16pt Arial;");
    msg.setText("Internal Quality Check - 340nm");
    msg.setStandardButtons(QMessageBox::Ok);
    msg.setFixedWidth(500);
    msg.exec();*/
}

void MainWindow::on_toolButton_22_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void MainWindow::on_toolButton_23_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}


void MainWindow::on_radioButton_clicked()
{
    ui->pushButton_10->setVisible(true);
    ui->pushButton_134->setVisible(true);
    ui->pushButton_4->setVisible(true);
    ui->pushButton_5->setVisible(true);
    ui->toolButton->setVisible(true);
    ui->pushButton_7->setVisible(false);
    ui->pushButton_11->setVisible(false);
    ui->pushButton_131->setVisible(false);

    ui->label_210->setVisible(false);
    ui->label_206->setVisible(false);
    ui->lineEdit_148->setVisible(false);
    ui->pushButton_230->setVisible(false);
    ui->pushButton_231->setVisible(false);

}

void MainWindow::on_radioButton_2_clicked()
{
    ui->label_210->setVisible(true);
    ui->label_206->setVisible(true);
    ui->lineEdit_148->setVisible(true);
    ui->pushButton_230->setVisible(true);
    ui->pushButton_231->setVisible(true);

    ui->pushButton_10->setVisible(false);
    ui->pushButton_134->setVisible(false);
    ui->pushButton_4->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->pushButton_5->setVisible(false);
    ui->pushButton_7->setVisible(false);
    ui->pushButton_11->setVisible(false);
    ui->pushButton_131->setVisible(false);
    ui->toolButton->setVisible(false);
}

void MainWindow::on_pushButton_231_clicked()
{
    QString password = ui->lineEdit_148->text();


    if(password == "Matrix@123*") {
        QMessageBox msg(this);
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("Information"));
        msg.setDetailedText("ACCESS GRANTED");
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Password is correct");
        QPixmap p("/home/pi/git/Biochemistry-Updates-main/BCUIDF/img/check-mark.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);

        msg.setStandardButtons(QMessageBox::Ok);
        if(msg.exec() == QMessageBox::Ok)
        {

            ui->pushButton_10->setVisible(false);
            ui->pushButton_134->setVisible(false);
            ui->pushButton_4->setVisible(false);
            ui->pushButton_5->setVisible(false);
            ui->toolButton->setVisible(false);
            ui->pushButton_7->setVisible(true);
            ui->pushButton_11->setVisible(true);
            ui->pushButton_131->setVisible(true);

            ui->label_210->setVisible(false);
            ui->label_206->setVisible(false);
            ui->lineEdit_148->setVisible(false);
            ui->pushButton_230->setVisible(false);
            ui->pushButton_231->setVisible(false);
        }


    }
    else
    {
        QMessageBox msg(this);
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("WARNING"));
        msg.setDetailedText("ACCESS DENIED");
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Password is incorrect");
        QPixmap p("/home/pi/git/Biochemistry-Updates-main/BCUIDF/img/cancel.png");
        auto newPixmap = p.scaled(80, 80);
        msg.setIconPixmap(newPixmap);
        msg.setStandardButtons(QMessageBox::Ok);
        if(msg.exec() == QMessageBox::Ok)
        {
            ui->label_210->setVisible(true);
            ui->label_206->setVisible(true);
            ui->lineEdit_148->setVisible(true);
            ui->pushButton_230->setVisible(true);
            ui->pushButton_231->setVisible(true);
        }
    }
}

void MainWindow::on_Filter_Btn_clicked()
{
    ui->label_213->setText(" ");
    ui->label_214->setText(" ");
    ui->lineEdit_149->setVisible(false);
    ui->pushButton_240->setVisible(false);
    ui->pushButton_311->setVisible(false);
    ui->Filter_Btn->setVisible(true);
    ui->Data_Print_Btn->setVisible(false);
    ui->Export_Data->setVisible(false);
    ui->Data_Delete_Btn->setVisible(false);
    ui->Data_Delete_All->setVisible(false);
    ui->Filt_TestName->setVisible(true);
    ui->Filt_Sample_Id->setVisible(true);
    ui->Filt_Date->setVisible(true);
    ui->Print_Individual_Data->setVisible(false);
    ui->Print_All_data->setVisible(false);
    ui->Export_Btn->setVisible(false);
    ui->Export_CSV->setVisible(false);
    ui->Export_Pendrive->setVisible(false);
    //ui->tableView_2->setModel(nullptr);

    ui->label_215->setVisible(false);
    ui->label_216->setVisible(false);
    ui->dateEdit_4->setVisible(false);
    ui->dateEdit_5->setVisible(false);
    ui->pushButton_310->setVisible(false);
    ui->label_217->setVisible(false);
    ui->comboBox_11->setVisible(false);
    ui->Print_Individual_Btn->setVisible(false);
    ui->Print_Individual_Btn_2->setVisible(false);
    ui->Data_Select_Delete->setVisible(false);


    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* query=new QSqlQuery(mydb);
    query->prepare("select PID, TName ,  ANrmlRang,BNrmlRang,ODVal, ResultOD, Date, Time from Reports");
    query->exec();
    modal->setQuery(*query);
    ui->tableView_2->setModel(modal);
    qDebug() << ( modal->rowCount());

}

void MainWindow::on_Data_Print_Btn_clicked()
{
    ui->Filter_Btn->setVisible(false);
    ui->Data_Print_Btn->setVisible(true);
    ui->Export_Data->setVisible(false);
    ui->Data_Delete_Btn->setVisible(false);
    ui->Data_Delete_All->setVisible(false);
    ui->Filt_TestName->setVisible(false);
    ui->Filt_Sample_Id->setVisible(false);
    ui->Filt_Date->setVisible(false);
    ui->Print_Individual_Data->setVisible(true);
    ui->Print_All_data->setVisible(true);
    ui->Export_Btn->setVisible(false);
    ui->Export_CSV->setVisible(false);
    ui->Export_Pendrive->setVisible(false);
}

void MainWindow::on_Export_Btn_clicked()
{
    ui->Filter_Btn->setVisible(false);
    ui->Data_Print_Btn->setVisible(false);
    ui->Export_Data->setVisible(false);
    ui->Data_Delete_Btn->setVisible(false);
    ui->Data_Delete_All->setVisible(false);
    ui->Filt_TestName->setVisible(false);
    ui->Filt_Sample_Id->setVisible(false);
    ui->Filt_Date->setVisible(false);
    ui->Print_Individual_Data->setVisible(false);
    ui->Print_All_data->setVisible(false);
    ui->Export_Btn->setVisible(true);
    ui->Export_CSV->setVisible(true);
    ui->Export_Pendrive->setVisible(true);
}

void MainWindow::on_Filt_TestName_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);
    ui->tabWidget_8->setCurrentIndex(0);
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
                connect(button, &QPushButton::clicked, this, &MainWindow::cald4);
                ui->gridLayout_18->addWidget(button,i,j);
            }
            count1++;
        }
    }
}


void MainWindow::cald4()
{
    QObject *senderObj = sender(); // This will give Sender object
    QString senderObjName = senderObj->objectName();
    ui->label_213->setText(senderObjName);
    ui->stackedWidget->setCurrentIndex(13);

    QString TestName = ui->label_213->text();

    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* query=new QSqlQuery(mydb);
    query->prepare("select PID, TName ,  ANrmlRang,BNrmlRang,ODVal, ResultOD, Date, Time from Reports where TName = '"+TestName+"'");
    query->exec();
    modal->setQuery(*query);
    ui->tableView_2->setModel(modal);
    qDebug() << ( modal->rowCount());
    ui->label_214->setText("TestName : ");
    ui->Filter_Btn->setVisible(true);
    ui->Data_Print_Btn->setVisible(true);
    ui->Export_Btn->setVisible(true);
    ui->Data_Delete_Btn->setVisible(true);
    ui->Data_Delete_All->setVisible(true);
    ui->Filt_TestName->setVisible(false);
    ui->Filt_Sample_Id->setVisible(false);
    ui->Filt_Date->setVisible(false);
    //           ui->Print_Individual_Data->setVisible(false);
    //           ui->Print_All_data->setVisible(false);
    //          ui->Export_Btn->setVisible(true);
    //            ui->Export_CSV->setVisible(false);
    //             ui->Export_Pendrive->setVisible(false);
    //             ui->lineEdit_149->setVisible(false);
    //             ui->pushButton_240->setVisible(false);
}

void MainWindow::on_Filt_Sample_Id_clicked()
{
    ui->lineEdit_149->setVisible(true);
    ui->pushButton_240->setVisible(true);
    ui->pushButton_311->setVisible(true);
    ui->label_214->setVisible(true);
    ui->label_214->setText("Sample ID : ");
}

int MainWindow::on_EndPoint_Print_Btn_clicked()
{

    QApplication::processEvents();
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
    p->write("Patient ID    : "  + ui->PatientInfo_LineEdit->text());
    p->write("\nPatient Name  : "  + ui->Patient_Name->text());
    p->write("\nPatient Age   : "  + ui->Patient_Age->text());
    p->write("\nPatient Gender: "  + text);
    p->write("\nTest Name     : "  + ui->TestName_Lbl->text());
    p->write("\nResult        : "  + ui->label_33->text() +  " "   +    ui->Unit_lineEdit->text());
    p->write("\nDate          : "  + ui->SysDate_Lbl->text());
    p->write("\nTime          : "  + ui->SysTime_Lbl->text());
    p->write("\nUser Name     : "  + ui->UserName->text());
    p->feed();
    p->feed();
    p->feed();
    p->feed();
    p->close();
    timer->start(1000);
    timer1->start(1000);
    ui->Print_Btn->setDisabled(false);
    return 1;
}

int MainWindow::on_End_Skip_Btn_clicked()
{
    QApplication::processEvents();
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
    return 1;
}

int MainWindow::on_Two_Skip_Btn_clicked()
{

    QApplication::processEvents();
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
    p->write(" Patient ID  : "  + ui->PatientInfo_LineEdit_2->text());
    p->write("\n Test Name   : "  + ui->TestName_Lbl_5->text());
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
    ui->Print_Btn_2->setDisabled(false);
    return 1;
}

int MainWindow::on_Kinetic_Skip_Btn_clicked()
{
    QApplication::processEvents();
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
    ui->stackedWidget->setCurrentIndex(2);
    return 1;
}

int MainWindow::on_TwoPoint_Print_Btn_clicked()
{
    QApplication::processEvents();
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
    p->write(" Patient ID  : "  + ui->PatientInfo_LineEdit_2->text());
    p->write("\nPatient Name  : "  + ui->Patient_Name->text());
    p->write("\nPatient Age   : "  + ui->Patient_Age->text());
    p->write("\nPatient Gender: "  + text);
    p->write("\nTest Name     : "  + ui->TestName_Lbl_5->text());
    p->write("\nResult        : "  + ui->label_33->text() +  " "   +    ui->Unit_lineEdit->text());
    p->write("\nDate          : "  + ui->SysDate_Lbl->text());
    p->write("\nTime          : "  + ui->SysTime_Lbl->text());
    p->write("\nUser Name     : "  + ui->UserName->text());
    p->feed();
    p->feed();
    p->feed();
    p->feed();
    p->close();
    timer->start(1000);
    timer1->start(1000);
    ui->Print_Btn_2->setDisabled(false);
    return 1;
}

int MainWindow::on_Kinetic_Print_Btn_clicked()
{
    ui->Kinetic_Skip_Btn->setDisabled(true);
    QApplication::processEvents();
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
    p->write(" Patient ID  : "  + ui->PatientInfo_LineEdit_3->text());
    p->write("\nPatient Name  : "  + ui->Patient_Name->text());
    p->write("\nPatient Age   : "  + ui->Patient_Age->text());
    p->write("\nPatient Gender: "  + text);
    p->write("\nTest Name     : "  + ui->TestName_Lbl_6->text());
    p->write("\nResult        : "  + ui->label_33->text() +  " "   +    ui->Unit_lineEdit->text());
    p->write("\nDate          : "  + ui->SysDate_Lbl->text());
    p->write("\nTime          : "  + ui->SysTime_Lbl->text());
    p->write("\nUser Name     : "  + ui->UserName->text());
    p->feed();
    p->feed();
    p->feed();
    p->feed();
    p->close();
    timer->start(1000);
    timer1->start(1000);
    ui->Print_Btn_3->setDisabled(false);
    ui->stackedWidget->setCurrentIndex(2);
    return 1;

}

void MainWindow::on_Filt_Date_clicked()
{
    ui->label_217->setVisible(true);
    ui->label_217->setText("Date : ");
    ui->label_215->setVisible(true);
    ui->label_216->setVisible(true);
    ui->dateEdit_4->setVisible(true);
    ui->dateEdit_5->setVisible(true);
    ui->pushButton_310->setVisible(true);

    ui->label_214->setVisible(false);
    ui->Filter_Btn->setVisible(true);
    ui->Data_Print_Btn->setVisible(true);
    ui->Export_Btn->setVisible(true);
    ui->Data_Delete_Btn->setVisible(true);
    ui->Data_Delete_All->setVisible(false);
    ui->Filt_TestName->setVisible(false);
    ui->Filt_Sample_Id->setVisible(false);
    ui->Filt_Date->setVisible(false);
    ui->Print_Individual_Data->setVisible(false);
    ui->Print_All_data->setVisible(false);
    // ui->Export_Btn->setVisible(false);
    ui->Export_CSV->setVisible(false);
    ui->Export_Pendrive->setVisible(false);


}

void MainWindow::on_pushButton_310_clicked()
{

    QString FromcalenderDate ,TocalenderDate ;
    //name=ui->label_9->text();
    FromcalenderDate=ui->dateEdit_4->date().toString("dd / MM / yyyy");
    qDebug() << FromcalenderDate;
    TocalenderDate=ui->dateEdit_5->date().toString("dd / MM / yyyy");
    qDebug() << TocalenderDate;
    QString date ;
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* query=new QSqlQuery(mydb);
    query->prepare("SELECT PID, TName ,  ANrmlRang,BNrmlRang,ODVal, ResultOD, Date, Time FROM Reports WHERE Date  BETWEEN '"+FromcalenderDate+"' AND '"+TocalenderDate+"'");
    query->exec();
    modal->setQuery(*query);
    ui->tableView_2->setModel(modal);
    qDebug() << ( modal->rowCount());

    ui->label_214->setVisible(true);
    ui->Filter_Btn->setVisible(true);
    ui->Data_Print_Btn->setVisible(true);
    ui->Export_Btn->setVisible(true);
    ui->Data_Delete_Btn->setVisible(true);
    ui->Data_Delete_All->setVisible(false);
    ui->Filt_TestName->setVisible(false);
    ui->Filt_Sample_Id->setVisible(false);
    ui->Filt_Date->setVisible(false);
    ui->Print_Individual_Data->setVisible(false);
    ui->Print_All_data->setVisible(false);
    // ui->Export_Btn->setVisible(false);
    ui->Export_CSV->setVisible(false);
    ui->Export_Pendrive->setVisible(false);
}
/*if(!db.isOpen())
       {
           qDebug()<<"Failed to database open.";return;
       }

       QSqlQueryModel * modal=new QSqlQueryModel();
       QSqlQuery query;

      if(query.exec("SELECT * FROM employees WHERE BirthDate>='"+FromcalenderDate +"' AND BirthDate<='"+TocalenderDate +"' "))*/


/* QDate FromDate = ui->dateEdit_5->date();
    QString from = FromDate.toString();
    QDate ToDate = ui->dateEdit_4->date();
    QString to = ToDate.toString();

    qDebug()<<from;
    qDebug()<<to;

    QString PID = ui->lineEdit_149->text();
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* query=new QSqlQuery(mydb);
    query->prepare("select PID, TName ,  ANrmlRang,BNrmlRang,ODVal, ResultOD, Date, Time from Reports where Date >= '"+from+"' and <= '"+to+ "'");
    query->exec();
    modal->setQuery(*query);
    ui->tableView_2->setModel(modal);
    qDebug() << ( modal->rowCount());

    /*SELECT * FROM  [table]
    WHERE [time] >='2014-04-08 23:53:00.000' AND [time] <= '2014-04-08 23:58:00.000'*/

void MainWindow::on_Print_All_data_clicked()
{
    if(Internal==1)
    {

    }
    else if (External==2)
    {
        QString strStream;
        QTextStream out(&strStream);

        const int rowCount = ui->tableView_2->model()->rowCount();
        const int columnCount = ui->tableView_2->model()->columnCount();

        /*out <<  "<html>\n"
            "<head>\n"
            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
            <<  QString("<title>%1</title>\n").arg(strTitle)
            <<  "</head>\n"
            "<body bgcolor=#ffffff link=#5000A0>\n"
            "<table border=1 cellspacing=0 cellpadding=2>\n";*/

        // headers
        out << "<thead><tr bgcolor=#f0f0f0>";
        for (int column = 0; column < columnCount; column++)
            if (!ui->tableView_2->isColumnHidden(column))
                out << QString("<th>%1</th>").arg(ui->tableView_2->model()->headerData(column, Qt::Horizontal).toString());
        out << "</tr></thead>\n";

        // data table
        for (int row = 0; row < rowCount; row++) {
            out << "<tr>";
            for (int column = 0; column < columnCount; column++) {
                if (!ui->tableView_2->isColumnHidden(column)) {
                    QString data = ui->tableView_2->model()->data(ui->tableView_2->model()->index(row, column)).toString().simplified();
                    out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;&nbsp;"));
                }
            }
            out << "</tr>\n";
        }
        out <<  "</table>\n"
                "</body>\n"
                "</html>\n";

        QTextDocument *document = new QTextDocument();
        document->setHtml(strStream);

        QPrinter printer;

        QPrintDialog *dialog = new QPrintDialog(&printer, nullptr);
        if (dialog->exec() == QDialog::Accepted) {
            document->print(&printer);
        }

        delete document;

    }
}

void MainWindow::on_pushButton_311_clicked()
{
    QString PID = ui->lineEdit_149->text();
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery* query=new QSqlQuery(mydb);
    query->prepare("select PID, TName ,  ANrmlRang,BNrmlRang,ODVal, ResultOD, Date, Time from Reports where PID = '"+PID+"'");
    query->exec();
    modal->setQuery(*query);
    ui->tableView_2->setModel(modal);
    qDebug() << ( modal->rowCount());

    ui->label_214->setText("Sample ID : ");


    ui->Filter_Btn->setVisible(true);
    ui->Data_Print_Btn->setVisible(true);
    ui->Export_Btn->setVisible(true);
    ui->Data_Delete_Btn->setVisible(true);
    ui->Data_Delete_All->setVisible(false);
    ui->Filt_TestName->setVisible(false);
    ui->Filt_Sample_Id->setVisible(false);
    ui->Filt_Date->setVisible(false);

}

void MainWindow::on_Export_CSV_clicked()
{
    QString filters("csv files (*.csv);;All files (*.*)");
    QString defaultFilter("csv files (*.csv)");

    QString fileName = QFileDialog::getSaveFileName(nullptr, "Save file", QCoreApplication::applicationDirPath(), filters, &defaultFilter);
    fileName += ".csv";
    QFile file(fileName);

    QAbstractItemModel *model =  ui->tableView_2->model();
    if (file.open(QFile::WriteOnly | QFile::Truncate)) {
        QTextStream data(&file);
        QStringList strList;
        for (int i = 0; i < model->columnCount(); i++) {
            if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
            else
                strList.append("");
        }
        data << strList.join(",") << "\n";
        for (int i = 0; i < model->rowCount(); i++) {
            strList.clear();
            for (int j = 0; j < model->columnCount(); j++) {
                if (model->data(model->index(i, j)).toString().length() > 0)
                    strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                else
                    strList.append("");
            }
            data << strList.join(",") + "\n";
        }
        file.close();


    }
    QMessageBox msg(this);
    msg.setWindowModality(Qt::WindowModal);
    msg.setWindowTitle(QLatin1String("Information"));
    // msg.setDetailedText("CSV File Export Successfully");
    msg.setStyleSheet("font:16pt Arial;");
    msg.setText("Data Exported...");
    QPixmap p("/home/pi/git/Biochemistry-Updates-main/BCUIDF/img/check-mark.png");
    auto newPixmap = p.scaled(45, 45);
    msg.setIconPixmap(newPixmap);
    msg.setStandardButtons(QMessageBox::Ok);
    if(msg.exec()==QMessageBox::Ok)
    {
        ui->stackedWidget->setCurrentIndex(13);
    }
}


void MainWindow::on_radioButton_5_clicked()
{
    text="Male";
}

void MainWindow::on_radioButton_6_clicked()
{
    text="Female";
}

void MainWindow::on_radioButton_7_clicked()
{
    text="Transgender";
}

void MainWindow::on_Export_Pendrive_clicked()
{
    /*foreach (const QStorageInfo &storage, QStorageInfo::mountedVolumes()) {

       qDebug() << storage.rootPath();
       if (storage.isReadOnly())
           qDebug() << "isReadOnly:" << storage.isReadOnly();

       qDebug() << "name:" << storage.name();
       qDebug() << "fileSystemType:" << storage.fileSystemType();
       qDebug() << "size:" << storage.bytesTotal()/1000/1000 << "MB";
       qDebug() << "availableSize:" << storage.bytesAvailable()/1000/1000 << "MB";
    }*/

    QString filters("csv files (*.csv);;All files (*.*)");
    QString defaultFilter("csv files (*.csv)");

    QString fileName = QFileDialog::getOpenFileName();

    fileName += ".csv";

    QFile file(fileName);
    QString location;
    QString path1= fileName;

    QString locationoffolder="/";


    foreach (const QStorageInfo &storage, QStorageInfo::mountedVolumes()) {
        if (storage.isValid() && storage.isReady() && (!(storage.name()).isEmpty())) {
            if (!storage.isReadOnly()) {

                qDebug() << "path:" << storage.rootPath();
                //WILL CREATE A FILE IN A BUILD FOLDER
                location = storage.rootPath();
                QString srcPath = "writable.txt";
                //PATH OF THE FOLDER IN PENDRIVE
                QString destPath = location+path1;
                QString folderdir = location+locationoffolder;
                qDebug()<<location<<"this is located1";
                qDebug()<<path1<<"this is located2";
                qDebug()<<locationoffolder<<"this is located3";
                qDebug()<<destPath<<"this is located4";
                qDebug()<<folderdir<<"this is located";

                //IF FOLDER IS NOT IN PENDRIVE THEN IT WILL CREATE A FOLDER NAME REPORT
                QDir directory(folderdir);
                if(!directory.exists()){
                    directory.mkpath(".");

                    qDebug()<<location<<"this is located";
                }

                qDebug() << "Usbpath:" <<destPath;
                if (QFile::exists(destPath)) QFile::remove(destPath);
                QFile::copy(srcPath,destPath);
                qDebug("copied");

            }
        }
    }
}

void MainWindow::on_Home_Btn_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    ui->Print_Btn->setDisabled(false);
    ui->Print_Btn_2->setDisabled(false);
    ui->Print_Btn_3->setDisabled(false);
}

void MainWindow::on_Print_Individual_Data_clicked()
{
    ui->label_213->setVisible(false);
    ui->comboBox_11->setVisible(true);
    ui->label_217->setVisible(true);
    ui->label_217->setText("PID");

    ui->label_215->setVisible(false);
    ui->label_216->setVisible(false);
    ui->dateEdit_4->setVisible(false);
    ui->dateEdit_5->setVisible(false);
    ui->pushButton_310->setVisible(false);

    ui->label_214->setVisible(false);
    ui->Filter_Btn->setVisible(true);
    ui->Data_Print_Btn->setVisible(true);
    ui->Export_Btn->setVisible(true);
    ui->Data_Delete_Btn->setVisible(true);
    ui->Data_Delete_All->setVisible(false);
    ui->Filt_TestName->setVisible(false);
    ui->Filt_Sample_Id->setVisible(false);
    ui->Filt_Date->setVisible(false);
    ui->Print_Individual_Data->setVisible(false);
    ui->Print_All_data->setVisible(false);
    // ui->Export_Btn->setVisible(false);
    ui->Export_CSV->setVisible(false);
    ui->Export_Pendrive->setVisible(false);
    ui->tableView_2->setModel(nullptr);

    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * query= new QSqlQuery(mydb);
    query->prepare("select PID  , PName, PAge , PGender , TName , ANrmlRang , BNrmlRang , ODVal , ResultOD ,Unit, Date , Time from Reports");
    query->exec();
    modal->setQuery(*query);
    ui->comboBox_11->setModel(modal);
    ui->tableView_2->setModel(modal);
    qDebug()<<(modal->rowCount());

}

void MainWindow::on_comboBox_11_activated(const QString &arg1)
{
    QString val=ui->comboBox_11->currentText();

    ui->PID_lineEdit->setText("");
    ui->PName_lineEdit->setText("");
    ui->PAge_lineEdit->setText("");
    ui->PGender_lineEdit->setText("");
    ui->TName_lineEdit->setText("");
    ui->ANrmlRang_lineEdit->setText("");
    ui->BNrmlRang_lineEdit->setText("");
    ui->ODVal_lineEdit->setText("");
    ui->ResultOD_lineEdit->setText("");
    ui->Unit_lineEdit1->setText("");
    ui->Date_lineEdit->setText("");
    ui->Time_lineEdit->setText("");

    QSqlQuery qry;
    QString PID , PName , PAge , PGender , TName , ANrml , BNrml , ODVal , ResultOD ,Unit, Date , Time;

    qry.prepare("select * from Reports where PID ='"+val+"'");
    qry.exec();
    while(qry.next())
    {
        PID =qry.value(1).toString();
        PName =qry.value(2).toString();
        PAge =qry.value(3).toString();
        PGender =qry.value(4).toString();
        TName =qry.value(5).toString();
        ANrml =qry.value(6).toString();
        BNrml =qry.value(7).toString();
        ODVal =qry.value(8).toString();
        ResultOD =qry.value(9).toString();
        Unit=qry.value(10).toString();
        Date =qry.value(11).toString();
        Time=qry.value(12).toString();
    }
    qDebug()<<PID << PName << PAge << PGender << TName << ANrml << BNrml << ODVal << ResultOD << Date << Time;
    if(PName=="")
    {
        QSqlQuery * query=new QSqlQuery(mydb);
        qDebug()<<val<<"Empty...";
        query->prepare("select PID  , TName , ANrmlRang , BNrmlRang , ODVal , ResultOD ,Unit, Date , Time from Reports where PID ='"+val+"'");  //or TName='"+val+"' or  ANrmlRang='"+val+"' or BNrmlRang='"+val+"' or ODVal='"+val+"' or ResultOD='"+val+"' or Unit='"+val+"' or Date='"+val+"' or Time='"+val+"'");
        if(query->exec())
        {
            while(query->next())
            {
                ui->Print_Individual_Btn->setVisible(true);
                ui->Print_Individual_Btn_2->setVisible(false);
                ui->PID_lineEdit->setText(query->value(0).toString());
                ui->TName_lineEdit->setText(query->value(4).toString());
                ui->ANrmlRang_lineEdit->setText(query->value(5).toString());
                ui->BNrmlRang_lineEdit->setText(query->value(6).toString());
                ui->ODVal_lineEdit->setText(query->value(7).toString());
                ui->ResultOD_lineEdit->setText(query->value(8).toString());
                ui->Unit_lineEdit1->setText(query->value(9).toString());
                ui->Date_lineEdit->setText(query->value(10).toString());
                ui->Time_lineEdit->setText(query->value(11).toString());

                QSqlQueryModel * modal = new QSqlQueryModel();
                modal->setQuery(*query);
                ui->tableView_2->setModel(modal);
                qDebug() << ( modal->rowCount());
                QString All;
                Individual=1;
            }
        }
        else
        {
            QMessageBox::critical(this,tr("error:::"),query->lastError().text());
        }

    }

    else  {

        QSqlQuery * qry=new QSqlQuery(mydb);
        qDebug()<<val<<"Exist...";
        qry->prepare("select PID  , PName, PAge , PGender , TName , ANrmlRang , BNrmlRang , ODVal , ResultOD ,Unit, Date , Time from Reports where PID ='"+val+"'"); // or PName='"+val+"' or PAge='"+val+"'  or PGender='"+val+"' or TName='"+val+"' or  ANrmlRang='"+val+"' or BNrmlRang='"+val+"' or ODVal='"+val+"' or ResultOD='"+val+"' or Unit='"+val+"' or Date='"+val+"' or Time='"+val+"'");
        if(qry->exec())
        {
            while(qry->next())
            {
                ui->Print_Individual_Btn->setVisible(false);
                ui->Print_Individual_Btn_2->setVisible(true);
                ui->PID_lineEdit->setText(qry->value(0).toString());
                ui->PName_lineEdit->setText(qry->value(1).toString());
                ui->PAge_lineEdit->setText(qry->value(2).toString());
                ui->PGender_lineEdit->setText(qry->value(3).toString());
                ui->TName_lineEdit->setText(qry->value(4).toString());
                ui->ANrmlRang_lineEdit->setText(qry->value(5).toString());
                ui->BNrmlRang_lineEdit->setText(qry->value(6).toString());
                ui->ODVal_lineEdit->setText(qry->value(7).toString());
                ui->ResultOD_lineEdit->setText(qry->value(8).toString());
                ui->Unit_lineEdit1->setText(qry->value(9).toString());
                ui->Date_lineEdit->setText(qry->value(10).toString());
                ui->Time_lineEdit->setText(qry->value(11).toString());


                QSqlQueryModel * modal = new QSqlQueryModel();
                modal->setQuery(*qry);
                ui->tableView_2->setModel(modal);
                qDebug() << ( modal->rowCount());
                QString All;
                Individuals=2;

            }



            /*QString  one, two , the , four , five , si , sev , eig,nin,ten , ele , twe;
            one=ui->PID_lineEdit->text();
            two=ui->PName_lineEdit->text();
            the=ui->PAge_lineEdit->text();
            four=ui->PGender_lineEdit->text();
            five=ui->TName_lineEdit->text();
            si=ui->ANrmlRang_lineEdit->text();
            sev=ui->BNrmlRang_lineEdit->text();
            eig=ui->ODVal_lineEdit->text();
            nin=ui->ResultOD_lineEdit->text();
            ten=ui->Unit_lineEdit1->text();
            ele=ui->Date_lineEdit->text();
            twe=ui->Time_lineEdit->text();
            qDebug()<<"PID"<<one<< "PName"<<two << "PAge"<<the <<"PGender"<< four <<"TName"<< five <<"ANrmlRang"<< si <<"BNrmlRang"<< sev <<"ODVal"<< eig<<"ResultOD"<<nin<<"Unit"<<ten <<"Date"<< ele <<"Time"<< twe;*/
        }
        else
        {
            QMessageBox::critical(this,tr("error::"),qry->lastError().text());
        }

    }
}

int MainWindow::on_Print_Individual_Btn_clicked()
{
    if(Internal==1)
    {

        if(Individual==1)
        {

            QString val=ui->comboBox_11->currentText();
            QString Separate , All;
            QSqlQuery qry;
            QString PID , PName , PAge , PGender , TName , ANrml , BNrml , ODVal , ResultOD , Unit ,Date , Time;

            qry.prepare("select * from Reports where PID ='"+val+"'");
            qry.exec();
            while(qry.next())
            {
                PID =qry.value(1).toString();
                PName =qry.value(2).toString();
                PAge =qry.value(3).toString();
                PGender =qry.value(4).toString();
                TName =qry.value(5).toString();
                ANrml =qry.value(6).toString();
                BNrml =qry.value(7).toString();
                ODVal =qry.value(8).toString();
                ResultOD =qry.value(9).toString();
                Unit=qry.value(10).toString();
                Date =qry.value(11).toString();
                Time=qry.value(12).toString();
            }
            qDebug()<<PID << PName << PAge << PGender << TName << ANrml << BNrml << ODVal << ResultOD << Date << Time;

            qDebug()<<Individual;
            QApplication::processEvents();
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
            p->write("Patient ID    : "  + PID);
            p->write("\nTest Name     : "  + TName);
            p->write("\nResult        : "  + ResultOD +  " "   +    Unit);
            p->write("\nDate          : "  + Date);
            p->write("\nTime          : "  + Time);
            p->write("\nUser Name     : "  + ui->UserName->text());
            p->feed();
            p->feed();
            p->feed();
            p->feed();
            p->close();
            timer->start(1000);
            timer1->start(1000);
            return 1;
            //ui->Print_Btn_3->setDisabled(false);
            // ui->stackedWidget->setCurrentIndex(2);
        }
        else {

        }
    }
    else if (External==2)
    {

        if(Individual==1)
        {

            QString val=ui->comboBox_11->currentText();
            QString Separate , All;
            QSqlQuery qry;
            QString PID , PName , PAge , PGender , TName , ANrml , BNrml , ODVal , ResultOD , Unit ,Date , Time;

            qry.prepare("select * from Reports where PID ='"+val+"'");
            qry.exec();
            while(qry.next())
            {
                PID =qry.value(1).toString();
                PName =qry.value(2).toString();
                PAge =qry.value(3).toString();
                PGender =qry.value(4).toString();
                TName =qry.value(5).toString();
                ANrml =qry.value(6).toString();
                BNrml =qry.value(7).toString();
                ODVal =qry.value(8).toString();
                ResultOD =qry.value(9).toString();
                Unit=qry.value(10).toString();
                Date =qry.value(11).toString();
                Time=qry.value(12).toString();
            }
            qDebug()<<PID << PName << PAge << PGender << TName << ANrml << BNrml << ODVal << ResultOD << Date << Time;

            qDebug()<<Individual;
            QApplication::processEvents();
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
            p->write("Patient ID    : "  + PID);
            p->write("\nTest Name     : "  + TName);
            p->write("\nResult        : "  + ResultOD +  " "   +    Unit);
            p->write("\nDate          : "  + Date);
            p->write("\nTime          : "  + Time);
            p->write("\nUser Name     : "  + ui->UserName->text());
            p->feed();
            p->feed();
            p->feed();
            p->feed();
            p->close();
            timer->start(1000);
            timer1->start(1000);
            return 1;
            //ui->Print_Btn_3->setDisabled(false);
            // ui->stackedWidget->setCurrentIndex(2);
        }
        else {

        }
    }

}

int MainWindow::on_Print_Individual_Btn_2_clicked()
{
    if(Internal==1)
    {

        if (Individuals==2)
        {
            qDebug()<<Individuals;
            QApplication::processEvents();
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
            p->write("Patient ID    : "  + ui->PID_lineEdit->text());
            p->write("\nPatient Name  : "  + ui->PName_lineEdit->text());
            p->write("\nPatient Age   : "  + ui->PAge_lineEdit->text());
            p->write("\nPatient Gender: "  + ui->PGender_lineEdit->text());
            p->write("\nTest Name     : "  + ui->TName_lineEdit->text());
            p->write("\nResult        : "  + ui->ResultOD_lineEdit->text() +  " "   +    ui->Unit_lineEdit1->text());
            p->write("\nDate          : "  + ui->Date_lineEdit->text());
            p->write("\nTime          : "  + ui->Time_lineEdit->text());
            p->write("\nUser Name     : "  + ui->UserName->text());
            p->feed();
            p->feed();
            p->feed();
            p->feed();
            p->close();
            timer->start(1000);
            timer1->start(1000);
            //ui->Print_Btn_3->setDisabled(false);
            //ui->stackedWidget->setCurrentIndex(2);
            return 1;
        }
    }
    else if (External==2)

    {

        if (Individuals==2)
        {
            qDebug()<<Individuals;
            QApplication::processEvents();
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
            p->write("Patient ID    : "  + ui->PID_lineEdit->text());
            p->write("\nPatient Name  : "  + ui->PName_lineEdit->text());
            p->write("\nPatient Age   : "  + ui->PAge_lineEdit->text());
            p->write("\nPatient Gender: "  + ui->PGender_lineEdit->text());
            p->write("\nTest Name     : "  + ui->TName_lineEdit->text());
            p->write("\nResult        : "  + ui->ResultOD_lineEdit->text() +  " "   +    ui->Unit_lineEdit1->text());
            p->write("\nDate          : "  + ui->Date_lineEdit->text());
            p->write("\nTime          : "  + ui->Time_lineEdit->text());
            p->write("\nUser Name     : "  + ui->UserName->text());
            p->feed();
            p->feed();
            p->feed();
            p->feed();
            p->close();
            timer->start(1000);
            timer1->start(1000);
            //ui->Print_Btn_3->setDisabled(false);
            //ui->stackedWidget->setCurrentIndex(2);
            return 1;
        }
    }
}

void MainWindow::on_Data_Delete_Btn_clicked()
{
    ui->Data_Select_Delete->setVisible(true);
    ui->Data_Delete_All->setVisible(true);
    QSqlQueryModel * modal = new QSqlQueryModel();
    QSqlQuery * query= new QSqlQuery(mydb);
    query->prepare("select PID  , PName, PAge , PGender , TName , ANrmlRang , BNrmlRang , ODVal , ResultOD ,Unit, Date , Time from Reports");
    query->exec();
    modal->setQuery(*query);
    ui->tableView_2->setModel(modal);
    ui->comboBox_12->setModel(modal);
    qDebug()<<(modal->rowCount());

}

void MainWindow::on_Print_Individual_Btn_3_clicked()
{
    /*int r = ui->tableView_2->selectionModel()->currentIndex().row();
           ui->tableView_2->model()->removeRow(r);*/

    auto selected_index_list = ui->tableView_2->selectionModel()->selectedIndexes();
    if(selected_index_list.empty())
    {
        QMessageBox::information(nullptr, tr("Error"), tr("No elements selected. Please retry."));
        return;
    }
    auto index = selected_index_list.at(0);
    ui->tableView_2->model()->removeRow(index.row());
}

void MainWindow::on_Delete_Individual_Btn_clicked()
{
    QString val = ui->comboBox_12->currentText();
    QSqlQuery query;
    query.prepare("Delete from Reports where PID = '"+val+"'");
    if(query.exec())
    {
        QMessageBox msg(this);
        msg.setWindowModality(Qt::WindowModal);
        msg.setWindowTitle(QLatin1String("Information"));
        msg.setStyleSheet("font:16pt Arial;");
        msg.setText("Data Deleted...");
        QPixmap p("/home/pi/git/Biochemistry-Updates-main/BCUIDF/img/check-mark.png");
        auto newPixmap = p.scaled(45, 45);
        msg.setIconPixmap(newPixmap);
        msg.setStandardButtons(QMessageBox::Ok);
        if(msg.exec()==QMessageBox::Ok)
        {
            qDebug()<<"Delete Successfully......";

            ui->comboBox_12->clear();
            ui->tableView_2->reset();
            //ui->stackedWidget->setCurrentIndex(13);
        }

    }
    else
    {
        qDebug()<<"::ERROR......";
    }

}

void MainWindow::on_comboBox_12_activated(const QString &arg1)
{
    QString val=ui->comboBox_12->currentText();

    ui->PID_lineEdit->setText("");
    ui->PName_lineEdit->setText("");
    ui->PAge_lineEdit->setText("");
    ui->PGender_lineEdit->setText("");
    ui->TName_lineEdit->setText("");
    ui->ANrmlRang_lineEdit->setText("");
    ui->BNrmlRang_lineEdit->setText("");
    ui->ODVal_lineEdit->setText("");
    ui->ResultOD_lineEdit->setText("");
    ui->Unit_lineEdit1->setText("");
    ui->Date_lineEdit->setText("");
    ui->Time_lineEdit->setText("");

    QSqlQuery qry;
    QString PID , PName , PAge , PGender , TName , ANrml , BNrml , ODVal , ResultOD ,Unit, Date , Time;

    qry.prepare("select * from Reports where PID ='"+val+"'");
    qry.exec();
    while(qry.next())
    {
        PID =qry.value(1).toString();
        PName =qry.value(2).toString();
        PAge =qry.value(3).toString();
        PGender =qry.value(4).toString();
        TName =qry.value(5).toString();
        ANrml =qry.value(6).toString();
        BNrml =qry.value(7).toString();
        ODVal =qry.value(8).toString();
        ResultOD =qry.value(9).toString();
        Unit=qry.value(10).toString();
        Date =qry.value(11).toString();
        Time=qry.value(12).toString();
    }
    qDebug()<<PID << PName << PAge << PGender << TName << ANrml << BNrml << ODVal << ResultOD << Date << Time;
    if(PName=="")
    {
        QSqlQuery * query=new QSqlQuery(mydb);
        qDebug()<<val<<"Empty...";
        query->prepare("select PID  , TName , ANrmlRang , BNrmlRang , ODVal , ResultOD ,Unit, Date , Time from Reports where PID ='"+val+"'");  //or TName='"+val+"' or  ANrmlRang='"+val+"' or BNrmlRang='"+val+"' or ODVal='"+val+"' or ResultOD='"+val+"' or Unit='"+val+"' or Date='"+val+"' or Time='"+val+"'");
        if(query->exec())
        {
            while(query->next())
            {
                ui->Delete_Individual_Btn->setVisible(true);
                ui->Print_Individual_Btn_2->setVisible(false);
                ui->PID_lineEdit->setText(query->value(0).toString());
                ui->TName_lineEdit->setText(query->value(4).toString());
                ui->ANrmlRang_lineEdit->setText(query->value(5).toString());
                ui->BNrmlRang_lineEdit->setText(query->value(6).toString());
                ui->ODVal_lineEdit->setText(query->value(7).toString());
                ui->ResultOD_lineEdit->setText(query->value(8).toString());
                ui->Unit_lineEdit1->setText(query->value(9).toString());
                ui->Date_lineEdit->setText(query->value(10).toString());
                ui->Time_lineEdit->setText(query->value(11).toString());

                QSqlQueryModel * modal = new QSqlQueryModel();
                modal->setQuery(*query);
                ui->tableView_2->setModel(modal);
                qDebug() << ( modal->rowCount());
                QString All;


            }
        }
        else
        {
            QMessageBox::critical(this,tr("error:::"),query->lastError().text());
        }

    }

    else  {

        QSqlQuery * qry=new QSqlQuery(mydb);
        qDebug()<<val<<"Exist...";
        qry->prepare("select PID  , PName, PAge , PGender , TName , ANrmlRang , BNrmlRang , ODVal , ResultOD ,Unit, Date , Time from Reports where PID ='"+val+"'"); // or PName='"+val+"' or PAge='"+val+"'  or PGender='"+val+"' or TName='"+val+"' or  ANrmlRang='"+val+"' or BNrmlRang='"+val+"' or ODVal='"+val+"' or ResultOD='"+val+"' or Unit='"+val+"' or Date='"+val+"' or Time='"+val+"'");
        if(qry->exec())
        {
            while(qry->next())
            {
                ui->Print_Individual_Btn->setVisible(false);
                //ui->Print_Individual_Btn_2->setVisible(true);
                ui->PID_lineEdit->setText(qry->value(0).toString());
                ui->PName_lineEdit->setText(qry->value(1).toString());
                ui->PAge_lineEdit->setText(qry->value(2).toString());
                ui->PGender_lineEdit->setText(qry->value(3).toString());
                ui->TName_lineEdit->setText(qry->value(4).toString());
                ui->ANrmlRang_lineEdit->setText(qry->value(5).toString());
                ui->BNrmlRang_lineEdit->setText(qry->value(6).toString());
                ui->ODVal_lineEdit->setText(qry->value(7).toString());
                ui->ResultOD_lineEdit->setText(qry->value(8).toString());
                ui->Unit_lineEdit1->setText(qry->value(9).toString());
                ui->Date_lineEdit->setText(qry->value(10).toString());
                ui->Time_lineEdit->setText(qry->value(11).toString());


                QSqlQueryModel * modal = new QSqlQueryModel();
                modal->setQuery(*qry);
                ui->tableView_2->setModel(modal);
                qDebug() << ( modal->rowCount());
                QString All;
            }



        }
        else
        {
            QMessageBox::critical(this,tr("error::"),qry->lastError().text());
        }

    }
}

void MainWindow::on_Data_Select_Delete_clicked()
{
    ui->comboBox_12->setVisible(true);
    ui->Delete_Individual_Btn->setVisible(true);

}

void MainWindow::on_radioButton_3_clicked()
{
    Internal=1;
}

void MainWindow::on_radioButton_4_clicked()
{
    External=2;
}

void MainWindow::on_timeEdit_userTimeChanged(const QTime &time)
{
    /*int systemHwClockStatus = system("/sbin/hwclock -w");
    qDebug()<<systemHwClockStatus;
    if (systemHwClockStatus == -1 )
    {
        qDebug() << "Failed to sync hardware clock";
    }*/
}

void MainWindow::on_calendarWidget_activated(const QDate &date)
{

}

int MainWindow::on_pushButton_11_clicked()
{
    QDir pathDir("/home/pi/git/Biochemistry-Updates");
    if (pathDir.exists())
    {
        QDir directory("/home/pi/git/Biochemistry-Updates");
        directory.removeRecursively();
    }
    QThread::msleep(200);
    QProcess *myprocess = new QProcess(this);
    QDir Direct ("/home/pi/git/");
    qDebug() << Direct ;
    myprocess->setWorkingDirectory("/home/pi/git/");
    myprocess->start("git clone https://github.com/Instruments04/Biochemistry-Updates.git");
    if (!myprocess->waitForStarted())
    {
        qDebug() << "Error : " << myprocess->errorString();
        return 1;
    }
    qDebug() << "No Error ";
    myprocess->waitForFinished(-1);
    QThread::msleep(200);
    QDir search ("/home/pi/git/Biochemistry-Updates/BCUID");
    if(search.exists())
    {

    }
    QThread::msleep(200);

    QString Reboot = "Restart";
    if(Reboot=="Restart")
    {
        system("sudo chmod +x /home/pi/git/Biochemistry-Updates/build-BCUID-Desktop-Debug/BCUID");
        system("sudo shutdown -r now");

    }
}

