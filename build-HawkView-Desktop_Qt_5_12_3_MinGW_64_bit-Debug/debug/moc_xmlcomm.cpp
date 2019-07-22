/****************************************************************************
** Meta object code from reading C++ file 'xmlcomm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../HawkView/xmlcomm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xmlcomm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_XMLComm_t {
    QByteArrayData data[19];
    char stringdata0[386];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XMLComm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XMLComm_t qt_meta_stringdata_XMLComm = {
    {
QT_MOC_LITERAL(0, 0, 7), // "XMLComm"
QT_MOC_LITERAL(1, 8, 20), // "DeviceStatusReceived"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 24), // "MessageReceivedEventArgs"
QT_MOC_LITERAL(4, 55, 27), // "DeviceConfigurationReceived"
QT_MOC_LITERAL(5, 83, 23), // "DeviceDetectionReceived"
QT_MOC_LITERAL(6, 107, 31), // "DeviceInitializationMsgReceived"
QT_MOC_LITERAL(7, 139, 25), // "GeometryReportMsgReceived"
QT_MOC_LITERAL(8, 165, 18), // "CommandMsgReceived"
QT_MOC_LITERAL(9, 184, 18), // "InvalidMsgReceived"
QT_MOC_LITERAL(10, 203, 34), // "PlatformDetectionReportMsgRec..."
QT_MOC_LITERAL(11, 238, 31), // "PlatformStatusReportMsgReceived"
QT_MOC_LITERAL(12, 270, 36), // "SubscriptionConfigurationMsgR..."
QT_MOC_LITERAL(13, 307, 22), // "TrackReportMsgReceived"
QT_MOC_LITERAL(14, 330, 7), // "MsgSent"
QT_MOC_LITERAL(15, 338, 8), // "readData"
QT_MOC_LITERAL(16, 347, 9), // "onConnect"
QT_MOC_LITERAL(17, 357, 15), // "onNewConnection"
QT_MOC_LITERAL(18, 373, 12) // "onDisconnect"

    },
    "XMLComm\0DeviceStatusReceived\0\0"
    "MessageReceivedEventArgs\0"
    "DeviceConfigurationReceived\0"
    "DeviceDetectionReceived\0"
    "DeviceInitializationMsgReceived\0"
    "GeometryReportMsgReceived\0CommandMsgReceived\0"
    "InvalidMsgReceived\0"
    "PlatformDetectionReportMsgReceived\0"
    "PlatformStatusReportMsgReceived\0"
    "SubscriptionConfigurationMsgReceived\0"
    "TrackReportMsgReceived\0MsgSent\0readData\0"
    "onConnect\0onNewConnection\0onDisconnect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XMLComm[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    1,   97,    2, 0x06 /* Public */,
       5,    1,  100,    2, 0x06 /* Public */,
       6,    1,  103,    2, 0x06 /* Public */,
       7,    1,  106,    2, 0x06 /* Public */,
       8,    1,  109,    2, 0x06 /* Public */,
       9,    1,  112,    2, 0x06 /* Public */,
      10,    1,  115,    2, 0x06 /* Public */,
      11,    1,  118,    2, 0x06 /* Public */,
      12,    1,  121,    2, 0x06 /* Public */,
      13,    1,  124,    2, 0x06 /* Public */,
      14,    1,  127,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  130,    2, 0x08 /* Private */,
      16,    0,  131,    2, 0x0a /* Public */,
      17,    0,  132,    2, 0x0a /* Public */,
      18,    0,  133,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void XMLComm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XMLComm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->DeviceStatusReceived((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 1: _t->DeviceConfigurationReceived((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 2: _t->DeviceDetectionReceived((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 3: _t->DeviceInitializationMsgReceived((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 4: _t->GeometryReportMsgReceived((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 5: _t->CommandMsgReceived((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 6: _t->InvalidMsgReceived((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 7: _t->PlatformDetectionReportMsgReceived((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 8: _t->PlatformStatusReportMsgReceived((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 9: _t->SubscriptionConfigurationMsgReceived((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 10: _t->TrackReportMsgReceived((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 11: _t->MsgSent((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 12: _t->readData(); break;
        case 13: _t->onConnect(); break;
        case 14: _t->onNewConnection(); break;
        case 15: _t->onDisconnect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageReceivedEventArgs >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageReceivedEventArgs >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageReceivedEventArgs >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageReceivedEventArgs >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageReceivedEventArgs >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageReceivedEventArgs >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageReceivedEventArgs >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageReceivedEventArgs >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageReceivedEventArgs >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageReceivedEventArgs >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageReceivedEventArgs >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< MessageReceivedEventArgs >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (XMLComm::*)(const MessageReceivedEventArgs & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XMLComm::DeviceStatusReceived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (XMLComm::*)(const MessageReceivedEventArgs & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XMLComm::DeviceConfigurationReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (XMLComm::*)(const MessageReceivedEventArgs & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XMLComm::DeviceDetectionReceived)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (XMLComm::*)(const MessageReceivedEventArgs & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XMLComm::DeviceInitializationMsgReceived)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (XMLComm::*)(const MessageReceivedEventArgs & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XMLComm::GeometryReportMsgReceived)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (XMLComm::*)(const MessageReceivedEventArgs & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XMLComm::CommandMsgReceived)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (XMLComm::*)(const MessageReceivedEventArgs & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XMLComm::InvalidMsgReceived)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (XMLComm::*)(const MessageReceivedEventArgs & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XMLComm::PlatformDetectionReportMsgReceived)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (XMLComm::*)(const MessageReceivedEventArgs & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XMLComm::PlatformStatusReportMsgReceived)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (XMLComm::*)(const MessageReceivedEventArgs & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XMLComm::SubscriptionConfigurationMsgReceived)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (XMLComm::*)(const MessageReceivedEventArgs & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XMLComm::TrackReportMsgReceived)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (XMLComm::*)(const MessageReceivedEventArgs & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&XMLComm::MsgSent)) {
                *result = 11;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject XMLComm::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_XMLComm.data,
    qt_meta_data_XMLComm,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *XMLComm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XMLComm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_XMLComm.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int XMLComm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void XMLComm::DeviceStatusReceived(const MessageReceivedEventArgs & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XMLComm::DeviceConfigurationReceived(const MessageReceivedEventArgs & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XMLComm::DeviceDetectionReceived(const MessageReceivedEventArgs & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void XMLComm::DeviceInitializationMsgReceived(const MessageReceivedEventArgs & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void XMLComm::GeometryReportMsgReceived(const MessageReceivedEventArgs & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void XMLComm::CommandMsgReceived(const MessageReceivedEventArgs & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void XMLComm::InvalidMsgReceived(const MessageReceivedEventArgs & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void XMLComm::PlatformDetectionReportMsgReceived(const MessageReceivedEventArgs & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void XMLComm::PlatformStatusReportMsgReceived(const MessageReceivedEventArgs & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void XMLComm::SubscriptionConfigurationMsgReceived(const MessageReceivedEventArgs & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void XMLComm::TrackReportMsgReceived(const MessageReceivedEventArgs & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void XMLComm::MsgSent(const MessageReceivedEventArgs & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
