#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setOrganizationName("Mattermost");
    QCoreApplication::setOrganizationDomain("mattermost.com");
    QCoreApplication::setApplicationName("Mattermost Qt");

    QApplication a(argc, argv);

    MainWindow w;
    w.show();
    return a.exec();
}
