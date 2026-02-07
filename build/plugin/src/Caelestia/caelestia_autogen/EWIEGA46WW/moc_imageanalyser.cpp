/****************************************************************************
** Meta object code from reading C++ file 'imageanalyser.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugin/src/Caelestia/imageanalyser.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imageanalyser.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN9caelestia13ImageAnalyserE_t {};
} // unnamed namespace

template <> constexpr inline auto caelestia::ImageAnalyser::qt_create_metaobjectdata<qt_meta_tag_ZN9caelestia13ImageAnalyserE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "caelestia::ImageAnalyser",
        "QML.Element",
        "auto",
        "sourceChanged",
        "",
        "sourceItemChanged",
        "rescaleSizeChanged",
        "dominantColourChanged",
        "luminanceChanged",
        "requestUpdate",
        "source",
        "sourceItem",
        "QQuickItem*",
        "rescaleSize",
        "dominantColour",
        "QColor",
        "luminance"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'sourceChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'sourceItemChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rescaleSizeChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'dominantColourChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'luminanceChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'requestUpdate'
        QtMocHelpers::MethodData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'source'
        QtMocHelpers::PropertyData<QString>(10, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
        // property 'sourceItem'
        QtMocHelpers::PropertyData<QQuickItem*>(11, 0x80000000 | 12, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'rescaleSize'
        QtMocHelpers::PropertyData<int>(13, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 2),
        // property 'dominantColour'
        QtMocHelpers::PropertyData<QColor>(14, 0x80000000 | 15, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 3),
        // property 'luminance'
        QtMocHelpers::PropertyData<qreal>(16, QMetaType::QReal, QMC::DefaultPropertyFlags, 4),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<ImageAnalyser, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject caelestia::ImageAnalyser::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia13ImageAnalyserE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia13ImageAnalyserE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9caelestia13ImageAnalyserE_t>.metaTypes,
    nullptr
} };

void caelestia::ImageAnalyser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ImageAnalyser *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->sourceChanged(); break;
        case 1: _t->sourceItemChanged(); break;
        case 2: _t->rescaleSizeChanged(); break;
        case 3: _t->dominantColourChanged(); break;
        case 4: _t->luminanceChanged(); break;
        case 5: _t->requestUpdate(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ImageAnalyser::*)()>(_a, &ImageAnalyser::sourceChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ImageAnalyser::*)()>(_a, &ImageAnalyser::sourceItemChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ImageAnalyser::*)()>(_a, &ImageAnalyser::rescaleSizeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ImageAnalyser::*)()>(_a, &ImageAnalyser::dominantColourChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ImageAnalyser::*)()>(_a, &ImageAnalyser::luminanceChanged, 4))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast<QQuickItem**>(_v) = _t->sourceItem(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->rescaleSize(); break;
        case 3: *reinterpret_cast<QColor*>(_v) = _t->dominantColour(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->luminance(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSourceItem(*reinterpret_cast<QQuickItem**>(_v)); break;
        case 2: _t->setRescaleSize(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *caelestia::ImageAnalyser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caelestia::ImageAnalyser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia13ImageAnalyserE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int caelestia::ImageAnalyser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void caelestia::ImageAnalyser::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void caelestia::ImageAnalyser::sourceItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void caelestia::ImageAnalyser::rescaleSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void caelestia::ImageAnalyser::dominantColourChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void caelestia::ImageAnalyser::luminanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
