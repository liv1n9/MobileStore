/****************************************************************************
** Meta object code from reading C++ file 'mainwindowcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MobileStore/mainwindowcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindowcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindowController_t {
    QByteArrayData data[18];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindowController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindowController_t qt_meta_stringdata_MainWindowController = {
    {
QT_MOC_LITERAL(0, 0, 20), // "MainWindowController"
QT_MOC_LITERAL(1, 21, 18), // "on_popular_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 19), // "on_incPrice_clicked"
QT_MOC_LITERAL(4, 61, 19), // "on_decPrice_clicked"
QT_MOC_LITERAL(5, 81, 25), // "on_username_returnPressed"
QT_MOC_LITERAL(6, 107, 25), // "on_password_returnPressed"
QT_MOC_LITERAL(7, 133, 16), // "on_login_clicked"
QT_MOC_LITERAL(8, 150, 17), // "on_logout_clicked"
QT_MOC_LITERAL(9, 168, 28), // "on_mainWidget_currentChanged"
QT_MOC_LITERAL(10, 197, 5), // "index"
QT_MOC_LITERAL(11, 203, 30), // "on_searchKeyword_returnPressed"
QT_MOC_LITERAL(12, 234, 17), // "on_search_clicked"
QT_MOC_LITERAL(13, 252, 23), // "on_username_textChanged"
QT_MOC_LITERAL(14, 276, 4), // "arg1"
QT_MOC_LITERAL(15, 281, 23), // "on_password_textChanged"
QT_MOC_LITERAL(16, 305, 28), // "on_searchKeyword_textChanged"
QT_MOC_LITERAL(17, 334, 20) // "on__register_clicked"

    },
    "MainWindowController\0on_popular_clicked\0"
    "\0on_incPrice_clicked\0on_decPrice_clicked\0"
    "on_username_returnPressed\0"
    "on_password_returnPressed\0on_login_clicked\0"
    "on_logout_clicked\0on_mainWidget_currentChanged\0"
    "index\0on_searchKeyword_returnPressed\0"
    "on_search_clicked\0on_username_textChanged\0"
    "arg1\0on_password_textChanged\0"
    "on_searchKeyword_textChanged\0"
    "on__register_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindowController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    1,   91,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    1,   96,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,
      16,    1,  102,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,

       0        // eod
};

void MainWindowController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindowController *_t = static_cast<MainWindowController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_popular_clicked(); break;
        case 1: _t->on_incPrice_clicked(); break;
        case 2: _t->on_decPrice_clicked(); break;
        case 3: _t->on_username_returnPressed(); break;
        case 4: _t->on_password_returnPressed(); break;
        case 5: _t->on_login_clicked(); break;
        case 6: _t->on_logout_clicked(); break;
        case 7: _t->on_mainWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_searchKeyword_returnPressed(); break;
        case 9: _t->on_search_clicked(); break;
        case 10: _t->on_username_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_password_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_searchKeyword_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->on__register_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindowController::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindowController.data,
      qt_meta_data_MainWindowController,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindowController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindowController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindowController.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "AccountsDataSet"))
        return static_cast< AccountsDataSet*>(this);
    if (!strcmp(_clname, "ProductsDataSet"))
        return static_cast< ProductsDataSet*>(this);
    if (!strcmp(_clname, "RegisterDataSet"))
        return static_cast< RegisterDataSet*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindowController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
