/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hw5/settlers/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "Build_Wall_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "Build_House_clicked"
QT_MOC_LITERAL(4, 51, 20), // "Purchase_Spy_clicked"
QT_MOC_LITERAL(5, 72, 15), // "CellClickedSlot"
QT_MOC_LITERAL(6, 88, 9), // "GameCell*"
QT_MOC_LITERAL(7, 98, 2), // "gc"
QT_MOC_LITERAL(8, 101, 21), // "Qt::KeyboardModifiers"
QT_MOC_LITERAL(9, 123, 8), // "modifier"
QT_MOC_LITERAL(10, 132, 15), // "Qt::MouseButton"
QT_MOC_LITERAL(11, 148, 6), // "button"
QT_MOC_LITERAL(12, 155, 16), // "End_Turn_clicked"
QT_MOC_LITERAL(13, 172, 21), // "Take_AI_Turn2_clicked"
QT_MOC_LITERAL(14, 194, 21), // "Take_AI_Turn1_clicked"
QT_MOC_LITERAL(15, 216, 17) // "StartGame_clicked"

    },
    "MainWindow\0Build_Wall_clicked\0\0"
    "Build_House_clicked\0Purchase_Spy_clicked\0"
    "CellClickedSlot\0GameCell*\0gc\0"
    "Qt::KeyboardModifiers\0modifier\0"
    "Qt::MouseButton\0button\0End_Turn_clicked\0"
    "Take_AI_Turn2_clicked\0Take_AI_Turn1_clicked\0"
    "StartGame_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       5,    3,   57,    2, 0x08 /* Private */,
      12,    0,   64,    2, 0x08 /* Private */,
      13,    0,   65,    2, 0x08 /* Private */,
      14,    0,   66,    2, 0x08 /* Private */,
      15,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8, 0x80000000 | 10,    7,    9,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Build_Wall_clicked(); break;
        case 1: _t->Build_House_clicked(); break;
        case 2: _t->Purchase_Spy_clicked(); break;
        case 3: _t->CellClickedSlot((*reinterpret_cast< GameCell*(*)>(_a[1])),(*reinterpret_cast< Qt::KeyboardModifiers(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButton(*)>(_a[3]))); break;
        case 4: _t->End_Turn_clicked(); break;
        case 5: _t->Take_AI_Turn2_clicked(); break;
        case 6: _t->Take_AI_Turn1_clicked(); break;
        case 7: _t->StartGame_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< GameCell* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


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
