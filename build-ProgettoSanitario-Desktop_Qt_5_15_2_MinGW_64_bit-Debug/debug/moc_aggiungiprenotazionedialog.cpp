/****************************************************************************
** Meta object code from reading C++ file 'aggiungiprenotazionedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ProgettoSanitario/aggiungiprenotazionedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'aggiungiprenotazionedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_aggiungiPrenotazioneDialog_t {
    QByteArrayData data[11];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_aggiungiPrenotazioneDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_aggiungiPrenotazioneDialog_t qt_meta_stringdata_aggiungiPrenotazioneDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "aggiungiPrenotazioneDialog"
QT_MOC_LITERAL(1, 27, 25), // "on_nomeUtente_textChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 4), // "arg1"
QT_MOC_LITERAL(4, 59, 27), // "on_radioButtonEsame_clicked"
QT_MOC_LITERAL(5, 87, 28), // "on_radioButtonVisita_clicked"
QT_MOC_LITERAL(6, 116, 29), // "on_spinBoxOrario_valueChanged"
QT_MOC_LITERAL(7, 146, 25), // "on_lineEdit_2_textChanged"
QT_MOC_LITERAL(8, 172, 26), // "on_pushButtonCerca_clicked"
QT_MOC_LITERAL(9, 199, 28), // "on_pushButtonPrenota_clicked"
QT_MOC_LITERAL(10, 228, 23) // "on_pushButton_2_clicked"

    },
    "aggiungiPrenotazioneDialog\0"
    "on_nomeUtente_textChanged\0\0arg1\0"
    "on_radioButtonEsame_clicked\0"
    "on_radioButtonVisita_clicked\0"
    "on_spinBoxOrario_valueChanged\0"
    "on_lineEdit_2_textChanged\0"
    "on_pushButtonCerca_clicked\0"
    "on_pushButtonPrenota_clicked\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_aggiungiPrenotazioneDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x08 /* Private */,
       4,    0,   57,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       7,    1,   62,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void aggiungiPrenotazioneDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<aggiungiPrenotazioneDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_nomeUtente_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_radioButtonEsame_clicked(); break;
        case 2: _t->on_radioButtonVisita_clicked(); break;
        case 3: _t->on_spinBoxOrario_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_lineEdit_2_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_pushButtonCerca_clicked(); break;
        case 6: _t->on_pushButtonPrenota_clicked(); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject aggiungiPrenotazioneDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_aggiungiPrenotazioneDialog.data,
    qt_meta_data_aggiungiPrenotazioneDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *aggiungiPrenotazioneDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *aggiungiPrenotazioneDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_aggiungiPrenotazioneDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int aggiungiPrenotazioneDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
