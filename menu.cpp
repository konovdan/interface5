#include "menu.h"
#include <QPushButton>
#include <QGridLayout>
#include "playwidget.h"
#include "settingwidget.h"

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
}

void Menu::playClicked() {
    PlayWidget* playWidget = new PlayWidget(nullptr);

    playWidget->show();

    // this->hide();
}

void Menu::settingsClicked() {
    SettingWidget* settingsWidget = new SettingWidget();

    settingsWidget->show();

    // this->hide();
}
