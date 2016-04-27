#ifndef CHOROBA_H
#define CHOROBA_H

#include <QDialog>

namespace Ui {
    class Choroba;
}

class Choroba : public QDialog
{
    Q_OBJECT

public:
    explicit Choroba(QWidget *parent = 0);
    ~Choroba();

private:
    Ui::Choroba *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // CHOROBA_H
