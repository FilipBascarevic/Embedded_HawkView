#ifndef MESSAGE_H
#define MESSAGE_H

#include <QDebug>
#include <QMetaType>

//---------------------------------------------------------------------------------------
/// <summary>
/// MessageReceivedEventArgs
/// Public class for interfacing with MainForm
/// </summary>
//---------------------------------------------------------------------------------------
class MessageReceivedEventArgs
{
  public:
    QByteArray Message;
    QString MessageName;
    QString Info;

    enum MessageType_e
    {
     CommandMsg,
     DeviceConfigurationMsg
    };

    MessageReceivedEventArgs()
    {
     Message = "";
     MessageName = "";
     Info = "";
    }

    MessageReceivedEventArgs(QByteArray msg, QString msg_name, QString info)
    {
     Message = msg;
     MessageName = msg_name;
     Info = info;
    }

}; // End MessageReceivedEventArgs class

Q_DECLARE_METATYPE(MessageReceivedEventArgs)

#endif // MESSAGE_H
