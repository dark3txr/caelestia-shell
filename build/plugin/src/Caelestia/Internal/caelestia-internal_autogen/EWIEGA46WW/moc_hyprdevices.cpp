/****************************************************************************
** Meta object code from reading C++ file 'hyprdevices.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../plugin/src/Caelestia/Internal/hyprdevices.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hyprdevices.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9caelestia8internal4hypr12HyprKeyboardE_t {};
} // unnamed namespace

template <> constexpr inline auto caelestia::internal::hypr::HyprKeyboard::qt_create_metaobjectdata<qt_meta_tag_ZN9caelestia8internal4hypr12HyprKeyboardE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "caelestia::internal::hypr::HyprKeyboard",
        "QML.Element",
        "auto",
        "QML.Creatable",
        "false",
        "QML.UncreatableReason",
        "HyprKeyboard instances can only be retrieved from a HyprDevices",
        "lastIpcObjectChanged",
        "",
        "addressChanged",
        "nameChanged",
        "layoutChanged",
        "activeKeymapChanged",
        "capsLockChanged",
        "numLockChanged",
        "mainChanged",
        "lastIpcObject",
        "QVariantHash",
        "address",
        "name",
        "layout",
        "activeKeymap",
        "capsLock",
        "numLock",
        "main"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'lastIpcObjectChanged'
        QtMocHelpers::SignalData<void()>(7, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'addressChanged'
        QtMocHelpers::SignalData<void()>(9, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'nameChanged'
        QtMocHelpers::SignalData<void()>(10, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'layoutChanged'
        QtMocHelpers::SignalData<void()>(11, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'activeKeymapChanged'
        QtMocHelpers::SignalData<void()>(12, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'capsLockChanged'
        QtMocHelpers::SignalData<void()>(13, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'numLockChanged'
        QtMocHelpers::SignalData<void()>(14, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'mainChanged'
        QtMocHelpers::SignalData<void()>(15, 8, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'lastIpcObject'
        QtMocHelpers::PropertyData<QVariantHash>(16, 0x80000000 | 17, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'address'
        QtMocHelpers::PropertyData<QString>(18, QMetaType::QString, QMC::DefaultPropertyFlags, 1),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(19, QMetaType::QString, QMC::DefaultPropertyFlags, 2),
        // property 'layout'
        QtMocHelpers::PropertyData<QString>(20, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'activeKeymap'
        QtMocHelpers::PropertyData<QString>(21, QMetaType::QString, QMC::DefaultPropertyFlags, 4),
        // property 'capsLock'
        QtMocHelpers::PropertyData<bool>(22, QMetaType::Bool, QMC::DefaultPropertyFlags, 5),
        // property 'numLock'
        QtMocHelpers::PropertyData<bool>(23, QMetaType::Bool, QMC::DefaultPropertyFlags, 6),
        // property 'main'
        QtMocHelpers::PropertyData<bool>(24, QMetaType::Bool, QMC::DefaultPropertyFlags, 7),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
            {    5,    6 },
    });
    return QtMocHelpers::metaObjectData<HyprKeyboard, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject caelestia::internal::hypr::HyprKeyboard::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal4hypr12HyprKeyboardE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal4hypr12HyprKeyboardE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9caelestia8internal4hypr12HyprKeyboardE_t>.metaTypes,
    nullptr
} };

void caelestia::internal::hypr::HyprKeyboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HyprKeyboard *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->lastIpcObjectChanged(); break;
        case 1: _t->addressChanged(); break;
        case 2: _t->nameChanged(); break;
        case 3: _t->layoutChanged(); break;
        case 4: _t->activeKeymapChanged(); break;
        case 5: _t->capsLockChanged(); break;
        case 6: _t->numLockChanged(); break;
        case 7: _t->mainChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (HyprKeyboard::*)()>(_a, &HyprKeyboard::lastIpcObjectChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprKeyboard::*)()>(_a, &HyprKeyboard::addressChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprKeyboard::*)()>(_a, &HyprKeyboard::nameChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprKeyboard::*)()>(_a, &HyprKeyboard::layoutChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprKeyboard::*)()>(_a, &HyprKeyboard::activeKeymapChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprKeyboard::*)()>(_a, &HyprKeyboard::capsLockChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprKeyboard::*)()>(_a, &HyprKeyboard::numLockChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (HyprKeyboard::*)()>(_a, &HyprKeyboard::mainChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QVariantHash*>(_v) = _t->lastIpcObject(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->address(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->layout(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->activeKeymap(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->capsLock(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->numLock(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->main(); break;
        default: break;
        }
    }
}

const QMetaObject *caelestia::internal::hypr::HyprKeyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caelestia::internal::hypr::HyprKeyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal4hypr12HyprKeyboardE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int caelestia::internal::hypr::HyprKeyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void caelestia::internal::hypr::HyprKeyboard::lastIpcObjectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void caelestia::internal::hypr::HyprKeyboard::addressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void caelestia::internal::hypr::HyprKeyboard::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void caelestia::internal::hypr::HyprKeyboard::layoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void caelestia::internal::hypr::HyprKeyboard::activeKeymapChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void caelestia::internal::hypr::HyprKeyboard::capsLockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void caelestia::internal::hypr::HyprKeyboard::numLockChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void caelestia::internal::hypr::HyprKeyboard::mainChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
namespace {
struct qt_meta_tag_ZN9caelestia8internal4hypr11HyprDevicesE_t {};
} // unnamed namespace

template <> constexpr inline auto caelestia::internal::hypr::HyprDevices::qt_create_metaobjectdata<qt_meta_tag_ZN9caelestia8internal4hypr11HyprDevicesE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "caelestia::internal::hypr::HyprDevices",
        "QML.Element",
        "auto",
        "QML.Creatable",
        "false",
        "QML.UncreatableReason",
        "HyprDevices instances can only be retrieved from a HyprExtras",
        "keyboardsChanged",
        "",
        "keyboards",
        "QQmlListProperty<caelestia::internal::hypr::HyprKeyboard>"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'keyboardsChanged'
        QtMocHelpers::SignalData<void()>(7, 8, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'keyboards'
        QtMocHelpers::PropertyData<QQmlListProperty<caelestia::internal::hypr::HyprKeyboard>>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
            {    5,    6 },
    });
    return QtMocHelpers::metaObjectData<HyprDevices, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject caelestia::internal::hypr::HyprDevices::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal4hypr11HyprDevicesE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal4hypr11HyprDevicesE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9caelestia8internal4hypr11HyprDevicesE_t>.metaTypes,
    nullptr
} };

void caelestia::internal::hypr::HyprDevices::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HyprDevices *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->keyboardsChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (HyprDevices::*)()>(_a, &HyprDevices::keyboardsChanged, 0))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QQmlListProperty<caelestia::internal::hypr::HyprKeyboard>*>(_v) = _t->keyboards(); break;
        default: break;
        }
    }
}

const QMetaObject *caelestia::internal::hypr::HyprDevices::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caelestia::internal::hypr::HyprDevices::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal4hypr11HyprDevicesE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int caelestia::internal::hypr::HyprDevices::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void caelestia::internal::hypr::HyprDevices::keyboardsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
