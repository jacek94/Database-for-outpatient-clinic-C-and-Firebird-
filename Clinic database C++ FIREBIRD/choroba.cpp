#include "choroba.h"
#include "ui_choroba.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlQuery>
#include <QFile>
#include <QDebug>


Choroba::Choroba(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Choroba)
{
    ui->setupUi(this);
}

Choroba::~Choroba()
{
    delete ui;
}

void Choroba::on_pushButton_clicked()
{
    QSqlQuery query;





    if(! query.exec("INSERT INTO \"JEDNOSTKA_CHOROBOWA\" (ID_CHOROBY, NAZWA, OPIS , SYMPTOMY , ZALECANE_LEKARSTWA ) "
                   "VALUES (19, 'Zapalenie  oskrzeli', 'Choroba  zakaüna , choroba  wirusowa' , 'Wysoka  gorπczka , wysypka' , 'Fervex , Albendazol' )")){
         QMessageBox::critical(this,tr("error::"),query.lastError().text());

        }

}
