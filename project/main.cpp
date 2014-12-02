#include "mainwindow.h"
#include "game.h"
#include <QApplication>
#include "game.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    Game game;
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
            printf("%d ", game.getPiece(i, j));
        //printf(/n);
    }
    game.isMovePossible();


    return a.exec();
}
