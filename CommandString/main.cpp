#include <QCoreApplication>
#include <icommand.h>
#include <appendcommand.h>
#include <stackcommand.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    StackCommand cmd;
    QString teste = "Brasil";
    QString doc;

    qDebug() << doc;
    cmd.push(new AppendCommand(&doc, teste));
    qDebug() << doc;
    cmd.undo();
    qDebug() << doc;
    cmd.redo();
    qDebug() << doc;

    return a.exec();
}
