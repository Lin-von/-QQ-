/****************************************************************************
** Meta object code from reading C++ file 'register.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client/register.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'register.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RegisterBox[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   13,   12,   12, 0x0a,
      38,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_RegisterBox[] = {
    "RegisterBox\0\0replyKind\0result(qint32)\0"
    "clickedOKButton()\0"
};

void RegisterBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RegisterBox *_t = static_cast<RegisterBox *>(_o);
        switch (_id) {
        case 0: _t->result((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        case 1: _t->clickedOKButton(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RegisterBox::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RegisterBox::staticMetaObject = {
    { &InformationBox::staticMetaObject, qt_meta_stringdata_RegisterBox,
      qt_meta_data_RegisterBox, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RegisterBox::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RegisterBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RegisterBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RegisterBox))
        return static_cast<void*>(const_cast< RegisterBox*>(this));
    return InformationBox::qt_metacast(_clname);
}

int RegisterBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InformationBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
