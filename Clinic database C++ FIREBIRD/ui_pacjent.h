/********************************************************************************
** Form generated from reading UI file 'pacjent.ui'
**
** Created: Wed 24. Feb 23:18:55 2016
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACJENT_H
#define UI_PACJENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Pacjent
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *Pacjent)
    {
        if (Pacjent->objectName().isEmpty())
            Pacjent->setObjectName(QString::fromUtf8("Pacjent"));
        Pacjent->resize(530, 350);
        buttonBox = new QDialogButtonBox(Pacjent);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(180, 300, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        pushButton = new QPushButton(Pacjent);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 300, 75, 23));
        pushButton_2 = new QPushButton(Pacjent);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(190, 300, 75, 23));
        lineEdit = new QLineEdit(Pacjent);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 20, 181, 31));
        lineEdit_2 = new QLineEdit(Pacjent);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 60, 181, 31));
        lineEdit_3 = new QLineEdit(Pacjent);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(190, 100, 181, 31));
        lineEdit_4 = new QLineEdit(Pacjent);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 140, 181, 31));
        lineEdit_5 = new QLineEdit(Pacjent);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(180, 180, 191, 31));
        lineEdit_6 = new QLineEdit(Pacjent);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(190, 220, 181, 31));
        lineEdit_7 = new QLineEdit(Pacjent);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(190, 270, 171, 21));
        label = new QLabel(Pacjent);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 30, 71, 20));
        label_2 = new QLabel(Pacjent);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 70, 46, 13));
        label_3 = new QLabel(Pacjent);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 110, 46, 13));
        label_4 = new QLabel(Pacjent);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 150, 46, 13));
        label_5 = new QLabel(Pacjent);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 190, 101, 20));
        label_6 = new QLabel(Pacjent);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 230, 141, 20));
        label_7 = new QLabel(Pacjent);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 270, 151, 16));

        retranslateUi(Pacjent);
        QObject::connect(buttonBox, SIGNAL(accepted()), Pacjent, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Pacjent, SLOT(reject()));

        QMetaObject::connectSlotsByName(Pacjent);
    } // setupUi

    void retranslateUi(QDialog *Pacjent)
    {
        Pacjent->setWindowTitle(QApplication::translate("Pacjent", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Pacjent", "Zapisz", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Pacjent", "Usu\305\204", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Pacjent", "ID_PACJENTA", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Pacjent", "Imie", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Pacjent", "WIEK", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Pacjent", "ADRES", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Pacjent", "NUMER_TELEFONU", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Pacjent", "PRZYPISANE_LEKARSTWA", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Pacjent", "ZDIAGNOZOWANE_CHOROBY", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Pacjent: public Ui_Pacjent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACJENT_H
