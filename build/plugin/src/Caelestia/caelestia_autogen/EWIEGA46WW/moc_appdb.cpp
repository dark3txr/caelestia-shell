/****************************************************************************
** Meta object code from reading C++ file 'appdb.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugin/src/Caelestia/appdb.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appdb.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9caelestia8AppEntryE_t {};
} // unnamed namespace

template <> constexpr inline auto caelestia::AppEntry::qt_create_metaobjectdata<qt_meta_tag_ZN9caelestia8AppEntryE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "caelestia::AppEntry",
        "QML.Element",
        "auto",
        "QML.Creatable",
        "false",
        "QML.UncreatableReason",
        "AppEntry instances can only be retrieved from an AppDb",
        "frequencyChanged",
        "",
        "nameChanged",
        "commentChanged",
        "execStringChanged",
        "startupClassChanged",
        "genericNameChanged",
        "categoriesChanged",
        "keywordsChanged",
        "entry",
        "frequency",
        "id",
        "name",
        "comment",
        "execString",
        "startupClass",
        "genericName",
        "categories",
        "keywords"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'frequencyChanged'
        QtMocHelpers::SignalData<void()>(7, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'nameChanged'
        QtMocHelpers::SignalData<void()>(9, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'commentChanged'
        QtMocHelpers::SignalData<void()>(10, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'execStringChanged'
        QtMocHelpers::SignalData<void()>(11, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'startupClassChanged'
        QtMocHelpers::SignalData<void()>(12, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'genericNameChanged'
        QtMocHelpers::SignalData<void()>(13, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'categoriesChanged'
        QtMocHelpers::SignalData<void()>(14, 8, QMC::AccessPublic, QMetaType::Void),
        // Signal 'keywordsChanged'
        QtMocHelpers::SignalData<void()>(15, 8, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'entry'
        QtMocHelpers::PropertyData<QObject*>(16, QMetaType::QObjectStar, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'frequency'
        QtMocHelpers::PropertyData<quint32>(17, QMetaType::UInt, QMC::DefaultPropertyFlags, 0),
        // property 'id'
        QtMocHelpers::PropertyData<QString>(18, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(19, QMetaType::QString, QMC::DefaultPropertyFlags, 1),
        // property 'comment'
        QtMocHelpers::PropertyData<QString>(20, QMetaType::QString, QMC::DefaultPropertyFlags, 2),
        // property 'execString'
        QtMocHelpers::PropertyData<QString>(21, QMetaType::QString, QMC::DefaultPropertyFlags, 3),
        // property 'startupClass'
        QtMocHelpers::PropertyData<QString>(22, QMetaType::QString, QMC::DefaultPropertyFlags, 4),
        // property 'genericName'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags, 5),
        // property 'categories'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags, 6),
        // property 'keywords'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags, 7),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
            {    5,    6 },
    });
    return QtMocHelpers::metaObjectData<AppEntry, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject caelestia::AppEntry::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8AppEntryE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8AppEntryE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9caelestia8AppEntryE_t>.metaTypes,
    nullptr
} };

void caelestia::AppEntry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AppEntry *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->frequencyChanged(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->commentChanged(); break;
        case 3: _t->execStringChanged(); break;
        case 4: _t->startupClassChanged(); break;
        case 5: _t->genericNameChanged(); break;
        case 6: _t->categoriesChanged(); break;
        case 7: _t->keywordsChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AppEntry::*)()>(_a, &AppEntry::frequencyChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppEntry::*)()>(_a, &AppEntry::nameChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppEntry::*)()>(_a, &AppEntry::commentChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppEntry::*)()>(_a, &AppEntry::execStringChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppEntry::*)()>(_a, &AppEntry::startupClassChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppEntry::*)()>(_a, &AppEntry::genericNameChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppEntry::*)()>(_a, &AppEntry::categoriesChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppEntry::*)()>(_a, &AppEntry::keywordsChanged, 7))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QObject**>(_v) = _t->entry(); break;
        case 1: *reinterpret_cast<quint32*>(_v) = _t->frequency(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->id(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->name(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->comment(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->execString(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->startupClass(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->genericName(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->categories(); break;
        case 9: *reinterpret_cast<QString*>(_v) = _t->keywords(); break;
        default: break;
        }
    }
}

const QMetaObject *caelestia::AppEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caelestia::AppEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia8AppEntryE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int caelestia::AppEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void caelestia::AppEntry::frequencyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void caelestia::AppEntry::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void caelestia::AppEntry::commentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void caelestia::AppEntry::execStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void caelestia::AppEntry::startupClassChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void caelestia::AppEntry::genericNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void caelestia::AppEntry::categoriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void caelestia::AppEntry::keywordsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
namespace {
struct qt_meta_tag_ZN9caelestia5AppDbE_t {};
} // unnamed namespace

template <> constexpr inline auto caelestia::AppDb::qt_create_metaobjectdata<qt_meta_tag_ZN9caelestia5AppDbE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "caelestia::AppDb",
        "QML.Element",
        "auto",
        "pathChanged",
        "",
        "entriesChanged",
        "favouriteAppsChanged",
        "appsChanged",
        "incrementFrequency",
        "id",
        "uuid",
        "path",
        "entries",
        "QObjectList",
        "favouriteApps",
        "apps",
        "QQmlListProperty<caelestia::AppEntry>"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'pathChanged'
        QtMocHelpers::SignalData<void()>(3, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'entriesChanged'
        QtMocHelpers::SignalData<void()>(5, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'favouriteAppsChanged'
        QtMocHelpers::SignalData<void()>(6, 4, QMC::AccessPublic, QMetaType::Void),
        // Signal 'appsChanged'
        QtMocHelpers::SignalData<void()>(7, 4, QMC::AccessPublic, QMetaType::Void),
        // Method 'incrementFrequency'
        QtMocHelpers::MethodData<void(const QString &)>(8, 4, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'uuid'
        QtMocHelpers::PropertyData<QString>(10, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'path'
        QtMocHelpers::PropertyData<QString>(11, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Required, 0),
        // property 'entries'
        QtMocHelpers::PropertyData<QObjectList>(12, 0x80000000 | 13, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Required, 1),
        // property 'favouriteApps'
        QtMocHelpers::PropertyData<QStringList>(14, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Required, 2),
        // property 'apps'
        QtMocHelpers::PropertyData<QQmlListProperty<caelestia::AppEntry>>(15, 0x80000000 | 16, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 3),
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
    });
    return QtMocHelpers::metaObjectData<AppDb, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject caelestia::AppDb::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia5AppDbE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia5AppDbE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9caelestia5AppDbE_t>.metaTypes,
    nullptr
} };

void caelestia::AppDb::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AppDb *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->pathChanged(); break;
        case 1: _t->entriesChanged(); break;
        case 2: _t->favouriteAppsChanged(); break;
        case 3: _t->appsChanged(); break;
        case 4: _t->incrementFrequency((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (AppDb::*)()>(_a, &AppDb::pathChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppDb::*)()>(_a, &AppDb::entriesChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppDb::*)()>(_a, &AppDb::favouriteAppsChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (AppDb::*)()>(_a, &AppDb::appsChanged, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->uuid(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->path(); break;
        case 2: *reinterpret_cast<QObjectList*>(_v) = _t->entries(); break;
        case 3: *reinterpret_cast<QStringList*>(_v) = _t->favouriteApps(); break;
        case 4: *reinterpret_cast<QQmlListProperty<caelestia::AppEntry>*>(_v) = _t->apps(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setPath(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setEntries(*reinterpret_cast<QObjectList*>(_v)); break;
        case 3: _t->setFavouriteApps(*reinterpret_cast<QStringList*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *caelestia::AppDb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caelestia::AppDb::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia5AppDbE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int caelestia::AppDb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
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
void caelestia::AppDb::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void caelestia::AppDb::entriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void caelestia::AppDb::favouriteAppsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void caelestia::AppDb::appsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
