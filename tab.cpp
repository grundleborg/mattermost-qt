#include "tab.h"

#include "unconfiguredtab.h"
#include <QtWidgets/QHBoxLayout>
#include <QtWebEngineWidgets/QWebEngineView>

Tab::Tab(QObject *parent) : QObject(parent)
{
    m_widget = new QWidget();
    QHBoxLayout *layout = new QHBoxLayout;
    UnconfiguredTab *tab = new UnconfiguredTab();
    layout->addWidget(tab);
    m_widget->setLayout(layout);
}

Tab::Tab(const QString &title, const QString &url, QObject *parent)
    : QObject(parent)
{
    m_widget = new QWidget();
    QHBoxLayout *layout = new QHBoxLayout;
    layout->setMargin(0);

    QWebEngineView *view = new QWebEngineView();
    view->load(QUrl(url));

    layout->addWidget(view);
    m_widget->setLayout(layout);
}

QWidget *Tab::widget() {
    return this->m_widget;
}
