/****************************************************************************
** Meta object code from reading C++ file 'amerdawidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Amerda/amerdawidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'amerdawidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AmerdaWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   14,   13,   13, 0x0a,
      55,   45,   13,   13, 0x0a,
     101,   88,   13,   13, 0x0a,
     124,   13,   13,   13, 0x0a,
     140,   13,   13,   13, 0x08,
     164,   13,   13,   13, 0x08,
     188,   13,   13,   13, 0x08,
     207,   13,   13,   13, 0x08,
     224,   13,   13,   13, 0x08,
     253,  247,   13,   13, 0x08,
     290,  247,   13,   13, 0x08,
     329,  247,   13,   13, 0x08,
     368,   13,   13,   13, 0x08,
     392,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AmerdaWidget[] = {
    "AmerdaWidget\0\0mmHg\0dlv015aSensorSlot(double)\0"
    "time,mmHg\0dlv015aSensorSlot(double,double)\0"
    "reCheckGuide\0reCheckGuideSolt(bool)\0"
    "sampleEndSlot()\0on_TestButton_clicked()\0"
    "on_SaveButton_clicked()\0RealTimeDataSlot()\0"
    "SystemTimeSlot()\0on_LogButton_clicked()\0"
    "index\0on_comboBox_currentIndexChanged(int)\0"
    "on_comboBox_2_currentIndexChanged(int)\0"
    "on_comboBox_3_currentIndexChanged(int)\0"
    "on_pushButton_clicked()\0on_checkBox_clicked()\0"
};

void AmerdaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AmerdaWidget *_t = static_cast<AmerdaWidget *>(_o);
        switch (_id) {
        case 0: _t->dlv015aSensorSlot((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->dlv015aSensorSlot((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->reCheckGuideSolt((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sampleEndSlot(); break;
        case 4: _t->on_TestButton_clicked(); break;
        case 5: _t->on_SaveButton_clicked(); break;
        case 6: _t->RealTimeDataSlot(); break;
        case 7: _t->SystemTimeSlot(); break;
        case 8: _t->on_LogButton_clicked(); break;
        case 9: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_comboBox_2_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_comboBox_3_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_pushButton_clicked(); break;
        case 13: _t->on_checkBox_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AmerdaWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AmerdaWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AmerdaWidget,
      qt_meta_data_AmerdaWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AmerdaWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AmerdaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AmerdaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AmerdaWidget))
        return static_cast<void*>(const_cast< AmerdaWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AmerdaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
