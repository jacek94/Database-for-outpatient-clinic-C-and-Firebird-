#include "wizyta.h"
#include "ui_wizyta.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlQuery>
#include <QFile>
#include <QDebug>


Wizyta::Wizyta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Wizyta)
{
    ui->setupUi(this);
}

Wizyta::~Wizyta()
{
    delete ui;
}

void Wizyta::on_pushButton_clicked()
{

    QSqlQuery query;




    
	
	
	
	
	
	
	
	
	
	
	
	if(! query.exec("INSERT INTO \"WIZYTA\" (ID_WIZYTY, ID_LEKARZA, DATA_WIZYTY , IMIE_PACJENTA , IMIE_LEKARZA ) "
                   "VALUES (29, 6, '10.01.2010' , 'Szymon Andrzej' , 'Andrzej Nowik' )")){
         QMessageBox::critical(this,tr("error::"),query.lastError().text());

        }

}
