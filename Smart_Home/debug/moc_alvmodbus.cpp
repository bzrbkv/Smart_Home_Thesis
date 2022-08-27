/****************************************************************************
** Meta object code from reading C++ file 'alvmodbus.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../alvmodbus.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alvmodbus.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AlvModbus_t {
    QByteArrayData data[42];
    char stringdata0[715];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlvModbus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlvModbus_t qt_meta_stringdata_AlvModbus = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AlvModbus"
QT_MOC_LITERAL(1, 10, 18), // "signalSendedChart1"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "value"
QT_MOC_LITERAL(4, 36, 18), // "signalSendedChart2"
QT_MOC_LITERAL(5, 55, 18), // "signalSendedChart3"
QT_MOC_LITERAL(6, 74, 31), // "readDisInputStandbyBtnCompleted"
QT_MOC_LITERAL(7, 106, 24), // "readCoilLockBtnCompleted"
QT_MOC_LITERAL(8, 131, 23), // "readSingleCoilCompleted"
QT_MOC_LITERAL(9, 155, 20), // "readSinCoilCompleted"
QT_MOC_LITERAL(10, 176, 26), // "readHRegOxygenBtnCompleted"
QT_MOC_LITERAL(11, 203, 13), // "connectDevice"
QT_MOC_LITERAL(12, 217, 16), // "disconnectDevice"
QT_MOC_LITERAL(13, 234, 22), // "writeSingleHolRegister"
QT_MOC_LITERAL(14, 257, 3), // "add"
QT_MOC_LITERAL(15, 261, 3), // "val"
QT_MOC_LITERAL(16, 265, 20), // "writeRegisterRequest"
QT_MOC_LITERAL(17, 286, 13), // "start_address"
QT_MOC_LITERAL(18, 300, 6), // "lenght"
QT_MOC_LITERAL(19, 307, 4), // "type"
QT_MOC_LITERAL(20, 312, 14), // "server_address"
QT_MOC_LITERAL(21, 327, 15), // "readQueryChart1"
QT_MOC_LITERAL(22, 343, 15), // "readQueryChart2"
QT_MOC_LITERAL(23, 359, 15), // "readQueryChart3"
QT_MOC_LITERAL(24, 375, 15), // "readReadyChart1"
QT_MOC_LITERAL(25, 391, 15), // "readReadyChart2"
QT_MOC_LITERAL(26, 407, 15), // "readReadyChart3"
QT_MOC_LITERAL(27, 423, 22), // "readDisInputStandbyBtn"
QT_MOC_LITERAL(28, 446, 30), // "readDisInputStandbyBtnReceived"
QT_MOC_LITERAL(29, 477, 15), // "writeSingleCoil"
QT_MOC_LITERAL(30, 493, 5), // "s_add"
QT_MOC_LITERAL(31, 499, 12), // "writeSinCoil"
QT_MOC_LITERAL(32, 512, 15), // "readCoilLockBtn"
QT_MOC_LITERAL(33, 528, 23), // "readCoilLockBtnReceived"
QT_MOC_LITERAL(34, 552, 14), // "readSingleCoil"
QT_MOC_LITERAL(35, 567, 22), // "readSingleCoilReceived"
QT_MOC_LITERAL(36, 590, 11), // "readSinCoil"
QT_MOC_LITERAL(37, 602, 19), // "readSinCoilReceived"
QT_MOC_LITERAL(38, 622, 17), // "readHRegOxygenBtn"
QT_MOC_LITERAL(39, 640, 25), // "readHRegOxygenBtnReceived"
QT_MOC_LITERAL(40, 666, 22), // "connectChartsFromTimer"
QT_MOC_LITERAL(41, 689, 25) // "disconnectChartsFromTimer"

    },
    "AlvModbus\0signalSendedChart1\0\0value\0"
    "signalSendedChart2\0signalSendedChart3\0"
    "readDisInputStandbyBtnCompleted\0"
    "readCoilLockBtnCompleted\0"
    "readSingleCoilCompleted\0readSinCoilCompleted\0"
    "readHRegOxygenBtnCompleted\0connectDevice\0"
    "disconnectDevice\0writeSingleHolRegister\0"
    "add\0val\0writeRegisterRequest\0start_address\0"
    "lenght\0type\0server_address\0readQueryChart1\0"
    "readQueryChart2\0readQueryChart3\0"
    "readReadyChart1\0readReadyChart2\0"
    "readReadyChart3\0readDisInputStandbyBtn\0"
    "readDisInputStandbyBtnReceived\0"
    "writeSingleCoil\0s_add\0writeSinCoil\0"
    "readCoilLockBtn\0readCoilLockBtnReceived\0"
    "readSingleCoil\0readSingleCoilReceived\0"
    "readSinCoil\0readSinCoilReceived\0"
    "readHRegOxygenBtn\0readHRegOxygenBtnReceived\0"
    "connectChartsFromTimer\0disconnectChartsFromTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlvModbus[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  174,    2, 0x06 /* Public */,
       4,    1,  177,    2, 0x06 /* Public */,
       5,    1,  180,    2, 0x06 /* Public */,
       6,    1,  183,    2, 0x06 /* Public */,
       7,    1,  186,    2, 0x06 /* Public */,
       8,    1,  189,    2, 0x06 /* Public */,
       9,    1,  192,    2, 0x06 /* Public */,
      10,    1,  195,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  198,    2, 0x0a /* Public */,
      12,    0,  199,    2, 0x0a /* Public */,
      13,    2,  200,    2, 0x0a /* Public */,
      16,    5,  205,    2, 0x0a /* Public */,
      21,    0,  216,    2, 0x0a /* Public */,
      22,    0,  217,    2, 0x0a /* Public */,
      23,    0,  218,    2, 0x0a /* Public */,
      24,    0,  219,    2, 0x0a /* Public */,
      25,    0,  220,    2, 0x0a /* Public */,
      26,    0,  221,    2, 0x0a /* Public */,
      27,    0,  222,    2, 0x0a /* Public */,
      28,    0,  223,    2, 0x0a /* Public */,
      29,    3,  224,    2, 0x0a /* Public */,
      31,    3,  231,    2, 0x0a /* Public */,
      32,    0,  238,    2, 0x0a /* Public */,
      33,    0,  239,    2, 0x0a /* Public */,
      34,    2,  240,    2, 0x0a /* Public */,
      35,    0,  245,    2, 0x0a /* Public */,
      36,    2,  246,    2, 0x0a /* Public */,
      37,    0,  251,    2, 0x0a /* Public */,
      38,    0,  252,    2, 0x0a /* Public */,
      39,    0,  253,    2, 0x0a /* Public */,
      40,    0,  254,    2, 0x0a /* Public */,
      41,    0,  255,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   17,   18,    3,   19,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   14,   30,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   14,   30,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   30,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AlvModbus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlvModbus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalSendedChart1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->signalSendedChart2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->signalSendedChart3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->readDisInputStandbyBtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->readCoilLockBtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->readSingleCoilCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->readSinCoilCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->readHRegOxygenBtnCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->connectDevice(); break;
        case 9: _t->disconnectDevice(); break;
        case 10: _t->writeSingleHolRegister((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->writeRegisterRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 12: _t->readQueryChart1(); break;
        case 13: _t->readQueryChart2(); break;
        case 14: _t->readQueryChart3(); break;
        case 15: _t->readReadyChart1(); break;
        case 16: _t->readReadyChart2(); break;
        case 17: _t->readReadyChart3(); break;
        case 18: _t->readDisInputStandbyBtn(); break;
        case 19: _t->readDisInputStandbyBtnReceived(); break;
        case 20: _t->writeSingleCoil((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 21: _t->writeSinCoil((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 22: _t->readCoilLockBtn(); break;
        case 23: _t->readCoilLockBtnReceived(); break;
        case 24: { int _r = _t->readSingleCoil((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 25: _t->readSingleCoilReceived(); break;
        case 26: { int _r = _t->readSinCoil((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 27: _t->readSinCoilReceived(); break;
        case 28: _t->readHRegOxygenBtn(); break;
        case 29: _t->readHRegOxygenBtnReceived(); break;
        case 30: _t->connectChartsFromTimer(); break;
        case 31: _t->disconnectChartsFromTimer(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AlvModbus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::signalSendedChart1)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::signalSendedChart2)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::signalSendedChart3)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readDisInputStandbyBtnCompleted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readCoilLockBtnCompleted)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readSingleCoilCompleted)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readSinCoilCompleted)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readHRegOxygenBtnCompleted)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AlvModbus::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AlvModbus.data,
    qt_meta_data_AlvModbus,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlvModbus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlvModbus::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlvModbus.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AlvModbus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void AlvModbus::signalSendedChart1(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AlvModbus::signalSendedChart2(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AlvModbus::signalSendedChart3(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AlvModbus::readDisInputStandbyBtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AlvModbus::readCoilLockBtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AlvModbus::readSingleCoilCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AlvModbus::readSinCoilCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AlvModbus::readHRegOxygenBtnCompleted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
