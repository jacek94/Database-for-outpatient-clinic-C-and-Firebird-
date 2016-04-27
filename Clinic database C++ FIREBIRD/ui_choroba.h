/********************************************************************************
** Form generated from reading UI file 'choroba.ui'
**
** Created: Sun 14. Feb 18:19:43 2016
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOROBA_H
#define UI_CHOROBA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Choroba
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *spinBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QPushButton *pushButton;

    void setupUi(QDialog *Choroba)
    {
        if (Choroba->objectName().isEmpty())
            Choroba->setObjectName(QString::fromUtf8("Choroba"));
        Choroba->resize(457, 320);
        buttonBox = new QDialogButtonBox(Choroba);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(100, 270, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        spinBox = new QSpinBox(Choroba);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(190, 230, 101, 22));
        label = new QLabel(Choroba);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 230, 81, 20));
        label_2 = new QLabel(Choroba);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 20, 91, 20));
        label_3 = new QLabel(Choroba);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(5, 120, 181, 51));
        textEdit = new QTextEdit(Choroba);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(210, 80, 201, 131));
        textEdit_2 = new QTextEdit(Choroba);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(210, 10, 211, 41));
        pushButton = new QPushButton(Choroba);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(14, 180, 91, 23));

        retranslateUi(Choroba);
        QObject::connect(buttonBox, SIGNAL(accepted()), Choroba, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Choroba, SLOT(reject()));

        QMetaObject::connectSlotsByName(Choroba);
    } // setupUi

    void retranslateUi(QDialog *Choroba)
    {
        Choroba->setWindowTitle(QApplication::translate("Choroba", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Choroba", "ID_LEKARZA :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Choroba", "Nazwa choroby :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Choroba", "Opis , objawy , proponowane leki:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Choroba", "Dodaj  Chorob\304\231", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Choroba: public Ui_Choroba {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOROBA_H
