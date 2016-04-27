#include "pacjent.h"
#include "ui_pacjent.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlQuery>
#include <QFile>
#include <QDebug>

Pacjent::Pacjent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pacjent)
{
    ui->setupUi(this);
}

Pacjent::~Pacjent()
{
    delete ui;
}

void Pacjent::on_lineEdit_cursorPositionChanged(int , int )
{

}

void Pacjent::on_pushButton_clicked()
{
    /*QSqlQuery query;

   QString label = ui->lineEdit->text();
     QString label_2 = ui->lineEdit_2->text();
     QString label_3 = ui->lineEdit_3->text();
     QString label_4 = ui->lineEdit_4->text();
     QString label_5 = ui->lineEdit_5->text();
     QString label_6 = ui->lineEdit_6->text();
     QString label_7 = ui->lineEdit_7->text();




  if(! query.exec("INSERT INTO PACJENT (ID_PACJENTA ,IMIE , WIEK , ADRES , NUMER_TELEFONU , PRZYPISANE_LEKARSTWA ,ZDIAGNOZOWANE_CHOROBY  )"
                "VALUES (:ID_PACJENTA ,:IMIE , :WIEK ,:ADRES ,:NUMER_TELEFONU , :PRZYPISANE_LEKARSTWA ,:ZDIAGNOZOWANE_CHOROBY )")){

     query.bindValue(":ID_PACJENTA" , label);
     query.bindValue(":IMIE" , label_2);
     query.bindValue(":WIEK" ,  label_3);
     query.bindValue(":ADRES" , label_4);
     query.bindValue(":NUMER_TELEFONU" , label_5);
     query.bindValue(":PRZYPISANE_LEKARSTWA" , label_6);
     query.bindValue(":ZDIAGNOZOWANE_CHOROBY" , label_7);



     QMessageBox::critical(this,tr("error::"),query.lastError().text());

*/
/* QSqlQuery query;

if(! query.exec("INSERT INTO \"PACJENT\" (ID_PACJENT , IMIE, WIEK , ADRES ,  NUMER_TELEFONU ,PRZYPISANE_LEKARSTWA ,  ZDIAGNOZOWANE_CHOROBY ) "
             "VALUES (30, 'Andrzej  Nowak', 44 , 'Andrzejewo ul Andrzeja 9 ' , '123456789' , 'Fervex' , 'Grypa'  )")){
     QMessageBox::critical(this,tr("error::"),query.lastError().text());*/


}
void Pacjent::on_lineEdit_3_textEdited(QString )
{


}

