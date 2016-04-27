#ifndef RECEPTA_H
#define RECEPTA_H

#include <QDialog>

namespace Ui {
    class recepta;
}

class recepta : public QDialog
{
    Q_OBJECT

public:
    explicit recepta(QWidget *parent = 0);
    ~recepta();

private:
    Ui::recepta *ui;

private slots:
    void on_pushButton_clicked();
};

#endif // RECEPTA_H
