#ifndef XOGAMEWIDGET_H
#define XOGAMEWIDGET_H

#include <QWidget>

namespace Ui {
class XOGameWidget;
}

enum class Player { X, O };

QString player2str(Player player);

Player nextPlayer(Player player);

class QPushButton;

class XOGameWidget : public QWidget {
    Q_OBJECT

public:
    explicit XOGameWidget(QWidget *parent = nullptr);
    ~XOGameWidget();

public slots:
    void onGameButtonClicked();

private:
    Ui::XOGameWidget *ui;

    Player m_currentPlayer;

    std::vector<std::vector<QPushButton*>> m_buttons;
};

#endif // XOGAMEWIDGET_H
