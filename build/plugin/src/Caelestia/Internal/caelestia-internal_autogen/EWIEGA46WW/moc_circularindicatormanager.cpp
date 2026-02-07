/****************************************************************************
** Meta object code from reading C++ file 'circularindicatormanager.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../plugin/src/Caelestia/Internal/circularindicatormanager.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'circularindicatormanager.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9caelestia8internal24CircularIndicatorManagerE_t {};
} // unnamed namespace

template <> constexpr inline auto caelestia::internal::CircularIndicatorManager::qt_create_metaobjectdata<qt_meta_tag_ZN9caelestia8internal24CircularIndicatorManagerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "caelestia::internal::CircularIndicatorManager",
        "QML.Element",
        "auto",
        "startFractionChanged",
        "",
        "endFractionChanged",
        "rotationChanged",
        "progressChanged",
        "completeEndProgressChanged",
        "indeterminateAnimationTypeChanged",
        "startFraction",
        "endFraction",
        "rotation",
        "progress",
        "completeEndProgress",
        "duration",
        "completeEndDuration",
        "indeterminateAnimationType",
        "IndeterminateAnimationType",
        "Advance",
        "Retreat"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'startFractionChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'endFractionChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rotationChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'progressChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'completeEndProgressChanged'
        QtMocHelpers::SignalData<void()>(8, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'indeterminateAnimationTypeChanged'
        QtMocHelpers::SignalData<void()>(9, 4, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'startFraction'
        QtMocHelpers::PropertyData<qreal>(10, QMetaType::QReal, QMC::DefaultPropertyFlags, 0),
        // property 'endFraction'
        QtMocHelpers::PropertyData<qreal>(11, QMetaType::QReal, QMC::DefaultPropertyFlags, 1),
        // property 'rotation'
        QtMocHelpers::PropertyData<qreal>(12, QMetaType::QReal, QMC::DefaultPropertyFlags, 2),
        // property 'progress'
        QtMocHelpers::PropertyData<qreal>(13, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 3),
        // property 'completeEndProgress'
        QtMocHelpers::PropertyData<qreal>(14, QMetaType::QReal, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 4),
        // property 'duration'
        QtMocHelpers::PropertyData<qreal>(15, QMetaType::QReal, QMC::DefaultPropertyFlags, 5),
        // property 'completeEndDuration'
        QtMocHelpers::PropertyData<qreal>(16, QMetaType::QReal, QMC::DefaultPropertyFlags, 5),
        // property 'indeterminateAnimationType'
        QtMocHelpers::PropertyData<enum IndeterminateAnimationType>(17, 0x80000000 | 18, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 5),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'IndeterminateAnimationType'
        QtMocHelpers::EnumData<enum IndeterminateAnimationType>(18, 18, QMC::EnumFlags{}).add({
            {   19, IndeterminateAnimationType::Advance },
            {   20, IndeterminateAnimationType::Retreat },
        }),
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<CircularIndicatorManager, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject caelestia::internal::CircularIndicatorManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal24CircularIndicatorManagerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal24CircularIndicatorManagerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9caelestia8internal24CircularIndicatorManagerE_t>.metaTypes,
    nullptr
} };

void caelestia::internal::CircularIndicatorManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CircularIndicatorManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->startFractionChanged(); break;
        case 1: _t->endFractionChanged(); break;
        case 2: _t->rotationChanged(); break;
        case 3: _t->progressChanged(); break;
        case 4: _t->completeEndProgressChanged(); break;
        case 5: _t->indeterminateAnimationTypeChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (CircularIndicatorManager::*)()>(_a, &CircularIndicatorManager::startFractionChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (CircularIndicatorManager::*)()>(_a, &CircularIndicatorManager::endFractionChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (CircularIndicatorManager::*)()>(_a, &CircularIndicatorManager::rotationChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (CircularIndicatorManager::*)()>(_a, &CircularIndicatorManager::progressChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (CircularIndicatorManager::*)()>(_a, &CircularIndicatorManager::completeEndProgressChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (CircularIndicatorManager::*)()>(_a, &CircularIndicatorManager::indeterminateAnimationTypeChanged, 5))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<qreal*>(_v) = _t->startFraction(); break;
        case 1: *reinterpret_cast<qreal*>(_v) = _t->endFraction(); break;
        case 2: *reinterpret_cast<qreal*>(_v) = _t->rotation(); break;
        case 3: *reinterpret_cast<qreal*>(_v) = _t->progress(); break;
        case 4: *reinterpret_cast<qreal*>(_v) = _t->completeEndProgress(); break;
        case 5: *reinterpret_cast<qreal*>(_v) = _t->duration(); break;
        case 6: *reinterpret_cast<qreal*>(_v) = _t->completeEndDuration(); break;
        case 7: *reinterpret_cast<enum IndeterminateAnimationType*>(_v) = _t->indeterminateAnimationType(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setProgress(*reinterpret_cast<qreal*>(_v)); break;
        case 4: _t->setCompleteEndProgress(*reinterpret_cast<qreal*>(_v)); break;
        case 7: _t->setIndeterminateAnimationType(*reinterpret_cast<enum IndeterminateAnimationType*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *caelestia::internal::CircularIndicatorManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caelestia::internal::CircularIndicatorManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8internal24CircularIndicatorManagerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int caelestia::internal::CircularIndicatorManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void caelestia::internal::CircularIndicatorManager::startFractionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void caelestia::internal::CircularIndicatorManager::endFractionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void caelestia::internal::CircularIndicatorManager::rotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void caelestia::internal::CircularIndicatorManager::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void caelestia::internal::CircularIndicatorManager::completeEndProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void caelestia::internal::CircularIndicatorManager::indeterminateAnimationTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
