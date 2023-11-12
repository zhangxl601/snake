/****************************************************************************
** Meta object code from reading C++ file 'button.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Code/button.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Button_t {
    uint offsetsAndSizes[12];
    char stringdata0[7];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[8];
    char stringdata5[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Button_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_Button_t qt_meta_stringdata_Button = {
    {
        QT_MOC_LITERAL(0, 6),  // "Button"
        QT_MOC_LITERAL(7, 16),  // "ButtonIsReleased"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 7),  // "sendVal"
        QT_MOC_LITERAL(33, 7),  // "Button*"
        QT_MOC_LITERAL(41, 3)   // "val"
    },
    "Button",
    "ButtonIsReleased",
    "",
    "sendVal",
    "Button*",
    "val"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Button[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    1,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void Button::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Button *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ButtonIsReleased(); break;
        case 1: _t->sendVal((*reinterpret_cast< std::add_pointer_t<Button*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Button* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Button::*)();
            if (_t _q_method = &Button::ButtonIsReleased; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Button::*)(Button * );
            if (_t _q_method = &Button::sendVal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Button::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Button.offsetsAndSizes,
    qt_meta_data_Button,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Button_t
, QtPrivate::TypeAndForceComplete<Button, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Button *, std::false_type>



>,
    nullptr
} };


const QMetaObject *Button::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Button::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Button.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGraphicsItem"))
        return static_cast< QGraphicsItem*>(this);
    return QObject::qt_metacast(_clname);
}

int Button::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Button::ButtonIsReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Button::sendVal(Button * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
