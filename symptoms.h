#ifndef SYMPTOMS_H
#define SYMPTOMS_H
#include "send.h"
#include <QWidget>

namespace Ui {
class Symptoms;
}

class Symptoms : public QWidget
{
    Q_OBJECT

public:
    explicit Symptoms(QWidget *parent = 0);
    ~Symptoms();

private slots:
    void on_Enter_clicked();


private:
    Ui::Symptoms *ui;
    Send *send;
};

#endif // SYMPTOMS_H
