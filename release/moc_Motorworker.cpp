/****************************************************************************
** Meta object code from reading C++ file 'Motorworker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Motorworker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Motorworker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Motorworker_t {
    QByteArrayData data[37];
    char stringdata0[450];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Motorworker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Motorworker_t qt_meta_stringdata_Motorworker = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Motorworker"
QT_MOC_LITERAL(1, 12, 7), // "sendMsg"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 3), // "msg"
QT_MOC_LITERAL(4, 25, 8), // "Motor_id"
QT_MOC_LITERAL(5, 34, 6), // "value1"
QT_MOC_LITERAL(6, 41, 6), // "value2"
QT_MOC_LITERAL(7, 48, 6), // "value3"
QT_MOC_LITERAL(8, 55, 6), // "value4"
QT_MOC_LITERAL(9, 62, 6), // "value5"
QT_MOC_LITERAL(10, 69, 6), // "value6"
QT_MOC_LITERAL(11, 76, 6), // "value7"
QT_MOC_LITERAL(12, 83, 10), // "sendToMain"
QT_MOC_LITERAL(13, 94, 29), // "getFromMain_position_commands"
QT_MOC_LITERAL(14, 124, 14), // "start_position"
QT_MOC_LITERAL(15, 139, 8), // "position"
QT_MOC_LITERAL(16, 148, 14), // "velocity_limit"
QT_MOC_LITERAL(17, 163, 10), // "max_torque"
QT_MOC_LITERAL(18, 174, 18), // "feedforward_torque"
QT_MOC_LITERAL(19, 193, 8), // "kp_scale"
QT_MOC_LITERAL(20, 202, 8), // "kd_scale"
QT_MOC_LITERAL(21, 211, 10), // "bounds_min"
QT_MOC_LITERAL(22, 222, 10), // "bounds_max"
QT_MOC_LITERAL(23, 233, 5), // "Cycle"
QT_MOC_LITERAL(24, 239, 5), // "Delay"
QT_MOC_LITERAL(25, 245, 10), // "position_X"
QT_MOC_LITERAL(26, 256, 10), // "position_Y"
QT_MOC_LITERAL(27, 267, 25), // "getFromMain_file_commands"
QT_MOC_LITERAL(28, 293, 9), // "file_name"
QT_MOC_LITERAL(29, 303, 26), // "getFromMain_motor_commands"
QT_MOC_LITERAL(30, 330, 37), // "getFromMain_diagnostic_write_..."
QT_MOC_LITERAL(31, 368, 6), // "Value1"
QT_MOC_LITERAL(32, 375, 6), // "Value2"
QT_MOC_LITERAL(33, 382, 6), // "Value3"
QT_MOC_LITERAL(34, 389, 36), // "getFromMain_diagnostic_read_c..."
QT_MOC_LITERAL(35, 426, 12), // "receiveSetup"
QT_MOC_LITERAL(36, 439, 10) // "run_cycles"

    },
    "Motorworker\0sendMsg\0\0msg\0Motor_id\0"
    "value1\0value2\0value3\0value4\0value5\0"
    "value6\0value7\0sendToMain\0"
    "getFromMain_position_commands\0"
    "start_position\0position\0velocity_limit\0"
    "max_torque\0feedforward_torque\0kp_scale\0"
    "kd_scale\0bounds_min\0bounds_max\0Cycle\0"
    "Delay\0position_X\0position_Y\0"
    "getFromMain_file_commands\0file_name\0"
    "getFromMain_motor_commands\0"
    "getFromMain_diagnostic_write_commands\0"
    "Value1\0Value2\0Value3\0"
    "getFromMain_diagnostic_read_commands\0"
    "receiveSetup\0run_cycles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Motorworker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    9,   59,    2, 0x06 /* Public */,
      12,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,   15,   81,    2, 0x0a /* Public */,
      27,    2,  112,    2, 0x0a /* Public */,
      29,    2,  117,    2, 0x0a /* Public */,
      30,    5,  122,    2, 0x0a /* Public */,
      34,    2,  133,    2, 0x0a /* Public */,
      35,    0,  138,    2, 0x0a /* Public */,
      36,    0,  139,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,    9,   10,   11,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,   14,   15,   16,   17,   18,   19,   20,   21,   22,   23,   24,   25,   26,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   28,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,   31,   32,   33,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Motorworker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Motorworker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendMsg((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9]))); break;
        case 1: _t->sendToMain((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->getFromMain_position_commands((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6])),(*reinterpret_cast< double(*)>(_a[7])),(*reinterpret_cast< double(*)>(_a[8])),(*reinterpret_cast< double(*)>(_a[9])),(*reinterpret_cast< double(*)>(_a[10])),(*reinterpret_cast< double(*)>(_a[11])),(*reinterpret_cast< double(*)>(_a[12])),(*reinterpret_cast< double(*)>(_a[13])),(*reinterpret_cast< double(*)>(_a[14])),(*reinterpret_cast< double(*)>(_a[15]))); break;
        case 3: _t->getFromMain_file_commands((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->getFromMain_motor_commands((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->getFromMain_diagnostic_write_commands((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5]))); break;
        case 6: _t->getFromMain_diagnostic_read_commands((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->receiveSetup(); break;
        case 8: _t->run_cycles(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Motorworker::*)(QString , int , double , double , double , double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Motorworker::sendMsg)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Motorworker::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Motorworker::sendToMain)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Motorworker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Motorworker.data,
    qt_meta_data_Motorworker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Motorworker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Motorworker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Motorworker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Motorworker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Motorworker::sendMsg(QString _t1, int _t2, double _t3, double _t4, double _t5, double _t6, double _t7, double _t8, double _t9)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t9))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Motorworker::sendToMain(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
