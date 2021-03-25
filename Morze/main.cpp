#include <mainwindow.h>
#include <QApplication>
#include <QStyleFactory>
#include <QFile>
#include <QDebug>
#include <QTextStream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qApp->setStyle(QStyleFactory::create("Fusion"));
    MainWindow w;
    w.show();
    return a.exec();
}
