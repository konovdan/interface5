#include "statswidget.h"
#include "ui_statswidget.h"

StatsWidget::StatsWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::StatsWidget)
{
    ui->setupUi(this);
}

StatsWidget::~StatsWidget()
{
    delete ui;
}
