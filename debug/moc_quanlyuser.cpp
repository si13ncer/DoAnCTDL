/****************************************************************************
** Meta object code from reading C++ file 'quanlyuser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../quanlyuser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quanlyuser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_quanlyuser_t {
    QByteArrayData data[8];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_quanlyuser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_quanlyuser_t qt_meta_stringdata_quanlyuser = {
    {
QT_MOC_LITERAL(0, 0, 10), // "quanlyuser"
QT_MOC_LITERAL(1, 11, 17), // "on_btnCPW_pressed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 22), // "on_btnCapquyen_pressed"
QT_MOC_LITERAL(4, 53, 21), // "on_btnDeluser_pressed"
QT_MOC_LITERAL(5, 75, 20), // "on_cBxUser_activated"
QT_MOC_LITERAL(6, 96, 4), // "arg1"
QT_MOC_LITERAL(7, 101, 16) // "on_btnTt_pressed"

    },
    "quanlyuser\0on_btnCPW_pressed\0\0"
    "on_btnCapquyen_pressed\0on_btnDeluser_pressed\0"
    "on_cBxUser_activated\0arg1\0on_btnTt_pressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_quanlyuser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    1,   42,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void quanlyuser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<quanlyuser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnCPW_pressed(); break;
        case 1: _t->on_btnCapquyen_pressed(); break;
        case 2: _t->on_btnDeluser_pressed(); break;
        case 3: _t->on_cBxUser_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_btnTt_pressed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject quanlyuser::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_quanlyuser.data,
    qt_meta_data_quanlyuser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *quanlyuser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *quanlyuser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_quanlyuser.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int quanlyuser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
