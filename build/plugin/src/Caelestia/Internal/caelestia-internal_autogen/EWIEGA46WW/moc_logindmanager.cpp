/****************************************************************************
** Meta object code from reading C++ file 'logindmanager.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../plugin/src/Caelestia/Internal/logindmanager.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logindmanager.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9caelestia8internal13LogindManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto caelestia::internal::LogindManager::qt_create_metaobjectdata<qt_meta_tag_ZN9caelestia8internal13LogindManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "caelestia::internal::LogindManager",
        "QML.Element",
        "auto",
        "aboutToSleep",
        "",
        "resumed",
        "lockRequested",
        "unlockRequested",
        "handlePrepareForSleep",
        "sleep",
        "handleLockRequested",
        "handleUnlockRequested"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'aboutToSleep'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'resumed'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'lockRequested'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'unlockRequested'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Slot 'handlePrepareForSleep'
        QtMocHelpers::SlotData<void(bool)>(8, 4, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 9 },
        }}),
        // Slot 'handleLockRequested'
        QtMocHelpers::SlotData<void()>(10, 4, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleUnlockRequested'
        QtMocHelpers::SlotData<void()>(11, 4, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<LogindManager, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject caelestia::internal::LogindManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal13LogindManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal13LogindManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9caelestia8internal13LogindManagerE_t>.metaTypes,
    nullptr
} };

void caelestia::internal::LogindManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<LogindManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->aboutToSleep(); break;
        case 1: _t->resumed(); break;
        case 2: _t->lockRequested(); break;
        case 3: _t->unlockRequested(); break;
        case 4: _t->handlePrepareForSleep((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->handleLockRequested(); break;
        case 6: _t->handleUnlockRequested(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (LogindManager::*)()>(_a, &LogindManager::aboutToSleep, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogindManager::*)()>(_a, &LogindManager::resumed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogindManager::*)()>(_a, &LogindManager::lockRequested, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (LogindManager::*)()>(_a, &LogindManager::unlockRequested, 3))
            return;
    }
}

const QMetaObject *caelestia::internal::LogindManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caelestia::internal::LogindManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal13LogindManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int caelestia::internal::LogindManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void caelestia::internal::LogindManager::aboutToSleep()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void caelestia::internal::LogindManager::resumed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void caelestia::internal::LogindManager::lockRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void caelestia::internal::LogindManager::unlockRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
