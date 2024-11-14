#include "xogamewidget.h"
#include "ui_xogamewidget.h"
#include <QRegExpValidator>

//TODO: добавить модель
//TODO: реализовать игру 5 в ряд (размер поля от 10х10 до 20х20)
//TODO: размер поля должен задаваться в окне настроек (использовать валидатор)
//TODO: сверстать окно настроек с помощью QtDesigner
/*TODO: сверстать окно статистики с помощью QtDesigner
 * формат файла статистики должен исопльзоваться так, как прописано в вашем отчете к работе 3
 */
QString player2str(Player player) {
    switch (player) {
    case Player::X:
        return "X";
    case Player::O:
        return "O";
    }
}

Player nextPlayer(Player player) {
    switch (player) {
    case Player::X:
        return Player::O;
    case Player::O:
        return Player::X;
    }
}

XOGameWidget::XOGameWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::XOGameWidget) {
    ui->setupUi(this);

    m_currentPlayer = Player::X;

    m_buttons.resize(3);
    for (int i = 0; i < 3; ++i) {
        m_buttons[i].resize(3);
    }

    m_buttons[0][0] = ui->a00;
    m_buttons[0][1] = ui->a01;
    m_buttons[0][2] = ui->a02;
    m_buttons[1][0] = ui->a10;
    m_buttons[1][1] = ui->a11;
    m_buttons[1][2] = ui->a12;
    m_buttons[2][0] = ui->a20;
    m_buttons[2][1] = ui->a21;
    m_buttons[2][2] = ui->a22;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            connect(m_buttons[i][j], SIGNAL(clicked(bool)),
                    SLOT(onGameButtonClicked()));
        }
    }

    QRegExp rx(R"(\d{2}\.\d{2}\.\d{4})");
    QValidator *validator = new QRegExpValidator(rx, this);

    ui->lineEdit->setValidator(validator);

}

XOGameWidget::~XOGameWidget()
{
    delete ui;
}

void XOGameWidget::onGameButtonClicked() {
    QPushButton* my_button = (QPushButton*)sender();

    if (false == my_button->text().isEmpty()) {
        return;
    }

    my_button->setText(player2str(m_currentPlayer));

    m_currentPlayer = nextPlayer(m_currentPlayer);


}
