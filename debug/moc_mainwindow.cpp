/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 22), // "on_actTaodon_triggered"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_actTaouser_triggered"
QT_MOC_LITERAL(4, 59, 23), // "on_actQliUser_triggered"
QT_MOC_LITERAL(5, 83, 25), // "on_actTrangthai_triggered"
QT_MOC_LITERAL(6, 109, 21), // "on_actDsdon_triggered"
QT_MOC_LITERAL(7, 131, 24), // "on_actNhaphang_triggered"
QT_MOC_LITERAL(8, 156, 10), // "closeEvent"
QT_MOC_LITERAL(9, 167, 12), // "QCloseEvent*"
QT_MOC_LITERAL(10, 180, 5), // "event"
QT_MOC_LITERAL(11, 186, 21), // "on_actTaoVc_triggered"
QT_MOC_LITERAL(12, 208, 23), // "on_actDanhmuc_triggered"
QT_MOC_LITERAL(13, 232, 21), // "on_actQliVc_triggered"
QT_MOC_LITERAL(14, 254, 28), // "on_actionDoanh_thu_triggered"
QT_MOC_LITERAL(15, 283, 18), // "on_btnload_clicked"
QT_MOC_LITERAL(16, 302, 29), // "on_cbxplh_currentIndexChanged"
QT_MOC_LITERAL(17, 332, 4) // "arg1"

    },
    "MainWindow\0on_actTaodon_triggered\0\0"
    "on_actTaouser_triggered\0on_actQliUser_triggered\0"
    "on_actTrangthai_triggered\0"
    "on_actDsdon_triggered\0on_actNhaphang_triggered\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "on_actTaoVc_triggered\0on_actDanhmuc_triggered\0"
    "on_actQliVc_triggered\0"
    "on_actionDoanh_thu_triggered\0"
    "on_btnload_clicked\0on_cbxplh_currentIndexChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    0,   91,    2, 0x08 /* Private */,
      15,    0,   92,    2, 0x08 /* Private */,
      16,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actTaodon_triggered(); break;
        case 1: _t->on_actTaouser_triggered(); break;
        case 2: _t->on_actQliUser_triggered(); break;
        case 3: _t->on_actTrangthai_triggered(); break;
        case 4: _t->on_actDsdon_triggered(); break;
        case 5: _t->on_actNhaphang_triggered(); break;
        case 6: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 7: _t->on_actTaoVc_triggered(); break;
        case 8: _t->on_actDanhmuc_triggered(); break;
        case 9: _t->on_actQliVc_triggered(); break;
        case 10: _t->on_actionDoanh_thu_triggered(); break;
        case 11: _t->on_btnload_clicked(); break;
        case 12: _t->on_cbxplh_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
