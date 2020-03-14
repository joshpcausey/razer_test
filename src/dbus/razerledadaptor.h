/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp dbus/razerled.xml -a razerledadaptor.h:razerledadaptor.cpp -c RazerLEDAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef RAZERLEDADAPTOR_H
#define RAZERLEDADAPTOR_H
#include "razer_test.h"
using namespace razer_test;

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T>
class QList;
template<class Key, class Value>
class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface io.github.openrazer1.Led
 */
class RazerLEDAdaptor : public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "io.github.openrazer1.Led")
    Q_CLASSINFO("D-Bus Introspection", ""
                                       "  <interface name=\"io.github.openrazer1.Led\">\n"
                                       "    <property access=\"read\" type=\"a(yyy)\" name=\"CurrentColors\">\n"
                                       "      <annotation value=\"QVector&lt;RGB&gt;\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
                                       "    </property>\n"
                                       "    <property access=\"read\" type=\"(i)\" name=\"CurrentEffect\">\n"
                                       "      <annotation value=\"RazerEffect\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
                                       "    </property>\n"
                                       "    <property access=\"read\" type=\"(i)\" name=\"LedId\">\n"
                                       "      <annotation value=\"RazerLedId\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n"
                                       "    </property>\n"
                                       "    <method name=\"setOff\">\n"
                                       "      <arg direction=\"out\" type=\"b\"/>\n"
                                       "    </method>\n"
                                       "    <method name=\"setOn\">\n"
                                       "      <arg direction=\"out\" type=\"b\"/>\n"
                                       "    </method>\n"
                                       "    <method name=\"setStatic\">\n"
                                       "      <arg direction=\"out\" type=\"b\"/>\n"
                                       "      <arg direction=\"in\" type=\"(yyy)\" name=\"color\"/>\n"
                                       "      <annotation value=\"razer_test::RGB\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
                                       "    </method>\n"
                                       "    <method name=\"setBreathing\">\n"
                                       "      <arg direction=\"out\" type=\"b\"/>\n"
                                       "      <arg direction=\"in\" type=\"(yyy)\" name=\"color\"/>\n"
                                       "      <annotation value=\"razer_test::RGB\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
                                       "    </method>\n"
                                       "    <method name=\"setBreathingDual\">\n"
                                       "      <arg direction=\"out\" type=\"b\"/>\n"
                                       "      <arg direction=\"in\" type=\"(yyy)\" name=\"color\"/>\n"
                                       "      <annotation value=\"razer_test::RGB\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
                                       "      <arg direction=\"in\" type=\"(yyy)\" name=\"color2\"/>\n"
                                       "      <annotation value=\"razer_test::RGB\" name=\"org.qtproject.QtDBus.QtTypeName.In1\"/>\n"
                                       "    </method>\n"
                                       "    <method name=\"setBreathingRandom\">\n"
                                       "      <arg direction=\"out\" type=\"b\"/>\n"
                                       "    </method>\n"
                                       "    <method name=\"setBlinking\">\n"
                                       "      <arg direction=\"out\" type=\"b\"/>\n"
                                       "      <arg direction=\"in\" type=\"(yyy)\" name=\"color\"/>\n"
                                       "      <annotation value=\"razer_test::RGB\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
                                       "    </method>\n"
                                       "    <method name=\"setSpectrum\">\n"
                                       "      <arg direction=\"out\" type=\"b\"/>\n"
                                       "    </method>\n"
                                       "    <method name=\"setWave\">\n"
                                       "      <arg direction=\"out\" type=\"b\"/>\n"
                                       "      <arg direction=\"in\" type=\"(i)\" name=\"direction\"/>\n"
                                       "      <annotation value=\"razer_test::WaveDirection\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
                                       "    </method>\n"
                                       "    <method name=\"setReactive\">\n"
                                       "      <arg direction=\"out\" type=\"b\"/>\n"
                                       "      <arg direction=\"in\" type=\"(i)\" name=\"speed\"/>\n"
                                       "      <annotation value=\"razer_test::ReactiveSpeed\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n"
                                       "      <arg direction=\"in\" type=\"(yyy)\" name=\"color\"/>\n"
                                       "      <annotation value=\"razer_test::RGB\" name=\"org.qtproject.QtDBus.QtTypeName.In1\"/>\n"
                                       "    </method>\n"
                                       "    <method name=\"setBrightness\">\n"
                                       "      <arg direction=\"out\" type=\"b\"/>\n"
                                       "      <arg direction=\"in\" type=\"y\" name=\"brightness\"/>\n"
                                       "    </method>\n"
                                       "    <method name=\"getBrightness\">\n"
                                       "      <arg direction=\"out\" type=\"y\"/>\n"
                                       "    </method>\n"
                                       "  </interface>\n"
                                       "")
public:
    RazerLEDAdaptor(QObject *parent);
    virtual ~RazerLEDAdaptor();

public: // PROPERTIES
    Q_PROPERTY(QVector<RGB> CurrentColors READ currentColors)
    QVector<RGB> currentColors() const;

    Q_PROPERTY(RazerEffect CurrentEffect READ currentEffect)
    RazerEffect currentEffect() const;

    Q_PROPERTY(RazerLedId LedId READ ledId)
    RazerLedId ledId() const;

public Q_SLOTS: // METHODS
    uchar getBrightness();
    bool setBlinking(razer_test::RGB color);
    bool setBreathing(razer_test::RGB color);
    bool setBreathingDual(razer_test::RGB color, razer_test::RGB color2);
    bool setBreathingRandom();
    bool setBrightness(uchar brightness);
    bool setOff();
    bool setOn();
    bool setReactive(razer_test::ReactiveSpeed speed, razer_test::RGB color);
    bool setSpectrum();
    bool setStatic(razer_test::RGB color);
    bool setWave(razer_test::WaveDirection direction);
Q_SIGNALS: // SIGNALS
};

#endif
