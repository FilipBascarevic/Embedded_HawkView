/****************************************************************************
** Meta object code from reading C++ file 'extractxml.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../HawkView/extractxml.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'extractxml.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_target_info_t {
    QByteArrayData data[5];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_target_info_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_target_info_t qt_meta_stringdata_target_info = {
    {
QT_MOC_LITERAL(0, 0, 11), // "target_info"
QT_MOC_LITERAL(1, 12, 2), // "ID"
QT_MOC_LITERAL(2, 15, 14), // "Classification"
QT_MOC_LITERAL(3, 30, 9), // "Longitude"
QT_MOC_LITERAL(4, 40, 8) // "Latitude"

    },
    "target_info\0ID\0Classification\0Longitude\0"
    "Latitude"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_target_info[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095003,
       2, QMetaType::QString, 0x00095003,
       3, QMetaType::Double, 0x00095003,
       4, QMetaType::Double, 0x00095003,

       0        // eod
};

void target_info::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<target_info *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->ID; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->Classification; break;
        case 2: *reinterpret_cast< double*>(_v) = _t->Longitude; break;
        case 3: *reinterpret_cast< double*>(_v) = _t->Latitude; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<target_info *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->ID != *reinterpret_cast< QString*>(_v)) {
                _t->ID = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->Classification != *reinterpret_cast< QString*>(_v)) {
                _t->Classification = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->Longitude != *reinterpret_cast< double*>(_v)) {
                _t->Longitude = *reinterpret_cast< double*>(_v);
            }
            break;
        case 3:
            if (_t->Latitude != *reinterpret_cast< double*>(_v)) {
                _t->Latitude = *reinterpret_cast< double*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject target_info::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_target_info.data,
    qt_meta_data_target_info,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_extractXML_t {
    QByteArrayData data[15];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_extractXML_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_extractXML_t qt_meta_stringdata_extractXML = {
    {
QT_MOC_LITERAL(0, 0, 10), // "extractXML"
QT_MOC_LITERAL(1, 11, 11), // "newPosition"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "pathChanged"
QT_MOC_LITERAL(4, 36, 15), // "clearTrajectory"
QT_MOC_LITERAL(5, 52, 10), // "readTarget"
QT_MOC_LITERAL(6, 63, 22), // "onDeviceStatusReceived"
QT_MOC_LITERAL(7, 86, 24), // "MessageReceivedEventArgs"
QT_MOC_LITERAL(8, 111, 8), // "curr_XML"
QT_MOC_LITERAL(9, 120, 25), // "onDeviceDetectionReceived"
QT_MOC_LITERAL(10, 146, 12), // "getLongitude"
QT_MOC_LITERAL(11, 159, 11), // "getLatitude"
QT_MOC_LITERAL(12, 171, 4), // "path"
QT_MOC_LITERAL(13, 176, 10), // "currTarget"
QT_MOC_LITERAL(14, 187, 11) // "target_info"

    },
    "extractXML\0newPosition\0\0pathChanged\0"
    "clearTrajectory\0readTarget\0"
    "onDeviceStatusReceived\0MessageReceivedEventArgs\0"
    "curr_XML\0onDeviceDetectionReceived\0"
    "getLongitude\0getLatitude\0path\0currTarget\0"
    "target_info"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_extractXML[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       1,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   63,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   69,    2, 0x02 /* Public */,
      11,    0,   70,    2, 0x02 /* Public */,
      12,    0,   71,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

 // methods: parameters
    QMetaType::Double,
    QMetaType::Double,
    QMetaType::QVariantList,

 // properties: name, type, flags
      13, 0x80000000 | 14, 0x0049500b,

 // properties: notify_signal_id
       3,

       0        // eod
};

void extractXML::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<extractXML *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newPosition(); break;
        case 1: _t->pathChanged(); break;
        case 2: _t->clearTrajectory(); break;
        case 3: _t->readTarget(); break;
        case 4: _t->onDeviceStatusReceived((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 5: _t->onDeviceDetectionReceived((*reinterpret_cast< const MessageReceivedEventArgs(*)>(_a[1]))); break;
        case 6: { double _r = _t->getLongitude();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 7: { double _r = _t->getLatitude();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 8: { QVariantList _r = _t->path();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (extractXML::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&extractXML::newPosition)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (extractXML::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&extractXML::pathChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (extractXML::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&extractXML::clearTrajectory)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (extractXML::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&extractXML::readTarget)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< target_info >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<extractXML *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< target_info*>(_v) = _t->getTarget(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<extractXML *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTarget(*reinterpret_cast< target_info*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject extractXML::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_extractXML.data,
    qt_meta_data_extractXML,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *extractXML::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *extractXML::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_extractXML.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int extractXML::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void extractXML::newPosition()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void extractXML::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void extractXML::clearTrajectory()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void extractXML::readTarget()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
