#ifndef SEND_H
#define SEND_H
#include <QWidget>

namespace Ui {
class Send;
}

class Send : public QWidget
{
    Q_OBJECT

public:
    explicit Send(QWidget *parent = 0);
    ~Send();

private slots:
    void on_send_clicked();

    void on_diagnose_clicked();

private:
    Ui::Send *ui;

};

#endif // SEND_H
