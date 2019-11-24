#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtWebEngineWidgets/QWebEngineView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->view = new QWebEngineView(this->ui->tab);
    this->ui->hLayout->addWidget(this->view);
    view->load(QUrl("https://community.mattermost.com/"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

