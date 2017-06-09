/********************************************************************************
** Form generated from reading UI file 'symptoms.ui'
**
** Created: Fri Jun 3 19:34:00 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMPTOMS_H
#define UI_SYMPTOMS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Symptoms
{
public:
    QPushButton *Enter;
    QCheckBox *headache;
    QCheckBox *stomachache;
    QCheckBox *fever;
    QCheckBox *cough;
    QCheckBox *cold;
    QCheckBox *redeyes;
    QCheckBox *Top;
    QCheckBox *Center;
    QCheckBox *Bottom;
    QCheckBox *Left;
    QCheckBox *Right;
    QLabel *label;
    QCheckBox *backache;

    void setupUi(QWidget *Symptoms)
    {
        if (Symptoms->objectName().isEmpty())
            Symptoms->setObjectName(QString::fromUtf8("Symptoms"));
        Symptoms->resize(470, 262);
        Enter = new QPushButton(Symptoms);
        Enter->setObjectName(QString::fromUtf8("Enter"));
        Enter->setGeometry(QRect(170, 210, 85, 27));
        headache = new QCheckBox(Symptoms);
        headache->setObjectName(QString::fromUtf8("headache"));
        headache->setGeometry(QRect(10, 10, 97, 22));
        stomachache = new QCheckBox(Symptoms);
        stomachache->setObjectName(QString::fromUtf8("stomachache"));
        stomachache->setGeometry(QRect(260, 10, 141, 22));
        fever = new QCheckBox(Symptoms);
        fever->setObjectName(QString::fromUtf8("fever"));
        fever->setGeometry(QRect(10, 70, 97, 22));
        cough = new QCheckBox(Symptoms);
        cough->setObjectName(QString::fromUtf8("cough"));
        cough->setGeometry(QRect(10, 100, 97, 22));
        cold = new QCheckBox(Symptoms);
        cold->setObjectName(QString::fromUtf8("cold"));
        cold->setGeometry(QRect(10, 130, 97, 22));
        redeyes = new QCheckBox(Symptoms);
        redeyes->setObjectName(QString::fromUtf8("redeyes"));
        redeyes->setEnabled(true);
        redeyes->setGeometry(QRect(10, 160, 97, 22));
        redeyes->setAcceptDrops(true);
        Top = new QCheckBox(Symptoms);
        Top->setObjectName(QString::fromUtf8("Top"));
        Top->setGeometry(QRect(260, 80, 97, 22));
        Center = new QCheckBox(Symptoms);
        Center->setObjectName(QString::fromUtf8("Center"));
        Center->setGeometry(QRect(260, 100, 97, 22));
        Bottom = new QCheckBox(Symptoms);
        Bottom->setObjectName(QString::fromUtf8("Bottom"));
        Bottom->setGeometry(QRect(260, 120, 97, 22));
        Left = new QCheckBox(Symptoms);
        Left->setObjectName(QString::fromUtf8("Left"));
        Left->setGeometry(QRect(260, 140, 97, 22));
        Right = new QCheckBox(Symptoms);
        Right->setObjectName(QString::fromUtf8("Right"));
        Right->setGeometry(QRect(260, 160, 97, 22));
        label = new QLabel(Symptoms);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 50, 67, 17));
        backache = new QCheckBox(Symptoms);
        backache->setObjectName(QString::fromUtf8("backache"));
        backache->setGeometry(QRect(10, 40, 97, 22));

        retranslateUi(Symptoms);

        QMetaObject::connectSlotsByName(Symptoms);
    } // setupUi

    void retranslateUi(QWidget *Symptoms)
    {
        Symptoms->setWindowTitle(QApplication::translate("Symptoms", "Form", 0, QApplication::UnicodeUTF8));
        Enter->setText(QApplication::translate("Symptoms", "Enter", 0, QApplication::UnicodeUTF8));
        headache->setText(QApplication::translate("Symptoms", "Headache", 0, QApplication::UnicodeUTF8));
        stomachache->setText(QApplication::translate("Symptoms", "Stomachache", 0, QApplication::UnicodeUTF8));
        fever->setText(QApplication::translate("Symptoms", "Fever", 0, QApplication::UnicodeUTF8));
        cough->setText(QApplication::translate("Symptoms", "Cough", 0, QApplication::UnicodeUTF8));
        cold->setText(QApplication::translate("Symptoms", "Cold", 0, QApplication::UnicodeUTF8));
        redeyes->setText(QApplication::translate("Symptoms", "Red eyes", 0, QApplication::UnicodeUTF8));
        Top->setText(QApplication::translate("Symptoms", "Top", 0, QApplication::UnicodeUTF8));
        Center->setText(QApplication::translate("Symptoms", "Center", 0, QApplication::UnicodeUTF8));
        Bottom->setText(QApplication::translate("Symptoms", "Bottom", 0, QApplication::UnicodeUTF8));
        Left->setText(QApplication::translate("Symptoms", "Left", 0, QApplication::UnicodeUTF8));
        Right->setText(QApplication::translate("Symptoms", "Right", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Symptoms", "Where?", 0, QApplication::UnicodeUTF8));
        backache->setText(QApplication::translate("Symptoms", "Backache", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Symptoms: public Ui_Symptoms {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMPTOMS_H
