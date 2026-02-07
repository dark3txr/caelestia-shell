/****************************************************************************
** Meta object code from reading C++ file 'hyprextras.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../plugin/src/Caelestia/Internal/hyprextras.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hyprextras.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9caelestia8internal4hypr10HyprExtrasE_t {};
} // unnamed namespace

template <> constexpr inline auto caelestia::internal::hypr::HyprExtras::qt_create_metaobjectdata<qt_meta_tag_ZN9caelestia8internal4hypr10HyprExtrasE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "caelestia::internal::hypr::HyprExtras",
        "QML.Element",
        "auto",
        "optionsChanged",
        "",
        "message",
        "batchMessage",
        "messages",
        "applyOptions",
        "QVariantHash",
        "options",
        "refreshOptions",
        "refreshDevices",
        "devices",
        "caelestia::internal::hypr::HyprDevices*"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'optionsChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'message'
        QtMocHelpers::MethodData<void(const QString &)>(5, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Method 'batchMessage'
        QtMocHelpers::MethodData<void(const QStringList &)>(6, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QStringList, 7 },
        }}),
        // Method 'applyOptions'
        QtMocHelpers::MethodData<void(const QVariantHash &)>(8, 4, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Method 'refreshOptions'
        QtMocHelpers::MethodData<void()>(11, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'refreshDevices'
        QtMocHelpers::MethodData<void()>(12, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'options'
        QtMocHelpers::PropertyData<QVariantHash>(10, 0x80000000 | 9, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 0),
        // property 'devices'
        QtMocHelpers::PropertyData<caelestia::internal::hypr::HyprDevices*>(13, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<HyprExtras, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject caelestia::internal::hypr::HyprExtras::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal4hypr10HyprExtrasE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal4hypr10HyprExtrasE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9caelestia8internal4hypr10HyprExtrasE_t>.metaTypes,
    nullptr
} };

void caelestia::internal::hypr::HyprExtras::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HyprExtras *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->optionsChanged(); break;
        case 1: _t->message((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->batchMessage((*reinterpret_cast<std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 3: _t->applyOptions((*reinterpret_cast<std::add_pointer_t<QVariantHash>>(_a[1]))); break;
        case 4: _t->refreshOptions(); break;
        case 5: _t->refreshDevices(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (HyprExtras::*)()>(_a, &HyprExtras::optionsChanged, 0))
            return;
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< caelestia::internal::hypr::HyprDevices* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QVariantHash*>(_v) = _t->options(); break;
        case 1: *reinterpret_cast<caelestia::internal::hypr::HyprDevices**>(_v) = _t->devices(); break;
        default: break;
        }
    }
}

const QMetaObject *caelestia::internal::hypr::HyprExtras::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caelestia::internal::hypr::HyprExtras::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal4hypr10HyprExtrasE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int caelestia::internal::hypr::HyprExtras::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void caelestia::internal::hypr::HyprExtras::optionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
