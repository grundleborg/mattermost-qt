#ifndef UNCONFIGUREDTAB_H
#define UNCONFIGUREDTAB_H

#include <QWidget>

namespace Ui {
class UnconfiguredTab;
}

class UnconfiguredTab : public QWidget
{
    Q_OBJECT

public:
    explicit UnconfiguredTab(QWidget *parent = nullptr);
    ~UnconfiguredTab();

private:
    Ui::UnconfiguredTab *ui;
};

#endif // UNCONFIGUREDTAB_H
