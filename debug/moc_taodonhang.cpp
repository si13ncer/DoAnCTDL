/****************************************************************************
** Meta object code from reading C++ file 'taodonhang.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../taodonhang.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taodonhang.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_taodonhang_t {
    QByteArrayData data[18];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_taodonhang_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_taodonhang_t qt_meta_stringdata_taodonhang = {
    {
QT_MOC_LITERAL(0, 0, 10), // "taodonhang"
QT_MOC_LITERAL(1, 11, 17), // "on_btnHuy_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "on_btnLuu_clicked"
QT_MOC_LITERAL(4, 48, 25), // "on_tblGiohang_itemChanged"
QT_MOC_LITERAL(5, 74, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(6, 92, 4), // "item"
QT_MOC_LITERAL(7, 97, 24), // "on_btnThemvaogio_clicked"
QT_MOC_LITERAL(8, 122, 24), // "on_btnXoakhoigio_clicked"
QT_MOC_LITERAL(9, 147, 26), // "on_spbSoluong_valueChanged"
QT_MOC_LITERAL(10, 174, 4), // "arg1"
QT_MOC_LITERAL(11, 179, 32), // "on_cbxTenhang_currentTextChanged"
QT_MOC_LITERAL(12, 212, 23), // "on_cbxVoucher_activated"
QT_MOC_LITERAL(13, 236, 20), // "on_cbxLoai_activated"
QT_MOC_LITERAL(14, 257, 5), // "index"
QT_MOC_LITERAL(15, 263, 23), // "on_cbxDanhmuc_activated"
QT_MOC_LITERAL(16, 287, 23), // "on_cbxTenhang_activated"
QT_MOC_LITERAL(17, 311, 25) // "on_tblGiohang_itemClicked"

    },
    "taodonhang\0on_btnHuy_clicked\0\0"
    "on_btnLuu_clicked\0on_tblGiohang_itemChanged\0"
    "QTableWidgetItem*\0item\0on_btnThemvaogio_clicked\0"
    "on_btnXoakhoigio_clicked\0"
    "on_spbSoluong_valueChanged\0arg1\0"
    "on_cbxTenhang_currentTextChanged\0"
    "on_cbxVoucher_activated\0on_cbxLoai_activated\0"
    "index\0on_cbxDanhmuc_activated\0"
    "on_cbxTenhang_activated\0"
    "on_tblGiohang_itemClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_taodonhang[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    1,   76,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      11,    1,   84,    2, 0x08 /* Private */,
      12,    1,   87,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      15,    1,   93,    2, 0x08 /* Private */,
      16,    1,   96,    2, 0x08 /* Private */,
      17,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void taodonhang::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<taodonhang *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnHuy_clicked(); break;
        case 1: _t->on_btnLuu_clicked(); break;
        case 2: _t->on_tblGiohang_itemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->on_btnThemvaogio_clicked(); break;
        case 4: _t->on_btnXoakhoigio_clicked(); break;
        case 5: _t->on_spbSoluong_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_cbxTenhang_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_cbxVoucher_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_cbxLoai_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_cbxDanhmuc_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_cbxTenhang_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_tblGiohang_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject taodonhang::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_taodonhang.data,
    qt_meta_data_taodonhang,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *taodonhang::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *taodonhang::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_taodonhang.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int taodonhang::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
