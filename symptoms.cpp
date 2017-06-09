#include "symptoms.h"
#include "ui_symptoms.h"
#include "send.h"
#include<QFile>
#include<QMessageBox>
#include<QString>
#include<QTextStream>
#include "inputs.h"

Symptoms::Symptoms(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Symptoms)
{
    ui->setupUi(this);

}

Symptoms::~Symptoms()
{
    delete ui;
}
void Symptoms::on_Enter_clicked()
{
    send = new Send;
    send->show();
    this->close();

    QFile file4("/home/hp/QtProjects/ID.txt");
    file4.open(QIODevice::ReadOnly);

    QTextStream inTtt(&file4);
    QString temp = inTtt.readLine();




    QFile file (temp+"/symptomlist.txt");
    if(!file.open(QIODevice::ReadWrite | QIODevice::Text))
        QMessageBox::information(0,"info",file.errorString());

    QFile file2 (temp+"/symptomdiagnose.txt");
    if(!file2.open(QIODevice::ReadWrite | QIODevice::Text))
        QMessageBox::information(0,"info",file.errorString());

    if(ui->cold->isChecked())
    {
        QTextStream out(&file);
        out << "Cold \n";
        QTextStream out2(&file2);
        out2 << "1";
    }

    if(ui->cough->isChecked())
    {
        QTextStream out(&file);
        out << "Cough \n";
        QTextStream out2(&file2);
        out2 << "2";
    }

    if(ui->fever->isChecked())
    {
        QTextStream out(&file);
        out << "Fever \n";
        QTextStream out2(&file2);
        out2 << "3";
    }

    if(ui->Top->isChecked())
    {
        QTextStream out(&file);
        out << "Stomachache at top \n";
        QTextStream out2(&file2);
        out2 << "41";
    }

    if(ui->Left->isChecked())
    {
        QTextStream out(&file);
        out << "Stomachache at left \n";
        QTextStream out2(&file2);
        out2 << "42";
    }

    if(ui->Right->isChecked())
    {
        QTextStream out(&file);
        out << "Stomachache at right \n";
        QTextStream out2(&file2);
        out2 << "43";
    }

    if(ui->Center->isChecked())
    {
        QTextStream out(&file);
        out << "Stomachache at center \n";
        QTextStream out2(&file2);
        out2 << "44";
    }

    if(ui->Bottom->isChecked())
    {
        QTextStream out(&file);
        out << "Stomachache at bottom \n";
        QTextStream out2(&file2);
        out2 << "45";
    }

    if(ui->headache->isChecked())
    {
        QTextStream out(&file);
        out << "Headache \n";
        QTextStream out2(&file2);
        out2 << "5";
    }

    if(ui->redeyes->isChecked())
    {
        QTextStream out(&file);
        out << "Red Eyes \n";
        QTextStream out2(&file2);
        out2 << "6";
    }

    file.close();
    file2.close();
}


