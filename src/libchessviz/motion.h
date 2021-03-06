#pragma once
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Castling { Without, Short, Long };

enum BlackWhite { Black, White };

typedef struct {
    int start_position_x;
    int end_position_x;

    int start_position_y;
    int end_position_y;

    bool type_motion; //тихий ход - false | взятие - true

    bool flag_shah;
    bool flag_cmate;
    bool flag_ep;
    bool flag_transformation;
    char transformation_figure;

    char figure;
    //фигура, которой ходим
    //большими буквами PQKBNR

    enum BlackWhite color;
    enum Castling castling;

} motion;

typedef struct {
    motion white_motion;
    motion black_motion;
    char id_move[4];
} match;

//пробел - пустое поле
//большие буквы белые, маленькие черные
// p - пешка
// q - ферзь
// k - король
// b - слон
// n - конь
// r - ладья
//черные сверху
