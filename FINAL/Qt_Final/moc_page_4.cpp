/****************************************************************************
** Meta object code from reading C++ file 'page_4.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "page_4.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'page_4.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_page_4_t {
    QByteArrayData data[7];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_page_4_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_page_4_t qt_meta_stringdata_page_4 = {
    {
QT_MOC_LITERAL(0, 0, 6), // "page_4"
QT_MOC_LITERAL(1, 7, 13), // "pushButtonSig"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 22), // "on_pBack_page4_clicked"
QT_MOC_LITERAL(4, 45, 17), // "slotPage4RecvData"
QT_MOC_LITERAL(5, 63, 12), // "slotSearchDb"
QT_MOC_LITERAL(6, 76, 12) // "slotDeleteDb"

    },
    "page_4\0pushButtonSig\0\0on_pBack_page4_clicked\0"
    "slotPage4RecvData\0slotSearchDb\0"
    "slotDeleteDb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_page_4[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   42,    2, 0x08 /* Private */,
       4,    1,   43,    2, 0x08 /* Private */,
       5,    0,   46,    2, 0x08 /* Private */,
       6,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void page_4::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<page_4 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pushButtonSig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pBack_page4_clicked(); break;
        case 2: _t->slotPage4RecvData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->slotSearchDb(); break;
        case 4: _t->slotDeleteDb(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (page_4::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&page_4::pushButtonSig)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject page_4::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_page_4.data,
    qt_meta_data_page_4,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *page_4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *page_4::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_page_4.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int page_4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void page_4::pushButtonSig(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
