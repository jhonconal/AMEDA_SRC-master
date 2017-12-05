/****************************************************************************
** Meta object code from reading C++ file 'atmindexwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Amerda/atmindexwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'atmindexwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AtmIndexWidget[] = {

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
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   15,   15,   15, 0x08,
      64,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AtmIndexWidget[] = {
    "AtmIndexWidget\0\0reCheckGuideSignal(bool)\0"
    "on_PreButton_clicked()\0on_NextButton_clicked()\0"
};

void AtmIndexWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AtmIndexWidget *_t = static_cast<AtmIndexWidget *>(_o);
        switch (_id) {
        case 0: _t->reCheckGuideSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_PreButton_clicked(); break;
        case 2: _t->on_NextButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AtmIndexWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AtmIndexWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AtmIndexWidget,
      qt_meta_data_AtmIndexWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AtmIndexWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AtmIndexWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AtmIndexWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AtmIndexWidget))
        return static_cast<void*>(const_cast< AtmIndexWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AtmIndexWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void AtmIndexWidget::reCheckGuideSignal(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
