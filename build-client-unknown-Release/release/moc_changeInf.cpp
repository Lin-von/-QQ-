/****************************************************************************
** Meta object code from reading C++ file 'changeInf.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../client/changeInf.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'changeInf.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChangeInf[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   10,   10,   10, 0x0a,
      87,   77,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ChangeInf[] = {
    "ChangeInf\0\0,,\0"
    "changeInformationSignal(int,QString,QString)\0"
    "clickedOKButton()\0replyKind\0result(qint32)\0"
};

void ChangeInf::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ChangeInf *_t = static_cast<ChangeInf *>(_o);
        switch (_id) {
        case 0: _t->changeInformationSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->clickedOKButton(); break;
        case 2: _t->result((*reinterpret_cast< qint32(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ChangeInf::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ChangeInf::staticMetaObject = {
    { &InformationBox::staticMetaObject, qt_meta_stringdata_ChangeInf,
      qt_meta_data_ChangeInf, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ChangeInf::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ChangeInf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ChangeInf::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChangeInf))
        return static_cast<void*>(const_cast< ChangeInf*>(this));
    return InformationBox::qt_metacast(_clname);
}

int ChangeInf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InformationBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ChangeInf::changeInformationSignal(int _t1, QString _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
