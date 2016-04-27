#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QMap>

class QSqlQueryModel;
class QModelIndex;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    void xd();
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
    void connectSignals();
    
private:
    Ui::MainWindow *ui;
    
    QString m_sDBHost;
    QString m_sDBPassword;
    QString m_sDBUser;
    QString m_sDBFile;
    int m_Dialect;
    QString m_DBCharset;
    
    QSqlDatabase db;
    QSqlQueryModel * tablemodel;
    QSqlQueryModel * fieldsmodel;
    
    QString tablename;
    QString m_sClassname;
    
public slots:
    void ConnectToDB();
    void ReadTables();
    void ReadFields(const QModelIndex & );

private slots:
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
