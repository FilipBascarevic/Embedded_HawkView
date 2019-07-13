#ifndef XMLCOMM_H
#define XMLCOMM_H

#include <QObject>
#include <QTcpSocket>
#include <QHostAddress>
#include <QDebug>
#include <QDataStream>
#include <QDomDocument>
#include <QDir>
#include <QtXmlPatterns>
#include "message.h"


//---------------------------------------------------------------------------------------
// Handler is used in validation process
//---------------------------------------------------------------------------------------
class MessageHandler : public QAbstractMessageHandler
{
public:
    MessageHandler()
        : QAbstractMessageHandler(0)
    {
    }

    QString statusMessage() const
    {
        return m_description;
    }

    int line() const
    {
        return m_sourceLocation.line();
    }

    int column() const
    {
        return m_sourceLocation.column();
    }

protected:
    virtual void handleMessage(QtMsgType type, const QString &description,
                               const QUrl &identifier, const QSourceLocation &sourceLocation)
    {
        Q_UNUSED(type);
        Q_UNUSED(identifier);

        m_description = description;
        m_sourceLocation = sourceLocation;
    }

private:
    QString m_description;
    QSourceLocation m_sourceLocation;
};


//---------------------------------------------------------------------------------------
/// <summary>
/// SEIWGComm_c
/// Primary TCP/IP & XML comm class
/// </summary>
//---------------------------------------------------------------------------------------
class XMLComm : public QObject
{
    Q_OBJECT

    QTcpSocket *tcpSocket;
    QTcpServer *tcpServer;
    quint16 port_m;
    QByteArray msgBuffer;
    QByteArray currXML;
    QString rootNode;

public:
    explicit XMLComm(QObject *parent = nullptr);
    XMLComm(quint16 port, QObject *parent = nullptr);

    virtual ~XMLComm();

    void openSocket(quint16 &port);

private:
    Q_SLOT void readData();
    bool validateMsg(QByteArray msg);

public slots:
    void onConnect();
    void onNewConnection();
    void onDisconnect();

public:
    Q_SIGNAL void DeviceStatusReceived(const MessageReceivedEventArgs &);
    Q_SIGNAL void DeviceConfigurationReceived(const MessageReceivedEventArgs &);
    Q_SIGNAL void DeviceDetectionReceived(const MessageReceivedEventArgs &);
    Q_SIGNAL void DeviceInitializationMsgReceived(const MessageReceivedEventArgs &);
    Q_SIGNAL void GeometryReportMsgReceived(const MessageReceivedEventArgs &);
    Q_SIGNAL void CommandMsgReceived(const MessageReceivedEventArgs &);
    Q_SIGNAL void InvalidMsgReceived(const MessageReceivedEventArgs &);
    Q_SIGNAL void PlatformDetectionReportMsgReceived(const MessageReceivedEventArgs &);
    Q_SIGNAL void PlatformStatusReportMsgReceived(const MessageReceivedEventArgs &);
    Q_SIGNAL void SubscriptionConfigurationMsgReceived(const MessageReceivedEventArgs &);
    Q_SIGNAL void TrackReportMsgReceived(const MessageReceivedEventArgs &);
    Q_SIGNAL void MsgSent(const MessageReceivedEventArgs &);


};

#endif // XMLCOMM_H
