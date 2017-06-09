/********************************************************************************
** Form generated from reading UI file 'send.ui'
**
** Created: Fri Jun 3 19:34:00 2016
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEND_H
#define UI_SEND_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Send
{
public:
    QTextEdit *textEdit;
    QPushButton *send;
    QLabel *label;
    QPushButton *diagnose;

    void setupUi(QWidget *Send)
    {
        if (Send->objectName().isEmpty())
            Send->setObjectName(QString::fromUtf8("Send"));
        Send->resize(470, 262);
        textEdit = new QTextEdit(Send);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 30, 411, 151));
        send = new QPushButton(Send);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(310, 210, 99, 27));
        label = new QLabel(Send);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 10, 131, 17));
        diagnose = new QPushButton(Send);
        diagnose->setObjectName(QString::fromUtf8("diagnose"));
        diagnose->setGeometry(QRect(70, 210, 99, 27));

        retranslateUi(Send);

        QMetaObject::connectSlotsByName(Send);
    } // setupUi

    void retranslateUi(QWidget *Send)
    {
        Send->setWindowTitle(QApplication::translate("Send", "Form", 0, QApplication::UnicodeUTF8));
        send->setText(QApplication::translate("Send", "Send", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        diagnose->setText(QApplication::translate("Send", "Diagnose", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Send: public Ui_Send {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEND_H
