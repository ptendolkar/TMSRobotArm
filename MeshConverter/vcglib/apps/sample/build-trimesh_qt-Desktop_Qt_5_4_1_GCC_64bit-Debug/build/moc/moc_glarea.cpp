/****************************************************************************
** Meta object code from reading C++ file 'glarea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../trimesh_QT/glarea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GLArea_t {
    QByteArrayData data[10];
    char stringdata[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLArea_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GLArea_t qt_meta_stringdata_GLArea = {
    {
QT_MOC_LITERAL(0, 0, 6), // "GLArea"
QT_MOC_LITERAL(1, 7, 12), // "setStatusBar"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "message"
QT_MOC_LITERAL(4, 29, 14), // "selectDrawMode"
QT_MOC_LITERAL(5, 44, 4), // "mode"
QT_MOC_LITERAL(6, 49, 8), // "loadMesh"
QT_MOC_LITERAL(7, 58, 8), // "filename"
QT_MOC_LITERAL(8, 67, 15), // "loadTetrahedron"
QT_MOC_LITERAL(9, 83, 16) // "loadDodecahedron"

    },
    "GLArea\0setStatusBar\0\0message\0"
    "selectDrawMode\0mode\0loadMesh\0filename\0"
    "loadTetrahedron\0loadDodecahedron"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,
       8,    0,   48,    2, 0x0a /* Public */,
       9,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GLArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLArea *_t = static_cast<GLArea *>(_o);
        switch (_id) {
        case 0: _t->setStatusBar((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->selectDrawMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->loadMesh((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->loadTetrahedron(); break;
        case 4: _t->loadDodecahedron(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GLArea::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLArea::setStatusBar)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject GLArea::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLArea.data,
      qt_meta_data_GLArea,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GLArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLArea::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GLArea.stringdata))
        return static_cast<void*>(const_cast< GLArea*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GLArea::setStatusBar(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
