/****************************************************************************
** Meta object code from reading C++ file 'plotwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../lec17_mcdonald_ros/plotwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plotwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlotWindow_t {
    QByteArrayData data[12];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlotWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlotWindow_t qt_meta_stringdata_PlotWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PlotWindow"
QT_MOC_LITERAL(1, 11, 23), // "on_randomButton_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "SlotTest"
QT_MOC_LITERAL(4, 45, 8), // "AddPoint"
QT_MOC_LITERAL(5, 54, 23), // "on_deletePoints_clicked"
QT_MOC_LITERAL(6, 78, 16), // "PointClickedSlot"
QT_MOC_LITERAL(7, 95, 6), // "Point*"
QT_MOC_LITERAL(8, 102, 1), // "p"
QT_MOC_LITERAL(9, 104, 11), // "DeletePoint"
QT_MOC_LITERAL(10, 116, 18), // "Shift_clicked_slot"
QT_MOC_LITERAL(11, 135, 16) // "RightClickedSlot"

    },
    "PlotWindow\0on_randomButton_clicked\0\0"
    "SlotTest\0AddPoint\0on_deletePoints_clicked\0"
    "PointClickedSlot\0Point*\0p\0DeletePoint\0"
    "Shift_clicked_slot\0RightClickedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void PlotWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlotWindow *_t = static_cast<PlotWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_randomButton_clicked(); break;
        case 1: _t->SlotTest(); break;
        case 2: _t->AddPoint(); break;
        case 3: _t->on_deletePoints_clicked(); break;
        case 4: _t->PointClickedSlot((*reinterpret_cast< Point*(*)>(_a[1]))); break;
        case 5: _t->DeletePoint((*reinterpret_cast< Point*(*)>(_a[1]))); break;
        case 6: _t->Shift_clicked_slot((*reinterpret_cast< Point*(*)>(_a[1]))); break;
        case 7: _t->RightClickedSlot((*reinterpret_cast< Point*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Point* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Point* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Point* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Point* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlotWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PlotWindow.data,
      qt_meta_data_PlotWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlotWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlotWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int PlotWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
