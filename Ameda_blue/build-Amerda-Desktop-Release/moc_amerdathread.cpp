/****************************************************************************
** Meta object code from reading C++ file 'amerdathread.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Amerda/amerdathread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'amerdathread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AmerdaThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   14,   13,   13, 0x05,
      57,   47,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_AmerdaThread[] = {
    "AmerdaThread\0\0mmHg\0dlv015aSensorSignal(double)\0"
    "time,mmHg\0dlv015aSensorSignal(double,double)\0"
};

void AmerdaThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AmerdaThread *_t = static_cast<AmerdaThread *>(_o);
        switch (_id) {
        case 0: _t->dlv015aSensorSignal((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->dlv015aSensorSignal((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AmerdaThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AmerdaThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_AmerdaThread,
      qt_meta_data_AmerdaThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AmerdaThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AmerdaThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AmerdaThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AmerdaThread))
        return static_cast<void*>(const_cast< AmerdaThread*>(this));
    return QThread::qt_metacast(_clname);
}

int AmerdaThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void AmerdaThread::dlv015aSensorSignal(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AmerdaThread::dlv015aSensorSignal(double _t1, double _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
