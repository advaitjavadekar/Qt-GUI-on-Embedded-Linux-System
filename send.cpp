#include "send.h"
#include<QtNetwork/QNetworkAccessManager>
#include<QLabel>
#include "ui_send.h"
#include<QFile>
#include<QString>
#include<QTextStream>
#include<QMessageBox>
#include<QFileDialog>
#include<string>
#include<iostream>
using namespace std;

char a[100];
string x;
int n=0;

Send::Send(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Send)
{
    ui->setupUi(this);
}

Send::~Send()
{
    delete ui;
}

void Send::on_send_clicked()
{
// Program too restart the Qt Window inputs with a system call
    //QLabel *label = new QLabel("\n\nOpening New Window\n\n....");
    //label->show();

    this->close();

    system("/home/root/final_window");



    //label->close();



//    QNetworkAccessManager *nwm = new QNetworkAccessManager;
//    QNetworkAccessManager(this);
//    QString path("/home/hp/QtProjects/eye.jpg");
//    QNetworkRequest request(QUrl("file:///home/hp/QtProjects/first.php"));

//    QString bound="margin";
//    QByteArray data(QString("--"+bound+"\r\n").toAscii());
//    data.append(QString("Content-Disposition: form-data; name=\"action\"\r\n\r\n").toAscii());
//    data.append("first.php\r\n");
//    data.append("--" + bound + "\r\n");
//    data.append(QString("Content-Disposition: form-data; name=\"uploaded\"; filename="/home/hp/QtProjects/eye.jpg"\r\n").toAscii());
//    data.append("Content-Type: image/jpeg\r\n\r\n");
//    QFile file(path);
//    if (!file.open(QIODevice::ReadOnly))
//    return;
//    data.append(file.readAll());
//    data.append("\r\n");
//    data.append("--" + bound + "--\r\n");
//    request.setRawHeader(QString("Content-Type").toAscii(),QString("multipart/form-data; boundary=" + bound).toAscii());
//    request.setRawHeader(QString("Content-Length").toAscii(), QString::number(data.length()).toAscii());
//    this->reply = am->post(request,data);
//    qDebug() << data.data();
//    connect(this->reply, SIGNAL(finished()), this, SLOT(replyFinished()));

}

void Send::on_diagnose_clicked()
{
    ui->textEdit->setText("Patient may be suffering from Common Cold");
//    QFile file2 ("/home/hp/QtProjects/symptomdiagnose");
//    if(!file2.open(QIODevice::ReadOnly | QIODevice::Text))
//        QMessageBox::information(0,"info",file2.errorString());


  //  QTextStream in(&file2);
  //  while(!in.atEnd())
  //  {
  //      QString line=in.readLine();
   //     x=(line);
   // }

    //if(a="12")

}
