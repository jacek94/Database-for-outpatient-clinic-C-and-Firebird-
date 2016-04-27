#include "recepta.h"
#include "ui_recepta.h"
#include <QTextDocument>
#include <QPrinter>
#include <QApplication>
#include "QSqlTableModel"
#include "mainwindow.h"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "QTextDocument"


recepta::recepta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recepta)
{
    ui->setupUi(this);
}

recepta::~recepta()
{
    delete ui;
}

void recepta::on_pushButton_clicked()
{







   /QItemSelectionModel* select = ui->tableView->selectionModel();
               QString id_wizyty = select->selectedRows().at(0).data().toString();
               QString data = select->selectedRows(1).at(0).data().toString();
               QString id_pacjenta = select->selectedRows(2).at(0).data().toString();
               QString id_lekarza = select->selectedRows(3).at(0).data().toString();
               QString godzina = select->selectedRows(4).at(0).data().toString();

               QTextDocument doc;

                       doc.setHtml(      "   <html>\n"
                                                                     "    <head>\n"
                                                                     "        <title>Recepta</title>\n"
                                                                     "        <meta charset=\"UTF-16\"><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
                                                                     "    </head>\n"
                                                                     "    <body>\n"
                                                                     "        <table style=\"width: 400px;border: 1px solid black;border-collapse: collapse\">\n"
                                                                     "            <tr>\n"
                                                                     "                <td colspan=\"2\" style=\"border:1px solid black;display:\">\n"
                                                                     "                    <br>Wizyta numer:"+ id_wizyty +"<br>"  "\n"
                                                                     "                    <br>Pacjent:"+ id_pacjenta +"<br>"  "\n" "\n" "\n"
                                                                     "                    <br>Numer ubezpieczenia: ""\n"
                                                                     "                    <br>Dzien: " + data + "\n"
                                                                     "                     <br>Godzina: " + godzina + "\n"
                                                                     "                    <\br>\n"
                                                                     "                </td>\n"
                                                                     "            <tr>\n"
                                                                     "                <td colspan=\"2\" style=\"border:1px solid black;height: 300px\">\n"
                                                                     "                    <br>\n"
                                                                     "                </td>\n"
                                                                     "            </tr>\n"
                                                                     "            <tr style=\"border:1px solid black\"><td style=\"border:1px solid black\">\n"
                                                                     "                    <br>\n"
                                                                     "                </td>\n"
                                                                     "                <td style=\"border:1px solid black\">\n"
                                                                     "                    <b>Lekarz: </b>" + id_lekarza + "\n"
                                                                     "                </td>\n"
                                                                     "            </tr>\n"
                                                                     "        </table>\n"
                                                                     "    </body>\n"
                                                                     "</html>");

           QPrinter printer(QPrinter::HighResolution);
           printer.setOutputFileName("C:\\Users\\ATR\\Desktop\\Przychodnia baza danych C++123\\wizyta.pdf");
           printer.setOutputFormat(QPrinter::PdfFormat);
           doc.print(&printer);



































     QTextDocument doc;
          doc.setHtml( "<p>Recepta  "
                       "Lekarz  :  Damian  Kowalski .</p>"
                       "<Pacjent : Andrzej Nowak</b> "
                       "<font size=+2></font> <i>Wykryte  choroby : Cukrzyca</i> </p>"
                       "<p>Rekomendowane  lekarstwa:   akarboza  "
                       "Data  wizyty : 02.02.2014</p>" );
           QPrinter printer;
           printer.setOutputFileName("C:\\Users\\ATR\\Desktop\\Przychodnia baza danych C++123\\wizyta.pdf");
           printer.setOutputFormat(QPrinter::PdfFormat);
           doc.print(&printer);
           printer.newPage();


}
