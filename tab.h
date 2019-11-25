#ifndef TAB_H
#define TAB_H

#include <QObject>

class Tab : public QObject
{
    Q_OBJECT
public:
    explicit Tab(QObject *parent = nullptr);
    Tab(const QString &title, const QString &url, QObject *parent = nullptr);

    QWidget * widget();
signals:

public slots:

private:
    QWidget *m_widget;
};

#endif // TAB_H
