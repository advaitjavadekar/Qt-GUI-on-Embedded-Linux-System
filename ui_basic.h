/********************************************************************************
** Form generated from reading UI file 'basic.ui'
**
** Created: Fri Jun 3 19:34:00 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASIC_H
#define UI_BASIC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_basic
{
public:
    QLineEdit *HBMin;
    QLineEdit *Tempin;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *display1;
    QPushButton *Next;
    QPushButton *HBM;
    QPushButton *Temperature;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *basic)
    {
        if (basic->objectName().isEmpty())
            basic->setObjectName(QString::fromUtf8("basic"));
        basic->resize(470, 262);
        HBMin = new QLineEdit(basic);
        HBMin->setObjectName(QString::fromUtf8("HBMin"));
        HBMin->setGeometry(QRect(220, 20, 113, 27));
        Tempin = new QLineEdit(basic);
        Tempin->setObjectName(QString::fromUtf8("Tempin"));
        Tempin->setGeometry(QRect(220, 60, 113, 27));
        lineEdit_3 = new QLineEdit(basic);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(220, 100, 113, 27));
        lineEdit_4 = new QLineEdit(basic);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(220, 140, 113, 27));
        lineEdit_5 = new QLineEdit(basic);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(220, 180, 113, 27));
        label_3 = new QLabel(basic);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 100, 81, 17));
        label_4 = new QLabel(basic);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 140, 81, 17));
        label_5 = new QLabel(basic);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 180, 67, 17));
        display1 = new QPushButton(basic);
        display1->setObjectName(QString::fromUtf8("display1"));
        display1->setGeometry(QRect(70, 220, 99, 27));
        Next = new QPushButton(basic);
        Next->setObjectName(QString::fromUtf8("Next"));
        Next->setGeometry(QRect(290, 220, 99, 27));
        HBM = new QPushButton(basic);
        HBM->setObjectName(QString::fromUtf8("HBM"));
        HBM->setGeometry(QRect(30, 20, 99, 27));
        Temperature = new QPushButton(basic);
        Temperature->setObjectName(QString::fromUtf8("Temperature"));
        Temperature->setGeometry(QRect(30, 60, 99, 27));
        label = new QLabel(basic);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 20, 67, 31));
        label_2 = new QLabel(basic);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(340, 60, 67, 31));

        retranslateUi(basic);

        QMetaObject::connectSlotsByName(basic);
    } // setupUi

    void retranslateUi(QWidget *basic)
    {
        basic->setWindowTitle(QApplication::translate("basic", "Form", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("basic", "Height (m)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("basic", "Weight (kg)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("basic", "BMI", 0, QApplication::UnicodeUTF8));
        display1->setText(QApplication::translate("basic", "Display", 0, QApplication::UnicodeUTF8));
        Next->setText(QApplication::translate("basic", "Next", 0, QApplication::UnicodeUTF8));
        HBM->setText(QApplication::translate("basic", "HBM", 0, QApplication::UnicodeUTF8));
        Temperature->setText(QApplication::translate("basic", "Temperature", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("basic", "bpm", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("basic", "C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class basic: public Ui_basic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASIC_H
