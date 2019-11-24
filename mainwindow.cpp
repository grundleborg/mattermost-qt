#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtWebEngineWidgets/QWebEngineView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWebEngineView *view = new QWebEngineView();
    this->ui->tabWidget->addTab(view, QIcon(), "Mattermost Community");
    view->load(QUrl("https://community.mattermost.com/"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

