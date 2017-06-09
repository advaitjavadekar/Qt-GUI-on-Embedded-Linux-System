#ifndef INPUTS_H
#define INPUTS_H
#include "basic.h"
#include<QtGui>
#include<QGraphicsScene>


#include <QMainWindow>

namespace Ui {
class Inputs;
}

class Inputs : public QMainWindow
{
    Q_OBJECT

public:

    explicit Inputs(QWidget *parent = 0);
    ~Inputs();


private slots:
    void on_Capture_clicked();

    void on_Display_clicked();

    void on_Next_clicked();

private:
    Ui::Inputs *ui;
    basic *Basics;
    QPixmap image;
    QImage  *imageObject;
    QGraphicsScene *scene;
};

#endif // INPUTS_H
