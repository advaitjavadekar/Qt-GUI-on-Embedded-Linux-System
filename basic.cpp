#include "basic.h"
#include "inputs.h"
#include "symptoms.h"
#include "ui_basic.h"
#include "ui_inputs.h"
#include "symptoms.h"
#include <QtGui/QMouseEvent>
#include <QGraphicsScene>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QFile>
//QString x;
//QStringList stringList;
#include <string.h>
#include <iostream>

basic::basic(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::basic)
{
    ui->setupUi(this);
}

basic::~basic()
{
    delete ui;
}

void basic::on_display1_clicked()
{
    QFile file("/home/root/qt/hbm");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());

    QTextStream in(&file);
    QString HBM =in.readLine();
    ui-> HBMin->setText(HBM);


    printf("%s HBM",HBM.toUtf8().constData());

    QFile file4("/home/root/qt/ID.txt");
    file4.open(QIODevice::ReadOnly);

    QTextStream inTtt(&file4);
    QString temp = inTtt.readLine();

    QFile file5(temp+"/hbm");
    if (file5.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file5 );
        stream << HBM << endl;
    }

    QFile file2 ("/home/root/qt/newfile.txt");
    if(!file2.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info2",file.errorString());

    QTextStream in1(&file2);
    QString Temperature = in1.readLine();
    ui-> Tempin->setText(Temperature);

    QFile file7(temp+"/temp");
    if (file7.open(QIODevice::ReadWrite) )
    {
        QTextStream stream( &file7 );
        stream << Temperature << endl;
    }


}


void basic::on_Next_clicked()
{

    symptom = new Symptoms();
    symptom -> show();
    this->close();
}

void basic::on_HBM_clicked()
{
  system("/home/root/qt/a.out");
}

void basic::on_Temperature_clicked()
{
  system("cd /home/root/qt python pytemp.py");
}
