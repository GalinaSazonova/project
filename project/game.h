#ifndef GAME_H
#define GAME_H

#include <QTime>

const int maxSize = 20;
const int twoInRowSize = 6;
const int twoThroughOneSize = 2;

class Game
{
public:
    Game();
    void setSize();
    int getPiece(int, int);
    bool lookForMatches();
    void findAndRemoveMatches();
    bool isMovePossible();
    void swapPieces(QPair<int, int> first, QPair<int, int> second);
    void checkForEnd();

private:
    void endGameNoMatches();
    void dropPieces(int col, int row);
    void addPiece(int col, int row);
    void addNewPieces();
    bool matchType(int col, int row, int type);
    bool matchPattern(int col, int row, QPair<int, int> needToMatch, QPair<int, int> possibilities[], int arraySize);
    QList<QPair<int, int>> getMatchHoriz(int row, int col);
    QList<QPair<int, int>> getMatchVert (int row, int col);
    int score;
    int size;
    int matrix[maxSize][maxSize];
    QList<QList<QPair<int, int>>> matches;
    QPair<int,int> horizTwoInRow[twoInRowSize] = {qMakePair(-2,0), qMakePair(-1,-1), qMakePair(-1,1), qMakePair(2,-1), qMakePair(2,1), qMakePair(3,0)};
    QPair<int,int> horizTwoThroughOne[twoThroughOneSize] = {qMakePair(1,-1), qMakePair(1,1)};
    QPair<int,int> verticTwoInRow[twoInRowSize] = {qMakePair(0,-2), qMakePair(-1,-1), qMakePair(1,-1), qMakePair(-1,2), qMakePair(1,2), qMakePair(0,3)};
    QPair<int,int> verticTwoThroughOne[twoThroughOneSize] = {qMakePair(-1,1), qMakePair(1,1)};
};

#endif // GAME_H
