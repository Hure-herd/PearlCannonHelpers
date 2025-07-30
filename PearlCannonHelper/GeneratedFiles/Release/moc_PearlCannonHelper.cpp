/****************************************************************************
** Meta object code from reading C++ file 'PearlCannonHelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PearlCannonHelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PearlCannonHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PearlCannonHelper_t {
    QByteArrayData data[15];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PearlCannonHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PearlCannonHelper_t qt_meta_stringdata_PearlCannonHelper = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PearlCannonHelper"
QT_MOC_LITERAL(1, 18, 28), // "on_copyBitPushButton_clicked"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 29), // "on_pasteBitPushButton_clicked"
QT_MOC_LITERAL(4, 78, 24), // "on_genPushButton_clicked"
QT_MOC_LITERAL(5, 103, 29), // "on_languageComboBox_activated"
QT_MOC_LITERAL(6, 133, 5), // "index"
QT_MOC_LITERAL(7, 139, 33), // "on_settingTableWidget_cellCli..."
QT_MOC_LITERAL(8, 173, 26), // "on_applyPushButton_pressed"
QT_MOC_LITERAL(9, 200, 13), // "generateTrace"
QT_MOC_LITERAL(10, 214, 13), // "updateSetting"
QT_MOC_LITERAL(11, 228, 15), // "updatePearlInfo"
QT_MOC_LITERAL(12, 244, 9), // "updateAll"
QT_MOC_LITERAL(13, 254, 13), // "tryLoadBitSeq"
QT_MOC_LITERAL(14, 268, 16) // "sortSettingTable"

    },
    "PearlCannonHelper\0on_copyBitPushButton_clicked\0"
    "\0on_pasteBitPushButton_clicked\0"
    "on_genPushButton_clicked\0"
    "on_languageComboBox_activated\0index\0"
    "on_settingTableWidget_cellClicked\0"
    "on_applyPushButton_pressed\0generateTrace\0"
    "updateSetting\0updatePearlInfo\0updateAll\0"
    "tryLoadBitSeq\0sortSettingTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PearlCannonHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       7,    2,   80,    2, 0x0a /* Public */,
       8,    0,   85,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x0a /* Public */,
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    1,   90,    2, 0x0a /* Public */,
      14,    1,   93,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void PearlCannonHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PearlCannonHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_copyBitPushButton_clicked(); break;
        case 1: _t->on_pasteBitPushButton_clicked(); break;
        case 2: _t->on_genPushButton_clicked(); break;
        case 3: _t->on_languageComboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_settingTableWidget_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_applyPushButton_pressed(); break;
        case 6: _t->generateTrace(); break;
        case 7: _t->updateSetting(); break;
        case 8: _t->updatePearlInfo(); break;
        case 9: _t->updateAll(); break;
        case 10: _t->tryLoadBitSeq((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->sortSettingTable((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PearlCannonHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_PearlCannonHelper.data,
    qt_meta_data_PearlCannonHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PearlCannonHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PearlCannonHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PearlCannonHelper.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int PearlCannonHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
