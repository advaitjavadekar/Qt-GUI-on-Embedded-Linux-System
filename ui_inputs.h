/********************************************************************************
** Form generated from reading UI file 'inputs.ui'
**
** Created: Fri Jun 3 19:34:00 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTS_H
#define UI_INPUTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inputs
{
public:
    QWidget *centralWidget;
    QPushButton *Capture;
    QGraphicsView *graphicsView;
    QPushButton *Display;
    QPushButton *Next;
    QLabel *label_3;
    QLabel *label_4;
    QCheckBox *Scratchy;
    QCheckBox *Itchy;
    QCheckBox *Painful;
    QLabel *label;
    QLineEdit *IDin;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *Inputs)
    {
        if (Inputs->objectName().isEmpty())
            Inputs->setObjectName(QString::fromUtf8("Inputs"));
        Inputs->resize(470, 262);
        centralWidget = new QWidget(Inputs);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Capture = new QPushButton(centralWidget);
        Capture->setObjectName(QString::fromUtf8("Capture"));
        Capture->setGeometry(QRect(30, 50, 99, 27));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(160, 40, 271, 161));
        Display = new QPushButton(centralWidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(120, 210, 99, 27));
        Next = new QPushButton(centralWidget);
        Next->setObjectName(QString::fromUtf8("Next"));
        Next->setGeometry(QRect(250, 210, 99, 27));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 80, 111, 21));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 100, 111, 31));
        Scratchy = new QCheckBox(centralWidget);
        Scratchy->setObjectName(QString::fromUtf8("Scratchy"));
        Scratchy->setGeometry(QRect(40, 140, 97, 22));
        Itchy = new QCheckBox(centralWidget);
        Itchy->setObjectName(QString::fromUtf8("Itchy"));
        Itchy->setGeometry(QRect(40, 160, 97, 21));
        Painful = new QCheckBox(centralWidget);
        Painful->setObjectName(QString::fromUtf8("Painful"));
        Painful->setGeometry(QRect(40, 180, 97, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 91, 21));
        IDin = new QLineEdit(centralWidget);
        IDin->setObjectName(QString::fromUtf8("IDin"));
        IDin->setGeometry(QRect(160, 10, 113, 27));
        Inputs->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(Inputs);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Inputs->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(Inputs);
        QObject::connect(Display, SIGNAL(clicked()), graphicsView, SLOT(show()));

        QMetaObject::connectSlotsByName(Inputs);
    } // setupUi

    void retranslateUi(QMainWindow *Inputs)
    {
        Inputs->setWindowTitle(QApplication::translate("Inputs", "Inputs", 0, QApplication::UnicodeUTF8));
        Capture->setText(QApplication::translate("Inputs", "Capture", 0, QApplication::UnicodeUTF8));
        Display->setText(QApplication::translate("Inputs", "Display", 0, QApplication::UnicodeUTF8));
        Next->setText(QApplication::translate("Inputs", "Next", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Inputs", "Capture Image ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Inputs", "of problem area", 0, QApplication::UnicodeUTF8));
        Scratchy->setText(QApplication::translate("Inputs", "Scratchy", 0, QApplication::UnicodeUTF8));
        Itchy->setText(QApplication::translate("Inputs", "Itchy", 0, QApplication::UnicodeUTF8));
        Painful->setText(QApplication::translate("Inputs", "Painful", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Inputs", "Patient ID", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Inputs: public Ui_Inputs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTS_H
