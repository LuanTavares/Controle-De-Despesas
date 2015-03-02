/****************************************************************************
** Meta object code from reading C++ file 'CadastroTipoLancamento.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ControleDeDespesas/CadastroTipoLancamento.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CadastroTipoLancamento.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CadastroTipoLancamento_t {
    QByteArrayData data[3];
    char stringdata[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CadastroTipoLancamento_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CadastroTipoLancamento_t qt_meta_stringdata_CadastroTipoLancamento = {
    {
QT_MOC_LITERAL(0, 0, 22),
QT_MOC_LITERAL(1, 23, 19),
QT_MOC_LITERAL(2, 43, 0)
    },
    "CadastroTipoLancamento\0gravaTipoLancamento\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CadastroTipoLancamento[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CadastroTipoLancamento::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CadastroTipoLancamento *_t = static_cast<CadastroTipoLancamento *>(_o);
        switch (_id) {
        case 0: _t->gravaTipoLancamento(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CadastroTipoLancamento::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CadastroTipoLancamento.data,
      qt_meta_data_CadastroTipoLancamento,  qt_static_metacall, 0, 0}
};


const QMetaObject *CadastroTipoLancamento::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CadastroTipoLancamento::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CadastroTipoLancamento.stringdata))
        return static_cast<void*>(const_cast< CadastroTipoLancamento*>(this));
    return QDialog::qt_metacast(_clname);
}

int CadastroTipoLancamento::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
