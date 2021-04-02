#include <stdio.h>
#include <stdlib.h>

//пробел - пустое поле
//большие буквы белые маленькие черные
// p - пешка
// q - ферзь
// k - король
// b - слон
// n - конь
// r - ладья
//черные сверху

void createChess(char chess[9][9])
{
    for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j)
            chess[i][j] = ' ';

    //подпись цифер
    char numbers[8] = {'1', '2', '3', '4', '5', '6', '7', '8'};
    for (int i = 0; i < 8; ++i) {
        chess[i][8] = numbers[i];
    }

    //подпись букав
    char letter[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    for (int i = 0; i < 8; ++i) {
        chess[8][i] = letter[i];
    }

    //пешки белого
    for (int i = 0; i < 8; ++i)
        chess[6][i] = 'P';

    //пешки черного
    for (int i = 0; i < 8; ++i)
        chess[1][i] = 'p';

    //белые фигуры
    char white[8] = {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'};
    for (int i = 0; i < 8; ++i) {
        chess[7][i] = white[i];
    }

    //черные фигуры
    char black[8] = {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'};
    for (int i = 0; i < 8; ++i) {
        chess[0][i] = black[i];
    }
}

void printChess(char chess[9][9])
{
    for (int i = 0; i < 9; ++i) {
        printf("\t");
        for (int j = 0; j < 9; ++j) {
            printf(" %c ", chess[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char* argv[])
{
    char chess[9][9];

    createChess(chess);

    printf("Start chess table:\n");
    printChess(chess);

    return 0;
}
