#ifndef STATSWIDGET_H
#define STATSWIDGET_H

#include <QWidget>

namespace Ui {
class StatsWidget;
}

class StatsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StatsWidget(QWidget *parent = nullptr);
    ~StatsWidget();

private:
    Ui::StatsWidget *ui;
};

#endif // STATSWIDGET_H
