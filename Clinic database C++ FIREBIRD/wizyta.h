#ifndef WIZYTA_H
#define WIZYTA_H

#include <QDialog>

namespace Ui {
    class Wizyta;
}

class Wizyta : public QDialog
{
    Q_OBJECT

public:
    explicit Wizyta(QWidget *parent = 0);
    ~Wizyta();

private:
    Ui::Wizyta *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // WIZYTA_H
