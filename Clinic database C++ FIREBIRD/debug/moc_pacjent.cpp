/****************************************************************************
** Meta object code from reading C++ file 'pacjent.h'
**
** Created: Wed 24. Feb 21:01:27 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pacjent.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pacjent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Pacjent[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      43,    8,    8,    8, 0x08,
      69,   67,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Pacjent[] = {
    "Pacjent\0\0on_lineEdit_3_textEdited(QString)\0"
    "on_pushButton_clicked()\0,\0"
    "on_lineEdit_cursorPositionChanged(int,int)\0"
};

const QMetaObject Pacjent::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Pacjent,
      qt_meta_data_Pacjent, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Pacjent::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Pacjent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Pacjent::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Pacjent))
        return static_cast<void*>(const_cast< Pacjent*>(this));
    return QDialog::qt_metacast(_clname);
}

int Pacjent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_lineEdit_3_textEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: on_pushButton_clicked(); break;
        case 2: on_lineEdit_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
