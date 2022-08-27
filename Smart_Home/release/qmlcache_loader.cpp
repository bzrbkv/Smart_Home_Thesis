#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>

static const unsigned char qt_resource_tree[] = {
0,
0,0,0,0,2,0,0,0,10,0,0,0,1,0,0,0,
220,0,0,0,0,0,1,0,0,0,0,0,0,0,136,0,
0,0,0,0,1,0,0,0,0,0,0,0,62,0,0,0,
0,0,1,0,0,0,0,0,0,0,248,0,0,0,0,0,
1,0,0,0,0,0,0,0,8,0,0,0,0,0,1,0,
0,0,0,0,0,0,84,0,0,0,0,0,1,0,0,0,
0,0,0,0,184,0,0,0,0,0,1,0,0,0,0,0,
0,0,162,0,0,0,0,0,1,0,0,0,0,0,0,0,
36,0,0,0,0,0,1,0,0,0,0,0,0,0,110,0,
0,0,0,0,1,0,0,0,0};
static const unsigned char qt_resource_names[] = {
0,
1,0,0,0,47,0,47,0,11,8,52,56,92,0,67,0,
108,0,105,0,109,0,97,0,116,0,101,0,46,0,113,0,
109,0,108,0,10,12,141,104,92,0,67,0,97,0,109,0,
101,0,114,0,97,0,46,0,113,0,109,0,108,0,8,5,
158,94,92,0,76,0,111,0,99,0,107,0,46,0,113,0,
109,0,108,0,10,8,229,225,188,0,69,0,110,0,101,0,
114,0,103,0,121,0,46,0,113,0,109,0,108,0,10,15,
192,11,156,0,76,0,105,0,103,0,104,0,116,0,115,0,
46,0,113,0,109,0,108,0,10,1,204,31,124,0,83,0,
111,0,99,0,107,0,101,0,116,0,46,0,113,0,109,0,
108,0,8,12,88,94,92,0,77,0,101,0,110,0,117,0,
46,0,113,0,109,0,108,0,15,10,76,194,220,0,86,0,
105,0,100,0,101,0,111,0,80,0,108,0,97,0,121,0,
101,0,114,0,46,0,113,0,109,0,108,0,11,0,145,133,
188,0,77,0,121,0,83,0,116,0,121,0,108,0,101,0,
46,0,113,0,109,0,108,0,8,8,1,90,92,0,109,0,
97,0,105,0,110,0,46,0,113,0,109,0,108};
static const unsigned char qt_resource_empty_payout[] = { 0, 0, 0, 0, 0 };
QT_BEGIN_NAMESPACE
extern Q_CORE_EXPORT bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
QT_END_NAMESPACE
namespace QmlCacheGeneratedCode {
namespace _0x5f__main_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__MyStyle_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__VideoPlayer_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Menu_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Socket_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Lights_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Energy_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Lock_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Camera_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _0x5f__Climate_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
        resourcePathToCachedUnit.insert(QStringLiteral("/main.qml"), &QmlCacheGeneratedCode::_0x5f__main_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/MyStyle.qml"), &QmlCacheGeneratedCode::_0x5f__MyStyle_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/VideoPlayer.qml"), &QmlCacheGeneratedCode::_0x5f__VideoPlayer_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Menu.qml"), &QmlCacheGeneratedCode::_0x5f__Menu_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Socket.qml"), &QmlCacheGeneratedCode::_0x5f__Socket_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Lights.qml"), &QmlCacheGeneratedCode::_0x5f__Lights_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Energy.qml"), &QmlCacheGeneratedCode::_0x5f__Energy_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Lock.qml"), &QmlCacheGeneratedCode::_0x5f__Lock_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Camera.qml"), &QmlCacheGeneratedCode::_0x5f__Camera_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/Climate.qml"), &QmlCacheGeneratedCode::_0x5f__Climate_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.version = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
QT_PREPEND_NAMESPACE(qRegisterResourceData)(/*version*/0x01, qt_resource_tree, qt_resource_names, qt_resource_empty_payout);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qml)() {
    ::unitRegistry();
    Q_INIT_RESOURCE(qml_qmlcache);
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qml))
int QT_MANGLE_NAMESPACE(qCleanupResources_qml)() {
    Q_CLEANUP_RESOURCE(qml_qmlcache);
    return 1;
}
