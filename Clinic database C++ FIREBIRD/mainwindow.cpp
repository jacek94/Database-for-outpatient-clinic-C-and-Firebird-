#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlTableModel>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlQuery>
#include <QFile>
#include <QDebug>
#include "wizyta.h"
#include "choroba.h"
#include "recepta.h"
#include "pacjent.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget(ui->centralWidget);
    ui->centralWidget->layout();
    connectSignals();
    
    db = QSqlDatabase::addDatabase("QIBASE");
    tablemodel = NULL;
    fieldsmodel = NULL;

    ConnectToDB();

    ReadTables();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete tablemodel;
}

void MainWindow::ConnectToDB()
{
    db.setHostName("localhost");
    db.setDatabaseName("C:\\1001.FDB");
    db.setUserName("SYSDBA");
    db.setPassword("masterkey");
    db.setConnectOptions("ISC_DPB_LC_CTYPE=UNICODE_FFS");
    
    if(!db.open())
        QMessageBox::critical(this, "No Connection", db.lastError().text() );
    else
    {
        if(tablemodel == NULL)
        {
            tablemodel = new QSqlTableModel();
            fieldsmodel = new QSqlTableModel();
        }
    }
}
    
void MainWindow::ReadTables()
{

    tablemodel->setQuery("SELECT RDB$RELATION_NAME FROM RDB$RELATIONS WHERE RDB$RELATION_NAME NOT STARTS WITH 'RDB$' AND RDB$RELATION_NAME NOT STARTS WITH 'MON$'");
    tablemodel->setHeaderData(0, Qt::Horizontal, "Tablename");
    tablemodel->query();
    ui->tvTables->setModel(tablemodel);
    ui->tvTables->show();
}

void MainWindow::ReadFields(const QModelIndex & index)
{
    QString s = tablemodel->record(index.row()).value(index.column()).toString();

    QString s2;
    for (int i=0; i<s.length(); i++){
        if (s[i].isLetter()||s[i]=='_'){
            s2.append(s[i]);
        }
    }

    fieldsmodel->setQuery("select * from "+s2);
    fieldsmodel->setHeaderData(0, Qt::Horizontal, "ID");
    fieldsmodel->query();
    ui->tvFields->setModel(fieldsmodel);
    ui->tvFields->show();
}


void MainWindow::connectSignals()
{
    connect(ui->tvTables, SIGNAL(clicked(QModelIndex)), SLOT(ReadFields(QModelIndex)));
}

void MainWindow::on_pushButton_clicked()
{
    Wizyta wizyta;
    wizyta.setModal(true);
    wizyta.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
   Choroba choroba;
   choroba.setModal(true);
   choroba.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    recepta recepta;
    recepta.setModal(true);
    recepta.exec();
}

void MainWindow::on_pushButton_4_clicked()
{

    Pacjent pacjent;
    pacjent.setModal(true);
    pacjent.exec();

}







void MainWindow::on_pushButton_5_clicked()
{

}
