#include "unconfiguredtab.h"
#include "ui_unconfiguredtab.h"

UnconfiguredTab::UnconfiguredTab(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UnconfiguredTab)
{
    ui->setupUi(this);
}

UnconfiguredTab::~UnconfiguredTab()
{
    delete ui;
}
