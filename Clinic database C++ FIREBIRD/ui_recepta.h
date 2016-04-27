/********************************************************************************
** Form generated from reading UI file 'recepta.ui'
**
** Created: Sun 14. Feb 18:19:43 2016
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEPTA_H
#define UI_RECEPTA_H

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

class Ui_recepta
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton;

    void setupUi(QDialog *recepta)
    {
        if (recepta->objectName().isEmpty())
            recepta->setObjectName(QString::fromUtf8("recepta"));
        recepta->resize(524, 342);
        buttonBox = new QDialogButtonBox(recepta);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(180, 310, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(recepta);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 20, 291, 20));
        lineEdit_2 = new QLineEdit(recepta);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 60, 291, 21));
        label = new QLabel(recepta);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 20, 91, 16));
        label_2 = new QLabel(recepta);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 60, 46, 13));
        lineEdit_3 = new QLineEdit(recepta);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 160, 151, 141));
        lineEdit_4 = new QLineEdit(recepta);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(180, 160, 161, 141));
        lineEdit_5 = new QLineEdit(recepta);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(370, 160, 141, 141));
        label_3 = new QLabel(recepta);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 111, 16));
        label_4 = new QLabel(recepta);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 130, 141, 16));
        label_5 = new QLabel(recepta);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 130, 81, 16));
        pushButton = new QPushButton(recepta);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 310, 75, 23));

        retranslateUi(recepta);
        QObject::connect(buttonBox, SIGNAL(accepted()), recepta, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), recepta, SLOT(reject()));

        QMetaObject::connectSlotsByName(recepta);
    } // setupUi

    void retranslateUi(QDialog *recepta)
    {
        recepta->setWindowTitle(QApplication::translate("recepta", "Dialog", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("recepta", "Damian  Kowalski", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QString());
        label->setText(QApplication::translate("recepta", "Lekarz :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("recepta", "Pacjent", 0, QApplication::UnicodeUTF8));
        lineEdit_3->setText(QString());
        lineEdit_4->setText(QString());
        label_3->setText(QApplication::translate("recepta", "Wykryte choroby :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("recepta", "Rekomendowane lekarstwa:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("recepta", "Data  wizyty :", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("recepta", "Recepta", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class recepta: public Ui_recepta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEPTA_H
