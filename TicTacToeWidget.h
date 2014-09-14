#ifndef WIDGET_H
#define WIDGET_H

#include <QSignalMapper>
#include <QWidget>

class QPushButton;

namespace Ui {
class Widget;
}

class TicTacToeWidget
    : public QWidget
{
    Q_OBJECT

public:
    explicit TicTacToeWidget(QWidget *parent = 0);
    ~TicTacToeWidget();

    void switchPlayer();
private:
    void updatePlayerString();
    void setWon(const QList<QPushButton *> &winningButtons);
    void reset();
    void setDraw();

public slots:
    void on_restartButton_clicked();
    void updateButton(int buttonId);

private:
    Ui::Widget *ui;

    QSignalMapper *m_buttonMapper;
    QPair<QString, QString> m_playerString;
    QHash<int, QPushButton *> m_buttons;
};

#endif // WIDGET_H
