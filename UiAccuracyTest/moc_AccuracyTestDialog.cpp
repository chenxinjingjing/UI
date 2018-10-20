/****************************************************************************
** Meta object code from reading C++ file 'AccuracyTestDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AccuracyTestDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccuracyTestDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AccuracyTestDialog_t {
    QByteArrayData data[6];
    char stringdata[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AccuracyTestDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AccuracyTestDialog_t qt_meta_stringdata_AccuracyTestDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AccuracyTestDialog"
QT_MOC_LITERAL(1, 19, 26), // "on_photo_collecton_clicked"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 24), // "on_handinput_Gps_clicked"
QT_MOC_LITERAL(4, 72, 23), // "on_camera_param_clicked"
QT_MOC_LITERAL(5, 96, 30) // "on_continuous_shooting_clicked"

    },
    "AccuracyTestDialog\0on_photo_collecton_clicked\0"
    "\0on_handinput_Gps_clicked\0"
    "on_camera_param_clicked\0"
    "on_continuous_shooting_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AccuracyTestDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AccuracyTestDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AccuracyTestDialog *_t = static_cast<AccuracyTestDialog *>(_o);
        switch (_id) {
        case 0: _t->on_photo_collecton_clicked(); break;
        case 1: _t->on_handinput_Gps_clicked(); break;
        case 2: _t->on_camera_param_clicked(); break;
        case 3: _t->on_continuous_shooting_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AccuracyTestDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AccuracyTestDialog.data,
      qt_meta_data_AccuracyTestDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AccuracyTestDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccuracyTestDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AccuracyTestDialog.stringdata))
        return static_cast<void*>(const_cast< AccuracyTestDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AccuracyTestDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
