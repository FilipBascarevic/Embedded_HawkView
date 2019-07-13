#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QIcon>
#include "xmlcomm.h"
#include "extractxml.h"

class Thread final : public QThread { public: ~Thread() { quit(); wait(); } };

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    // register new meta type because it will use in signal-slot communication
    qRegisterMetaType<MessageReceivedEventArgs>();
    // thread for receiving new XML
    Thread receiveThread;

    XMLComm comm(4444);
    extractXML extr;
    // Add XMLComm class in new thread
    receiveThread.start();
    comm.moveToThread(&receiveThread);
    // Connect reception of XML and it extracting
    QObject::connect(&comm, &XMLComm::DeviceStatusReceived, &extr, &extractXML::onDeviceStatusReceived);

    app.setWindowIcon(QIcon(":hawk.png"));

    QQmlApplicationEngine engine;
    // send a pointer to QML
    engine.rootContext()->setContextProperty("extractedXML", &extr);
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
