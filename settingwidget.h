#ifndef SETTINGWIDGET_H
#define SETTINGWIDGET_H


#include <QWidget>

class SettingWidget : public QWidget {
    Q_OBJECT
public:
    SettingWidget();

public slots:
    void savePressed();
};

#endif // SETTINGWIDGET_H
