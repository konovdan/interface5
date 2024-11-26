#ifndef GAMEMODEL_H
#define GAMEMODEL_H
#include <vector>
#include <QPushButton>
#include <QObject>
#include <QTimer>
enum class Player {
    X,O
};

enum class GameState{
    PLAY,WIN
};

class GameModel: public QObject {
Q_OBJECT
public:
    std::vector<QPushButton *> cells;
    Player currentPlayer;
    uint size;

    GameModel();
    std::string player2string();
    bool checkWin();
    Player nextPlayer(Player player);
    // virtual ~GameModel() = default;
    void GenerateField(unsigned char size);
    GameState state = GameState::PLAY;
    QTimer timer = QTimer();


    int time1 = 60;
    int time2 = time1;

public slots:
    void timeout();
};

#endif // GAMEMODEL_H
