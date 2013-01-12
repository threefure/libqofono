/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c OfonoSupplimentaryServices -p ofonosupplimentaryservices -N ofono_supplementary_services.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef OFONOSUPPLIMENTARYSERVICES_H_1357940298
#define OFONOSUPPLIMENTARYSERVICES_H_1357940298

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface org.ofono.SupplementaryServices
 */
class OfonoSupplimentaryServices: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.ofono.SupplementaryServices"; }

public:
    OfonoSupplimentaryServices(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~OfonoSupplimentaryServices();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Cancel()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Cancel"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> GetProperties()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetProperties"), argumentList);
    }

    inline QDBusPendingReply<QString, QDBusVariant> Initiate(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("Initiate"), argumentList);
    }
    inline QDBusReply<QString> Initiate(const QString &in0, QDBusVariant &out1)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        QDBusMessage reply = callWithArgumentList(QDBus::Block, QLatin1String("Initiate"), argumentList);
        if (reply.type() == QDBusMessage::ReplyMessage && reply.arguments().count() == 2) {
            out1 = qdbus_cast<QDBusVariant>(reply.arguments().at(1));
        }
        return reply;
    }

    inline QDBusPendingReply<QString> Respond(const QString &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("Respond"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void NotificationReceived(const QString &in0);
    void PropertyChanged(const QString &in0, const QDBusVariant &in1);
    void RequestReceived(const QString &in0);
};

#endif