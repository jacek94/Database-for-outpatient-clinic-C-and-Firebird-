/********************************************************************************
** Form generated from reading UI file 'wizyta.ui'
**
** Created: Sun 14. Feb 18:19:43 2016
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIZYTA_H
#define UI_WIZYTA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_Wizyta
{
public:
    QDialogButtonBox *buttonBox;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QCalendarWidget *calendarWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton;

    void setupUi(QDialog *Wizyta)
    {
        if (Wizyta->objectName().isEmpty())
            Wizyta->setObjectName(QString::fromUtf8("Wizyta"));
        Wizyta->resize(499, 300);
        buttonBox = new QDialogButtonBox(Wizyta);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        dateEdit = new QDateEdit(Wizyta);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(110, 10, 121, 22));
        timeEdit = new QTimeEdit(Wizyta);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(110, 60, 121, 22));
        spinBox = new QSpinBox(Wizyta);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(110, 100, 121, 22));
        spinBox_2 = new QSpinBox(Wizyta);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(110, 150, 121, 22));
        calendarWidget = new QCalendarWidget(Wizyta);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(270, 10, 216, 155));
        label = new QLabel(Wizyta);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 71, 20));
        label_2 = new QLabel(Wizyta);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 81, 16));
        label_3 = new QLabel(Wizyta);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 81, 20));
        label_4 = new QLabel(Wizyta);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 150, 81, 16));
        pushButton = new QPushButton(Wizyta);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 230, 91, 23));

        retranslateUi(Wizyta);
        QObject::connect(buttonBox, SIGNAL(accepted()), Wizyta, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Wizyta, SLOT(reject()));

        QMetaObject::connectSlotsByName(Wizyta);
    } // setupUi

    void retranslateUi(QDialog *Wizyta)
    {
        Wizyta->setWindowTitle(QApplication::translate("Wizyta", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Wizyta", "Data wizyty :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Wizyta", "Godzina wizyty :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Wizyta", "ID_LEKARZA :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Wizyta", "ID_PACJENTA:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Wizyta", "Zapisz  wizyte", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Wizyta: public Ui_Wizyta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIZYTA_H
