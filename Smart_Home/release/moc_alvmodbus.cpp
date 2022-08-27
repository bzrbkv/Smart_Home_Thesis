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
    QByteArrayData data[78];
    char stringdata0[1621];
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
QT_MOC_LITERAL(8, 131, 23), // "readHolTem_BtnCompleted"
QT_MOC_LITERAL(9, 155, 23), // "readHolHum_BtnCompleted"
QT_MOC_LITERAL(10, 179, 27), // "readCoilLight1_BtnCompleted"
QT_MOC_LITERAL(11, 207, 27), // "readCoilLight2_BtnCompleted"
QT_MOC_LITERAL(12, 235, 27), // "readCoilLight3_BtnCompleted"
QT_MOC_LITERAL(13, 263, 29), // "readCoilLight2_1_BtnCompleted"
QT_MOC_LITERAL(14, 293, 29), // "readCoilLight2_2_BtnCompleted"
QT_MOC_LITERAL(15, 323, 29), // "readCoilLight2_3_BtnCompleted"
QT_MOC_LITERAL(16, 353, 29), // "readCoilLight2_4_BtnCompleted"
QT_MOC_LITERAL(17, 383, 29), // "readCoilLight3_1_BtnCompleted"
QT_MOC_LITERAL(18, 413, 29), // "readCoilLight3_2_BtnCompleted"
QT_MOC_LITERAL(19, 443, 29), // "readCoilLight3_3_BtnCompleted"
QT_MOC_LITERAL(20, 473, 23), // "readSingleCoilCompleted"
QT_MOC_LITERAL(21, 497, 20), // "readSinCoilCompleted"
QT_MOC_LITERAL(22, 518, 26), // "readHRegOxygenBtnCompleted"
QT_MOC_LITERAL(23, 545, 13), // "connectDevice"
QT_MOC_LITERAL(24, 559, 16), // "disconnectDevice"
QT_MOC_LITERAL(25, 576, 22), // "writeSingleHolRegister"
QT_MOC_LITERAL(26, 599, 3), // "add"
QT_MOC_LITERAL(27, 603, 3), // "val"
QT_MOC_LITERAL(28, 607, 20), // "writeRegisterRequest"
QT_MOC_LITERAL(29, 628, 13), // "start_address"
QT_MOC_LITERAL(30, 642, 6), // "lenght"
QT_MOC_LITERAL(31, 649, 4), // "type"
QT_MOC_LITERAL(32, 654, 14), // "server_address"
QT_MOC_LITERAL(33, 669, 15), // "readQueryChart1"
QT_MOC_LITERAL(34, 685, 15), // "readQueryChart2"
QT_MOC_LITERAL(35, 701, 15), // "readQueryChart3"
QT_MOC_LITERAL(36, 717, 15), // "readReadyChart1"
QT_MOC_LITERAL(37, 733, 15), // "readReadyChart2"
QT_MOC_LITERAL(38, 749, 15), // "readReadyChart3"
QT_MOC_LITERAL(39, 765, 22), // "readDisInputStandbyBtn"
QT_MOC_LITERAL(40, 788, 30), // "readDisInputStandbyBtnReceived"
QT_MOC_LITERAL(41, 819, 15), // "writeSingleCoil"
QT_MOC_LITERAL(42, 835, 5), // "s_add"
QT_MOC_LITERAL(43, 841, 12), // "writeSinCoil"
QT_MOC_LITERAL(44, 854, 14), // "readHolTem_Btn"
QT_MOC_LITERAL(45, 869, 22), // "readHolTem_BtnReceived"
QT_MOC_LITERAL(46, 892, 14), // "readHolHum_Btn"
QT_MOC_LITERAL(47, 907, 22), // "readHolHum_BtnReceived"
QT_MOC_LITERAL(48, 930, 15), // "readCoilLockBtn"
QT_MOC_LITERAL(49, 946, 23), // "readCoilLockBtnReceived"
QT_MOC_LITERAL(50, 970, 18), // "readCoilLight1_Btn"
QT_MOC_LITERAL(51, 989, 26), // "readCoilLight1_BtnReceived"
QT_MOC_LITERAL(52, 1016, 18), // "readCoilLight2_Btn"
QT_MOC_LITERAL(53, 1035, 26), // "readCoilLight2_BtnReceived"
QT_MOC_LITERAL(54, 1062, 18), // "readCoilLight3_Btn"
QT_MOC_LITERAL(55, 1081, 26), // "readCoilLight3_BtnReceived"
QT_MOC_LITERAL(56, 1108, 20), // "readCoilLight2_1_Btn"
QT_MOC_LITERAL(57, 1129, 28), // "readCoilLight2_1_BtnReceived"
QT_MOC_LITERAL(58, 1158, 20), // "readCoilLight2_2_Btn"
QT_MOC_LITERAL(59, 1179, 28), // "readCoilLight2_2_BtnReceived"
QT_MOC_LITERAL(60, 1208, 20), // "readCoilLight2_3_Btn"
QT_MOC_LITERAL(61, 1229, 28), // "readCoilLight2_3_BtnReceived"
QT_MOC_LITERAL(62, 1258, 20), // "readCoilLight2_4_Btn"
QT_MOC_LITERAL(63, 1279, 28), // "readCoilLight2_4_BtnReceived"
QT_MOC_LITERAL(64, 1308, 20), // "readCoilLight3_1_Btn"
QT_MOC_LITERAL(65, 1329, 28), // "readCoilLight3_1_BtnReceived"
QT_MOC_LITERAL(66, 1358, 20), // "readCoilLight3_2_Btn"
QT_MOC_LITERAL(67, 1379, 28), // "readCoilLight3_2_BtnReceived"
QT_MOC_LITERAL(68, 1408, 20), // "readCoilLight3_3_Btn"
QT_MOC_LITERAL(69, 1429, 28), // "readCoilLight3_3_BtnReceived"
QT_MOC_LITERAL(70, 1458, 14), // "readSingleCoil"
QT_MOC_LITERAL(71, 1473, 22), // "readSingleCoilReceived"
QT_MOC_LITERAL(72, 1496, 11), // "readSinCoil"
QT_MOC_LITERAL(73, 1508, 19), // "readSinCoilReceived"
QT_MOC_LITERAL(74, 1528, 17), // "readHRegOxygenBtn"
QT_MOC_LITERAL(75, 1546, 25), // "readHRegOxygenBtnReceived"
QT_MOC_LITERAL(76, 1572, 22), // "connectChartsFromTimer"
QT_MOC_LITERAL(77, 1595, 25) // "disconnectChartsFromTimer"

    },
    "AlvModbus\0signalSendedChart1\0\0value\0"
    "signalSendedChart2\0signalSendedChart3\0"
    "readDisInputStandbyBtnCompleted\0"
    "readCoilLockBtnCompleted\0"
    "readHolTem_BtnCompleted\0readHolHum_BtnCompleted\0"
    "readCoilLight1_BtnCompleted\0"
    "readCoilLight2_BtnCompleted\0"
    "readCoilLight3_BtnCompleted\0"
    "readCoilLight2_1_BtnCompleted\0"
    "readCoilLight2_2_BtnCompleted\0"
    "readCoilLight2_3_BtnCompleted\0"
    "readCoilLight2_4_BtnCompleted\0"
    "readCoilLight3_1_BtnCompleted\0"
    "readCoilLight3_2_BtnCompleted\0"
    "readCoilLight3_3_BtnCompleted\0"
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
    "readHolTem_Btn\0readHolTem_BtnReceived\0"
    "readHolHum_Btn\0readHolHum_BtnReceived\0"
    "readCoilLockBtn\0readCoilLockBtnReceived\0"
    "readCoilLight1_Btn\0readCoilLight1_BtnReceived\0"
    "readCoilLight2_Btn\0readCoilLight2_BtnReceived\0"
    "readCoilLight3_Btn\0readCoilLight3_BtnReceived\0"
    "readCoilLight2_1_Btn\0readCoilLight2_1_BtnReceived\0"
    "readCoilLight2_2_Btn\0readCoilLight2_2_BtnReceived\0"
    "readCoilLight2_3_Btn\0readCoilLight2_3_BtnReceived\0"
    "readCoilLight2_4_Btn\0readCoilLight2_4_BtnReceived\0"
    "readCoilLight3_1_Btn\0readCoilLight3_1_BtnReceived\0"
    "readCoilLight3_2_Btn\0readCoilLight3_2_BtnReceived\0"
    "readCoilLight3_3_Btn\0readCoilLight3_3_BtnReceived\0"
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
      68,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  354,    2, 0x06 /* Public */,
       4,    1,  357,    2, 0x06 /* Public */,
       5,    1,  360,    2, 0x06 /* Public */,
       6,    1,  363,    2, 0x06 /* Public */,
       7,    1,  366,    2, 0x06 /* Public */,
       8,    1,  369,    2, 0x06 /* Public */,
       9,    1,  372,    2, 0x06 /* Public */,
      10,    1,  375,    2, 0x06 /* Public */,
      11,    1,  378,    2, 0x06 /* Public */,
      12,    1,  381,    2, 0x06 /* Public */,
      13,    1,  384,    2, 0x06 /* Public */,
      14,    1,  387,    2, 0x06 /* Public */,
      15,    1,  390,    2, 0x06 /* Public */,
      16,    1,  393,    2, 0x06 /* Public */,
      17,    1,  396,    2, 0x06 /* Public */,
      18,    1,  399,    2, 0x06 /* Public */,
      19,    1,  402,    2, 0x06 /* Public */,
      20,    1,  405,    2, 0x06 /* Public */,
      21,    1,  408,    2, 0x06 /* Public */,
      22,    1,  411,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      23,    0,  414,    2, 0x0a /* Public */,
      24,    0,  415,    2, 0x0a /* Public */,
      25,    2,  416,    2, 0x0a /* Public */,
      28,    5,  421,    2, 0x0a /* Public */,
      33,    0,  432,    2, 0x0a /* Public */,
      34,    0,  433,    2, 0x0a /* Public */,
      35,    0,  434,    2, 0x0a /* Public */,
      36,    0,  435,    2, 0x0a /* Public */,
      37,    0,  436,    2, 0x0a /* Public */,
      38,    0,  437,    2, 0x0a /* Public */,
      39,    0,  438,    2, 0x0a /* Public */,
      40,    0,  439,    2, 0x0a /* Public */,
      41,    3,  440,    2, 0x0a /* Public */,
      43,    3,  447,    2, 0x0a /* Public */,
      44,    0,  454,    2, 0x0a /* Public */,
      45,    0,  455,    2, 0x0a /* Public */,
      46,    0,  456,    2, 0x0a /* Public */,
      47,    0,  457,    2, 0x0a /* Public */,
      48,    0,  458,    2, 0x0a /* Public */,
      49,    0,  459,    2, 0x0a /* Public */,
      50,    0,  460,    2, 0x0a /* Public */,
      51,    0,  461,    2, 0x0a /* Public */,
      52,    0,  462,    2, 0x0a /* Public */,
      53,    0,  463,    2, 0x0a /* Public */,
      54,    0,  464,    2, 0x0a /* Public */,
      55,    0,  465,    2, 0x0a /* Public */,
      56,    0,  466,    2, 0x0a /* Public */,
      57,    0,  467,    2, 0x0a /* Public */,
      58,    0,  468,    2, 0x0a /* Public */,
      59,    0,  469,    2, 0x0a /* Public */,
      60,    0,  470,    2, 0x0a /* Public */,
      61,    0,  471,    2, 0x0a /* Public */,
      62,    0,  472,    2, 0x0a /* Public */,
      63,    0,  473,    2, 0x0a /* Public */,
      64,    0,  474,    2, 0x0a /* Public */,
      65,    0,  475,    2, 0x0a /* Public */,
      66,    0,  476,    2, 0x0a /* Public */,
      67,    0,  477,    2, 0x0a /* Public */,
      68,    0,  478,    2, 0x0a /* Public */,
      69,    0,  479,    2, 0x0a /* Public */,
      70,    2,  480,    2, 0x0a /* Public */,
      71,    0,  485,    2, 0x0a /* Public */,
      72,    2,  486,    2, 0x0a /* Public */,
      73,    0,  491,    2, 0x0a /* Public */,
      74,    0,  492,    2, 0x0a /* Public */,
      75,    0,  493,    2, 0x0a /* Public */,
      76,    0,  494,    2, 0x0a /* Public */,
      77,    0,  495,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   29,   30,    3,   31,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   26,   42,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   26,   42,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   26,   42,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,   26,   42,
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
        case 5: _t->readHolTem_BtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->readHolHum_BtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->readCoilLight1_BtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->readCoilLight2_BtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->readCoilLight3_BtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->readCoilLight2_1_BtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->readCoilLight2_2_BtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->readCoilLight2_3_BtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->readCoilLight2_4_BtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->readCoilLight3_1_BtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->readCoilLight3_2_BtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->readCoilLight3_3_BtnCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->readSingleCoilCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 18: _t->readSinCoilCompleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->readHRegOxygenBtnCompleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->connectDevice(); break;
        case 21: _t->disconnectDevice(); break;
        case 22: _t->writeSingleHolRegister((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->writeRegisterRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 24: _t->readQueryChart1(); break;
        case 25: _t->readQueryChart2(); break;
        case 26: _t->readQueryChart3(); break;
        case 27: _t->readReadyChart1(); break;
        case 28: _t->readReadyChart2(); break;
        case 29: _t->readReadyChart3(); break;
        case 30: _t->readDisInputStandbyBtn(); break;
        case 31: _t->readDisInputStandbyBtnReceived(); break;
        case 32: _t->writeSingleCoil((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 33: _t->writeSinCoil((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 34: _t->readHolTem_Btn(); break;
        case 35: _t->readHolTem_BtnReceived(); break;
        case 36: _t->readHolHum_Btn(); break;
        case 37: _t->readHolHum_BtnReceived(); break;
        case 38: _t->readCoilLockBtn(); break;
        case 39: _t->readCoilLockBtnReceived(); break;
        case 40: _t->readCoilLight1_Btn(); break;
        case 41: _t->readCoilLight1_BtnReceived(); break;
        case 42: _t->readCoilLight2_Btn(); break;
        case 43: _t->readCoilLight2_BtnReceived(); break;
        case 44: _t->readCoilLight3_Btn(); break;
        case 45: _t->readCoilLight3_BtnReceived(); break;
        case 46: _t->readCoilLight2_1_Btn(); break;
        case 47: _t->readCoilLight2_1_BtnReceived(); break;
        case 48: _t->readCoilLight2_2_Btn(); break;
        case 49: _t->readCoilLight2_2_BtnReceived(); break;
        case 50: _t->readCoilLight2_3_Btn(); break;
        case 51: _t->readCoilLight2_3_BtnReceived(); break;
        case 52: _t->readCoilLight2_4_Btn(); break;
        case 53: _t->readCoilLight2_4_BtnReceived(); break;
        case 54: _t->readCoilLight3_1_Btn(); break;
        case 55: _t->readCoilLight3_1_BtnReceived(); break;
        case 56: _t->readCoilLight3_2_Btn(); break;
        case 57: _t->readCoilLight3_2_BtnReceived(); break;
        case 58: _t->readCoilLight3_3_Btn(); break;
        case 59: _t->readCoilLight3_3_BtnReceived(); break;
        case 60: _t->readSingleCoil((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 61: _t->readSingleCoilReceived(); break;
        case 62: { int _r = _t->readSinCoil((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->readSinCoilReceived(); break;
        case 64: _t->readHRegOxygenBtn(); break;
        case 65: _t->readHRegOxygenBtnReceived(); break;
        case 66: _t->connectChartsFromTimer(); break;
        case 67: _t->disconnectChartsFromTimer(); break;
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readHolTem_BtnCompleted)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readHolHum_BtnCompleted)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readCoilLight1_BtnCompleted)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readCoilLight2_BtnCompleted)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readCoilLight3_BtnCompleted)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readCoilLight2_1_BtnCompleted)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readCoilLight2_2_BtnCompleted)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readCoilLight2_3_BtnCompleted)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readCoilLight2_4_BtnCompleted)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readCoilLight3_1_BtnCompleted)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readCoilLight3_2_BtnCompleted)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readCoilLight3_3_BtnCompleted)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readSingleCoilCompleted)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readSinCoilCompleted)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (AlvModbus::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlvModbus::readHRegOxygenBtnCompleted)) {
                *result = 19;
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
        if (_id < 68)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 68;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 68)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 68;
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
void AlvModbus::readHolTem_BtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AlvModbus::readHolHum_BtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AlvModbus::readCoilLight1_BtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void AlvModbus::readCoilLight2_BtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void AlvModbus::readCoilLight3_BtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void AlvModbus::readCoilLight2_1_BtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void AlvModbus::readCoilLight2_2_BtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void AlvModbus::readCoilLight2_3_BtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void AlvModbus::readCoilLight2_4_BtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void AlvModbus::readCoilLight3_1_BtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void AlvModbus::readCoilLight3_2_BtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void AlvModbus::readCoilLight3_3_BtnCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void AlvModbus::readSingleCoilCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void AlvModbus::readSinCoilCompleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void AlvModbus::readHRegOxygenBtnCompleted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
