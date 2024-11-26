#include "menu.h"
#include <QPushButton>
#include <QGridLayout>
#include "settingwidget.h"
#include "xogamewidget.h"
#include "statswidget.h"
Menu::Menu() : QWidget(nullptr){
    play = new QPushButton("Играть", this);
    setting = new QPushButton("Настройки", this);
    records = new QPushButton("Статистика", this);

    QGridLayout *my_layout = new QGridLayout(this);
    this->setLayout(my_layout);

    my_layout->addWidget(play, 0, 0);
    my_layout->addWidget(setting, 1, 0);
    my_layout->addWidget(records, 2, 0);

    connect(play, SIGNAL(clicked(bool)), this, SLOT(playClicked()));

    connect(setting, SIGNAL(clicked(bool)), this, SLOT(settingsClicked()));
    connect(records, SIGNAL(clicked(bool)), this, SLOT(statsClicked()));
}

void Menu::playClicked() {
    XOGameWidget* playWidget = new XOGameWidget(nullptr);

    playWidget->show();

    // this->hide();
}

void Menu::settingsClicked() {
    SettingWidget* settingsWidget = new SettingWidget();

    settingsWidget->show();

    // this->hide();
}
void Menu::statsClicked() {
    StatsWidget* statsWidget = new StatsWidget();

    statsWidget->show();

    // this->hide();
}
