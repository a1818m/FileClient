/****************************************************************************
** Meta object code from reading C++ file 'UserRegister.h'
**
** Created: Mon May 14 18:46:30 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/UserRegister.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserRegister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UserRegister[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   13,   14,   13, 0x08,
      29,   13,   14,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UserRegister[] = {
    "UserRegister\0\0int\0on_RegOk()\0"
    "on_RegCancel()\0"
};

const QMetaObject UserRegister::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UserRegister,
      qt_meta_data_UserRegister, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UserRegister::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UserRegister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UserRegister::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UserRegister))
        return static_cast<void*>(const_cast< UserRegister*>(this));
    return QDialog::qt_metacast(_clname);
}

int UserRegister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = on_RegOk();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = on_RegCancel();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
