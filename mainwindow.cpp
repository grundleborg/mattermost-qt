#include "mainwindow.h"

#include "tab.h"
#include "ui_mainwindow.h"

#include <QtWebEngineWidgets/QWebEngineView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // TODO: Load pre-configured tabs from settings.

    if (this->tabs.size() == 0) {
        Tab *tab0= new Tab("Mattermost Community", "chrome://sandbox/", this);
        this->tabs.append(tab0);
        this->ui->tabWidget->addTab(tab0->widget(), QIcon(), "Chrome GPU");

        Tab *tab1 = new Tab("Mattermost Community", "https://community.mattermost.com", this);
        this->tabs.append(tab1);
        this->ui->tabWidget->addTab(tab1->widget(), QIcon(), "Mattermost Community");

        Tab *tab2 = new Tab(this);
        this->tabs.append(tab2);
        this->ui->tabWidget->addTab(tab2->widget(), QIcon(), "Configure...");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

