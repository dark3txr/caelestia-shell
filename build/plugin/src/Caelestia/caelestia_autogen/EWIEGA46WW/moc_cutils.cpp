/****************************************************************************
** Meta object code from reading C++ file 'cutils.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../plugin/src/Caelestia/cutils.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cutils.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9caelestia6CUtilsE_t {};
} // unnamed namespace

template <> constexpr inline auto caelestia::CUtils::qt_create_metaobjectdata<qt_meta_tag_ZN9caelestia6CUtilsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "caelestia::CUtils",
        "QML.Element",
        "auto",
        "QML.Singleton",
        "true",
        "saveItem",
        "",
        "QQuickItem*",
        "target",
        "QUrl",
        "path",
        "QRect",
        "rect",
        "QJSValue",
        "onSaved",
        "onFailed",
        "copyFile",
        "source",
        "overwrite",
        "deleteFile",
        "toLocalFile",
        "url"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'saveItem'
        QtMocHelpers::MethodData<void(QQuickItem *, const QUrl &)>(5, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 },
        }}),
        // Method 'saveItem'
        QtMocHelpers::MethodData<void(QQuickItem *, const QUrl &, const QRect &)>(5, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 }, { 0x80000000 | 11, 12 },
        }}),
        // Method 'saveItem'
        QtMocHelpers::MethodData<void(QQuickItem *, const QUrl &, QJSValue)>(5, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 }, { 0x80000000 | 13, 14 },
        }}),
        // Method 'saveItem'
        QtMocHelpers::MethodData<void(QQuickItem *, const QUrl &, QJSValue, QJSValue)>(5, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 }, { 0x80000000 | 13, 14 }, { 0x80000000 | 13, 15 },
        }}),
        // Method 'saveItem'
        QtMocHelpers::MethodData<void(QQuickItem *, const QUrl &, const QRect &, QJSValue)>(5, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 }, { 0x80000000 | 11, 12 }, { 0x80000000 | 13, 14 },
        }}),
        // Method 'saveItem'
        QtMocHelpers::MethodData<void(QQuickItem *, const QUrl &, const QRect &, QJSValue, QJSValue)>(5, 6, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { 0x80000000 | 9, 10 }, { 0x80000000 | 11, 12 }, { 0x80000000 | 13, 14 },
            { 0x80000000 | 13, 15 },
        }}),
        // Method 'copyFile'
        QtMocHelpers::MethodData<bool(const QUrl &, const QUrl &, bool) const>(16, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 9, 17 }, { 0x80000000 | 9, 8 }, { QMetaType::Bool, 18 },
        }}),
        // Method 'copyFile'
        QtMocHelpers::MethodData<bool(const QUrl &, const QUrl &) const>(16, 6, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { 0x80000000 | 9, 17 }, { 0x80000000 | 9, 8 },
        }}),
        // Method 'deleteFile'
        QtMocHelpers::MethodData<bool(const QUrl &) const>(19, 6, QMC::AccessPublic, QMetaType::Bool, {{
            { 0x80000000 | 9, 10 },
        }}),
        // Method 'toLocalFile'
        QtMocHelpers::MethodData<QString(const QUrl &) const>(20, 6, QMC::AccessPublic, QMetaType::QString, {{
            { 0x80000000 | 9, 21 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    QtMocHelpers::UintData qt_constructors {};
    QtMocHelpers::ClassInfos qt_classinfo({
            {    1,    2 },
            {    3,    4 },
    });
    return QtMocHelpers::metaObjectData<CUtils, void>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums, qt_constructors, qt_classinfo);
}
Q_CONSTINIT const QMetaObject caelestia::CUtils::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia6CUtilsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia6CUtilsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9caelestia6CUtilsE_t>.metaTypes,
    nullptr
} };

void caelestia::CUtils::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<CUtils *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->saveItem((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[2]))); break;
        case 1: _t->saveItem((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QRect>>(_a[3]))); break;
        case 2: _t->saveItem((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[3]))); break;
        case 3: _t->saveItem((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4]))); break;
        case 4: _t->saveItem((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QRect>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4]))); break;
        case 5: _t->saveItem((*reinterpret_cast<std::add_pointer_t<QQuickItem*>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QRect>>(_a[3])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[4])),(*reinterpret_cast<std::add_pointer_t<QJSValue>>(_a[5]))); break;
        case 6: { bool _r = _t->copyFile((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->copyFile((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[2])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->deleteFile((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->toLocalFile((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast<QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QJSValue >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QQuickItem* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *caelestia::CUtils::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *caelestia::CUtils::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9caelestia6CUtilsE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int caelestia::CUtils::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
