#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QPushButton>

class Menu : public QWidget {
Q_OBJECT
public:
    Menu();
public slots:
    void playClicked();
    void settingsClicked();
    void statsClicked();
private:
    QPushButton *play;
    QPushButton *setting;
    QPushButton *records;
};

#endif // MENU_H
