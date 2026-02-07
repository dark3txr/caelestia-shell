/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#if __has_include(<beattracker.hpp>)
#  include <beattracker.hpp>
#endif
#if __has_include(<cavaprovider.hpp>)
#  include <cavaprovider.hpp>
#endif
#if __has_include(<serviceref.hpp>)
#  include <serviceref.hpp>
#endif


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Caelestia_Services()
{
    qmlRegisterModule("Caelestia.Services", 1, 0);
    QT_WARNING_PUSH QT_WARNING_DISABLE_DEPRECATED
    QMetaType::fromType<caelestia::services::AudioProvider *>().id();
    qmlRegisterTypesAndRevisions<caelestia::services::BeatTracker>("Caelestia.Services", 1);
    qmlRegisterTypesAndRevisions<caelestia::services::CavaProvider>("Caelestia.Services", 1);
    QMetaType::fromType<caelestia::services::Service *>().id();
    qmlRegisterTypesAndRevisions<caelestia::services::ServiceRef>("Caelestia.Services", 1);
    QT_WARNING_POP
    qmlRegisterModule("Caelestia.Services", 1, 4);
}

static const QQmlModuleRegistration caelestiaServicesRegistration("Caelestia.Services", qml_register_types_Caelestia_Services);
