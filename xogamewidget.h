#ifndef XOGAMEWIDGET_H
#define XOGAMEWIDGET_H

#include <QWidget>
#include <QPushButton>
#include "gamemodel.h"
#include <QTimer>
namespace Ui {
class XOGameWidget;
}

class XOGameWidget : public QWidget {
    Q_OBJECT

public:
    explicit XOGameWidget(QWidget *parent = nullptr);
    ~XOGameWidget();


public slots:
    void onGameButtonClicked();
    void fieldSizeUpdated();
    void Win();
    void showTime();

private:
    Ui::XOGameWidget *ui;
    void CreateNewField(uint field_size);
    GameModel model = GameModel();


};

#endif // XOGAMEWIDGET_H
