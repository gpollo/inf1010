/****************************************************************************
** Meta object code from reading C++ file 'Image.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TP6/src/Image.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Image.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Image_t {
    QByteArrayData data[9];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Image_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Image_t qt_meta_stringdata_Image = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Image"
QT_MOC_LITERAL(1, 6, 15), // "changementImage"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 5), // "image"
QT_MOC_LITERAL(4, 29, 23), // "convertirEnNuanceDeGris"
QT_MOC_LITERAL(5, 53, 22), // "convertirEnNoirEtBlanc"
QT_MOC_LITERAL(6, 76, 15), // "mettreEnNegatif"
QT_MOC_LITERAL(7, 92, 4), // "undo"
QT_MOC_LITERAL(8, 97, 4) // "redo"

    },
    "Image\0changementImage\0\0image\0"
    "convertirEnNuanceDeGris\0convertirEnNoirEtBlanc\0"
    "mettreEnNegatif\0undo\0redo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Image[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Image::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Image *_t = static_cast<Image *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changementImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->convertirEnNuanceDeGris(); break;
        case 2: _t->convertirEnNoirEtBlanc(); break;
        case 3: _t->mettreEnNegatif(); break;
        case 4: _t->undo(); break;
        case 5: _t->redo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Image::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Image::changementImage)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Image::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Image.data,
      qt_meta_data_Image,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Image::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Image::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Image.stringdata0))
        return static_cast<void*>(const_cast< Image*>(this));
    return QObject::qt_metacast(_clname);
}

int Image::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Image::changementImage(const QImage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
