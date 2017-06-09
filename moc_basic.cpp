/****************************************************************************
** Meta object code from reading C++ file 'basic.h'
**
** Created: Fri Jun 3 19:36:28 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "basic.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'basic.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_basic[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      24,    6,    6,    6, 0x08,
      46,    6,    6,    6, 0x08,
      64,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_basic[] = {
    "basic\0\0on_HBM_clicked()\0on_display1_clicked()\0"
    "on_Next_clicked()\0on_Temperature_clicked()\0"
};

const QMetaObject basic::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_basic,
      qt_meta_data_basic, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &basic::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *basic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *basic::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_basic))
        return static_cast<void*>(const_cast< basic*>(this));
    return QWidget::qt_metacast(_clname);
}

int basic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_HBM_clicked(); break;
        case 1: on_display1_clicked(); break;
        case 2: on_Next_clicked(); break;
        case 3: on_Temperature_clicked(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
