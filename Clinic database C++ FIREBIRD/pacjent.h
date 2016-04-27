#ifndef PACJENT_H
#define PACJENT_H

#include <QDialog>

namespace Ui {
    class Pacjent;
}

class Pacjent : public QDialog
{
    Q_OBJECT

public:
    explicit Pacjent(QWidget *parent = 0);
    ~Pacjent();

private:
    Ui::Pacjent *ui;

private slots:
    void on_lineEdit_3_textEdited(QString );
    void on_pushButton_clicked();
    void on_lineEdit_cursorPositionChanged(int , int );
};

#endif // PACJENT_H
