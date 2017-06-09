#ifndef BASIC_H
#define BASIC_H
#include "symptoms.h"
#include <QWidget>

namespace Ui {
class basic;
}

class basic : public QWidget
{
    Q_OBJECT

public:
    explicit basic(QWidget *parent = 0);
    ~basic();
private slots:
    void on_HBM_clicked();
    void on_display1_clicked();
    void on_Next_clicked();
    void on_Temperature_clicked();

private:
    Ui::basic *ui;
    Symptoms *symptom;
};
#endif // BASIC_H
