#include "xogamewidget.h"
#include "ui_xogamewidget.h"
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include "gamemodel.h"
#include <QMessageBox>
#include <QTimer>
#include <QStringBuilder>
//TODO: добавить модель
//TODO: реализовать игру 5 в ряд (размер поля от 10х10 до 20х20)
//TODO: размер поля должен задаваться в окне настроек (использовать валидатор)
//TODO: сверстать окно настроек с помощью QtDesigner
/*TODO: сверстать окно статистики с помощью QtDesigner
 * формат файла статистики должен исопльзоваться так, как прописано в вашем отчете к работе 3
 */

XOGameWidget::XOGameWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::XOGameWidget) {
    ui->setupUi(this);

    connect(&model.timer, SIGNAL(timeout()),SLOT(showTime()));
    CreateNewField(5);
    QRegularExpression rx(R"([12]?(\d))");
    QValidator *validator = new QRegularExpressionValidator(rx, this);
    ui->lineEdit->setValidator(validator);
    connect(ui->lineEdit, SIGNAL(textEdited(QString)),SLOT(fieldSizeUpdated()));



}
void XOGameWidget::CreateNewField(uint field_size) {
    model.GenerateField(field_size);

    for (uint i = 0; i < field_size * field_size; ++i ) {
        QPushButton * btn = model.cells.at(i);
        connect(btn, SIGNAL(clicked(bool)), SLOT(onGameButtonClicked()));
        ui->gridLayout_2->addWidget(btn,i / field_size,i % field_size);
    }
}
void XOGameWidget::fieldSizeUpdated() {
    QLineEdit * lineEdit = (QLineEdit*) sender();
    if (lineEdit->text().toInt()>=5) {
        CreateNewField(lineEdit->text().toInt());
    }
}
void XOGameWidget::showTime()
{
    QString str;


    if (model.state == GameState::PLAY) {


    switch (model.currentPlayer) {
    case Player::X: {
        str.setNum(model.time1);
        str.append(" секунд осталось | Ход X");
        break;
    }
    case Player::O: {
        str.setNum(model.time2);
        str.append(" секунд осталось | Ход O");
        break;
    }
    }
        }
    if (model.state == GameState::WIN) Win();
    ui->label_timer->setText(str);
}

XOGameWidget::~XOGameWidget()
{
    delete ui;
}
void XOGameWidget::Win(){
    QString msg;
    msg = msg.fromStdString(model.player2string());
    msg.push_back(" win!");
    QMessageBox * message = new QMessageBox();
    message->setText(msg);
    message->show();
}
void XOGameWidget::onGameButtonClicked() {
    QPushButton* my_button = (QPushButton*)sender();

    if (false == my_button->text().isEmpty()) {
        return;
    }
    QString qstr;
    qstr = qstr.fromStdString(model.player2string());

    my_button->setText(qstr);
    if (model.checkWin() || model.state == GameState::WIN) {
        Win();
    }else {
        model.currentPlayer = model.nextPlayer(model.currentPlayer);
    }
}
