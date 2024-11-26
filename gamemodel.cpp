
#include "gamemodel.h"
#include "QPushButton"
#include <iostream>
GameModel::GameModel() : QObject(nullptr){
    currentPlayer = Player::X;
    timer.start();
    timer.setInterval(1000);
    connect(&timer, SIGNAL(timeout()),SLOT(timeout()));
};

std::string GameModel::player2string(){
    if (currentPlayer == Player::X) return "O";
    return "X";
};
void GameModel::timeout() {


    switch (currentPlayer) {
    case Player::X: {
        --time1;
        if (time1 == 0){
            timer.stop();
            state = GameState::WIN;
        }
        break;
    }
    case Player::O: {
        --time2;
        if (time2 == 0){
            timer.stop();
            state = GameState::WIN;
        }
        break;
    }
    }
}
bool GameModel::checkWin(){
    for (uint r = 0; r < size; ++r) {
        for (uint o = 0; o < size - 5 + 1; ++o){
            if (
                (!cells.at(r * size + o)->text().isEmpty()) &&
                (cells.at(r * size + o)->text() == cells.at(r * size + o + 1)->text())&&
                (cells.at(r * size + o)->text() == cells.at(r * size + o + 2)->text())&&
                (cells.at(r * size + o)->text() == cells.at(r * size + o + 3)->text())&&
                (cells.at(r * size + o)->text() == cells.at(r * size + o + 4)->text())
                ){
                timer.stop();
                state = GameState::WIN;
                return true;
            }
            if (
                (!cells.at(o * size + r)->text().isEmpty()) &&
                (cells.at(o * size + r)->text() == cells.at(o * size + r + 1*size)->text())&&
                (cells.at(o * size + r)->text() == cells.at(o * size + r + 2 * size)->text())&&
                (cells.at(o * size + r)->text() == cells.at(o * size + r + 3*size)->text())&&
                (cells.at(o * size + r)->text() == cells.at(o * size + r + 4*size)->text())
                ){
                timer.stop();
                state = GameState::WIN;
                return true;
            }
        }
    }

    return false;
};
void GameModel::GenerateField(unsigned char size) {
    for (uint i = 0; i < cells.size(); i++){
        delete cells.at(i);
    }
    this->size = size;
    cells.clear();
    for (int i = 0; i < size * size; ++i) {
        QPushButton * btn = new QPushButton();
        btn->setText("");
        cells.push_back(btn);
    }
}
Player GameModel::nextPlayer(Player player){
    if (player == Player::X) return Player::O;
    return Player::X;
};
