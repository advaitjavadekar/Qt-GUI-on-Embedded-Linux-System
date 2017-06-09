#include "inputs.h"
#include "ui_inputs.h"
#include "symptoms.h"
#include <QtGui/QMouseEvent>
#include <QGraphicsScene>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QFile>
#include <QString>
#include "basic.h"
#include <stdio.h>
#include<ostream>
#include<istream>
#include<time.h>
#include<cstring>


int i=0;
QString path;

Inputs::Inputs(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inputs)
{
    ui->setupUi(this);
    srand(time(NULL));
    i=rand() %10000000+1000000;

    path = "/home/root/Desktop/Folder" + QString::number(i);
    QString ID = QString::number(i);
    QFile file("/home/root/qt/ID.txt");
    if (file.open(QIODevice::ReadWrite))
    {
           QTextStream stream(&file);
           stream << path << endl;
    }
    file.close();



    QDir dir(path);
    if (!dir.exists())
    {
        dir.mkpath(".");
    }

    ui->IDin->setText(ID);
}

Inputs::~Inputs()
{
    delete ui;
}




void Inputs::on_Capture_clicked()
{
    //code for activating camera and taking picture "shell script"
    system("/home/root/final_build");

}


void Inputs::on_Display_clicked()
{
    QString imagePath = ("/boneCV/grabber010.ppm");


           imageObject = new QImage();
           imageObject->load(imagePath);
           image = QPixmap::fromImage(*imageObject);

           scene = new QGraphicsScene(this);
           scene->addPixmap(image);
           scene->setSceneRect(image.rect());
           ui->graphicsView->setScene(scene);

           QPixmap pixmap;
           pixmap.load(imagePath);

           QFile file(path+"/eye.ppm");
           file.open(QIODevice::WriteOnly);
           pixmap.save(&file, "PPM");


   //code for retrieving all files and displaying them to respective slots
}


void Inputs::on_Next_clicked()
{

    Basics = new basic();
    Basics -> show();
    this->close();

}
