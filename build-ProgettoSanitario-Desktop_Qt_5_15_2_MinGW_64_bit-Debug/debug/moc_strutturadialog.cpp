/****************************************************************************
** Meta object code from reading C++ file 'strutturadialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ProgettoSanitario/strutturadialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'strutturadialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_strutturaDialog_t {
    QByteArrayData data[9];
    char stringdata0[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_strutturaDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_strutturaDialog_t qt_meta_stringdata_strutturaDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "strutturaDialog"
QT_MOC_LITERAL(1, 16, 36), // "on_lineEditNomeStruttura_text..."
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 4), // "arg1"
QT_MOC_LITERAL(4, 59, 28), // "on_spinBoxGradi_valueChanged"
QT_MOC_LITERAL(5, 88, 29), // "on_spinBoxMinuti_valueChanged"
QT_MOC_LITERAL(6, 118, 25), // "on_spinBox_3_valueChanged"
QT_MOC_LITERAL(7, 144, 30), // "on_pushButtonInserisci_clicked"
QT_MOC_LITERAL(8, 175, 28) // "on_pushButtonAnnulla_clicked"

    },
    "strutturaDialog\0on_lineEditNomeStruttura_textChanged\0"
    "\0arg1\0on_spinBoxGradi_valueChanged\0"
    "on_spinBoxMinuti_valueChanged\0"
    "on_spinBox_3_valueChanged\0"
    "on_pushButtonInserisci_clicked\0"
    "on_pushButtonAnnulla_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_strutturaDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       4,    1,   47,    2, 0x08 /* Private */,
       5,    1,   50,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void strutturaDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<strutturaDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_lineEditNomeStruttura_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_spinBoxGradi_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_spinBoxMinuti_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_spinBox_3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pushButtonInserisci_clicked(); break;
        case 5: _t->on_pushButtonAnnulla_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject strutturaDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_strutturaDialog.data,
    qt_meta_data_strutturaDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *strutturaDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *strutturaDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_strutturaDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int strutturaDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
