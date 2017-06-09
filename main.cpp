#include "inputs.h"
#include <QApplication>
#include <QGraphicsScene>
#define ID 101

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Inputs w;
    w.show();

    return a.exec();
}
