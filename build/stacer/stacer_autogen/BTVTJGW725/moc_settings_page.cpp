/****************************************************************************
** Meta object code from reading C++ file 'settings_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../stacer/Pages/Settings/settings_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsPage_t {
    QByteArrayData data[15];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsPage_t qt_meta_stringdata_SettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SettingsPage"
QT_MOC_LITERAL(1, 13, 4), // "init"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 19), // "cmbLanguagesChanged"
QT_MOC_LITERAL(4, 39, 5), // "index"
QT_MOC_LITERAL(5, 45, 14), // "cmbDiskChanged"
QT_MOC_LITERAL(6, 60, 25), // "on_checkAutostart_clicked"
QT_MOC_LITERAL(7, 86, 7), // "checked"
QT_MOC_LITERAL(8, 94, 19), // "cmbStartPageChanged"
QT_MOC_LITERAL(9, 114, 4), // "text"
QT_MOC_LITERAL(10, 119, 30), // "on_spinCpuPercent_valueChanged"
QT_MOC_LITERAL(11, 150, 5), // "value"
QT_MOC_LITERAL(12, 156, 33), // "on_spinMemoryPercent_valueCha..."
QT_MOC_LITERAL(13, 190, 31), // "on_spinDiskPercent_valueChanged"
QT_MOC_LITERAL(14, 222, 30) // "on_checkAppQuitDontAsk_clicked"

    },
    "SettingsPage\0init\0\0cmbLanguagesChanged\0"
    "index\0cmbDiskChanged\0on_checkAutostart_clicked\0"
    "checked\0cmbStartPageChanged\0text\0"
    "on_spinCpuPercent_valueChanged\0value\0"
    "on_spinMemoryPercent_valueChanged\0"
    "on_spinDiskPercent_valueChanged\0"
    "on_checkAppQuitDontAsk_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    1,   63,    2, 0x08 /* Private */,
       6,    1,   66,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,
      13,    1,   78,    2, 0x08 /* Private */,
      14,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void SettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsPage *_t = static_cast<SettingsPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->init(); break;
        case 1: _t->cmbLanguagesChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->cmbDiskChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->on_checkAutostart_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->cmbStartPageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_spinCpuPercent_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_spinMemoryPercent_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_spinDiskPercent_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_checkAppQuitDontAsk_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SettingsPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SettingsPage.data,
      qt_meta_data_SettingsPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
