/****************************************************************************
** Meta object code from reading C++ file 'MyClient.h'
**
** Created: Mon May 14 21:04:31 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MyClient.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MyClient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyClient[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    9,   10,    9, 0x08,
      24,    9,   10,    9, 0x08,
      35,    9,   10,    9, 0x08,
      47,    9,   10,    9, 0x08,
      59,    9,   10,    9, 0x08,
      73,    9,   10,    9, 0x08,
      82,    9,   10,    9, 0x08,
      92,    9,   10,    9, 0x08,
     102,    9,   10,    9, 0x08,
     112,    9,   10,    9, 0x08,
     124,  121,   10,    9, 0x08,
     147,    9,    9,    9, 0x08,
     165,    9,    9,    9, 0x08,
     180,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MyClient[] = {
    "MyClient\0\0int\0on_Conn()\0on_Login()\0"
    "on_Cancel()\0on_Select()\0on_Register()\0"
    "on_Put()\0on_Path()\0on_List()\0on_Help()\0"
    "on_Get()\0pt\0on_ContextMenu(QPoint)\0"
    "on_windowclosed()\0on_windowmin()\0"
    "on_windowmax()\0"
};

const QMetaObject MyClient::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MyClient,
      qt_meta_data_MyClient, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyClient::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyClient::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyClient))
        return static_cast<void*>(const_cast< MyClient*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MyClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { int _r = on_Conn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = on_Login();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = on_Cancel();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: { int _r = on_Select();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 4: { int _r = on_Register();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { int _r = on_Put();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 6: { int _r = on_Path();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { int _r = on_List();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: { int _r = on_Help();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 9: { int _r = on_Get();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 10: { int _r = on_ContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 11: on_windowclosed(); break;
        case 12: on_windowmin(); break;
        case 13: on_windowmax(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
