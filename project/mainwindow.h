#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMap>
#include <QPair>
#include <QString>
#include <string.h>

#include "game.h"

using namespace std;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void makeSwap(QPushButton *, QPushButton *);
    void swapPiecesAndButtons(QPushButton *first, QPushButton *second);

private slots:
    ///Slot for generating buttons
    void createButtons();
    ///Slot for processing pushed button
    void buttonClick();

private:
    void appropriateGame();
    Ui::MainWindow *ui;
    QMap <QPushButton *, QPair<int, int> > buttonsPosition;
    int size;
    QPushButton *firstPiece;
    QPair <int, int> firstPlace;
    Game game;
    void RefreshButtons();
    const char* colorByType(int type);
};

#endif // MAINWINDOW_H
