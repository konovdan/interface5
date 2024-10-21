#include "settingwidget.h"
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

SettingWidget::SettingWidget() : QWidget(nullptr) {
    QGridLayout* my_layout = new QGridLayout(this);
    this->setLayout(my_layout);

    QLabel *enterPath = new QLabel("path: ", this);
    QLineEdit *path = new QLineEdit(this);
    QPushButton *save = new QPushButton("save ", this);

    my_layout->addWidget(enterPath, 0, 0);
    my_layout->addWidget(path, 0, 1);
    my_layout->addWidget(save, 1, 0, 1, 2);

    // connect?
}

void SettingWidget::savePressed() {
    this->close();
}
