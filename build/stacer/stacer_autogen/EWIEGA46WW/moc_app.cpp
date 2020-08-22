/****************************************************************************
** Meta object code from reading C++ file 'app.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../stacer/app.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'app.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_App_t {
    QByteArrayData data[21];
    char stringdata0[352];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_App_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_App_t qt_meta_stringdata_App = {
    {
QT_MOC_LITERAL(0, 0, 3), // "App"
QT_MOC_LITERAL(1, 4, 4), // "init"
QT_MOC_LITERAL(2, 9, 0), // ""
QT_MOC_LITERAL(3, 10, 9), // "pageClick"
QT_MOC_LITERAL(4, 20, 8), // "QWidget*"
QT_MOC_LITERAL(5, 29, 6), // "widget"
QT_MOC_LITERAL(6, 36, 5), // "slide"
QT_MOC_LITERAL(7, 42, 18), // "clickSidebarButton"
QT_MOC_LITERAL(8, 61, 9), // "pageTitle"
QT_MOC_LITERAL(9, 71, 6), // "isShow"
QT_MOC_LITERAL(10, 78, 18), // "on_btnDash_clicked"
QT_MOC_LITERAL(11, 97, 27), // "on_btnSystemCleaner_clicked"
QT_MOC_LITERAL(12, 125, 25), // "on_btnStartupApps_clicked"
QT_MOC_LITERAL(13, 151, 22), // "on_btnServices_clicked"
QT_MOC_LITERAL(14, 174, 25), // "on_btnUninstaller_clicked"
QT_MOC_LITERAL(15, 200, 21), // "on_btnHelpers_clicked"
QT_MOC_LITERAL(16, 222, 23), // "on_btnResources_clicked"
QT_MOC_LITERAL(17, 246, 23), // "on_btnProcesses_clicked"
QT_MOC_LITERAL(18, 270, 22), // "on_btnSettings_clicked"
QT_MOC_LITERAL(19, 293, 27), // "on_btnGnomeSettings_clicked"
QT_MOC_LITERAL(20, 321, 30) // "on_btnAptSourceManager_clicked"

    },
    "App\0init\0\0pageClick\0QWidget*\0widget\0"
    "slide\0clickSidebarButton\0pageTitle\0"
    "isShow\0on_btnDash_clicked\0"
    "on_btnSystemCleaner_clicked\0"
    "on_btnStartupApps_clicked\0"
    "on_btnServices_clicked\0on_btnUninstaller_clicked\0"
    "on_btnHelpers_clicked\0on_btnResources_clicked\0"
    "on_btnProcesses_clicked\0on_btnSettings_clicked\0"
    "on_btnGnomeSettings_clicked\0"
    "on_btnAptSourceManager_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_App[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    2,   95,    2, 0x08 /* Private */,
       3,    1,  100,    2, 0x28 /* Private | MethodCloned */,
       7,    2,  103,    2, 0x08 /* Private */,
       7,    1,  108,    2, 0x28 /* Private | MethodCloned */,
      10,    0,  111,    2, 0x08 /* Private */,
      11,    0,  112,    2, 0x08 /* Private */,
      12,    0,  113,    2, 0x08 /* Private */,
      13,    0,  114,    2, 0x08 /* Private */,
      14,    0,  115,    2, 0x08 /* Private */,
      15,    0,  116,    2, 0x08 /* Private */,
      16,    0,  117,    2, 0x08 /* Private */,
      17,    0,  118,    2, 0x08 /* Private */,
      18,    0,  119,    2, 0x08 /* Private */,
      19,    0,  120,    2, 0x08 /* Private */,
      20,    0,  121,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    5,    6,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void App::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        App *_t = static_cast<App *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->pageClick((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->pageClick((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 3: _t->clickSidebarButton((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->clickSidebarButton((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_btnDash_clicked(); break;
        case 6: _t->on_btnSystemCleaner_clicked(); break;
        case 7: _t->on_btnStartupApps_clicked(); break;
        case 8: _t->on_btnServices_clicked(); break;
        case 9: _t->on_btnUninstaller_clicked(); break;
        case 10: _t->on_btnHelpers_clicked(); break;
        case 11: _t->on_btnResources_clicked(); break;
        case 12: _t->on_btnProcesses_clicked(); break;
        case 13: _t->on_btnSettings_clicked(); break;
        case 14: _t->on_btnGnomeSettings_clicked(); break;
        case 15: _t->on_btnAptSourceManager_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject App::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_App.data,
      qt_meta_data_App,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *App::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *App::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_App.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int App::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
