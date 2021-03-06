#include "../src/libchessviz/chess.h"
#include "ctest.h"
#include <stdlib.h>

// there are many different ASSERT macro's (see ctest.h)

CTEST(moveB, bishop_test1)
{
    match match_ = initMatch();

    char chess[8][8];

    char line[] = "1. Be2-c3 Be4-d5";

    ASSERT_TRUE(checkLine(line, &match_));

    testPrint(chess, match_);

    ASSERT_FALSE(moveB(match_.white_motion, chess));
    ASSERT_TRUE(moveB(match_.black_motion, chess));
}

CTEST(moveB, bishop_test2)
{
    match match_ = initMatch();

    char chess[8][8];

    char line[] = "1. Be2-f3 Be4-d5";

    ASSERT_TRUE(checkLine(line, &match_));

    testPrint(chess, match_);

    ASSERT_TRUE(moveB(match_.white_motion, chess));
    ASSERT_TRUE(moveB(match_.black_motion, chess));
}

CTEST(moveB, bishop_test3)
{
    match match_ = initMatch();

    char chess[8][8];

    char line[] = "1. Be2-e1 Be4-d2";

    ASSERT_TRUE(checkLine(line, &match_));

    testPrint(chess, match_);

    ASSERT_FALSE(moveB(match_.white_motion, chess));
    ASSERT_FALSE(moveB(match_.black_motion, chess));
}

CTEST(moveB, bishop_test4)
{
    match match_ = initMatch();

    char chess[8][8];

    char line[] = "1. Be2xf3 Be4-d5";

    ASSERT_TRUE(checkLine(line, &match_));

    testPrint(chess, match_);

    ASSERT_FALSE(moveB(match_.white_motion, chess));
    ASSERT_TRUE(moveB(match_.black_motion, chess));
}

CTEST(moveB, bishop_test5)
{
    match match_ = initMatch();

    char chess[8][8];

    char line[] = "1. Be2-e3 Be4-d5";

    ASSERT_TRUE(checkLine(line, &match_));

    testPrint(chess, match_);

    ASSERT_FALSE(moveB(match_.white_motion, chess));
    ASSERT_TRUE(moveB(match_.black_motion, chess));
}

CTEST(moveB, bishop_test6)
{
    match match_ = initMatch();

    char chess[8][8];

    char line[] = "1. Be2-h5 Be4-a8";

    ASSERT_TRUE(checkLine(line, &match_));
    testPrint(chess, match_);
    chess[5][5] = 'P';
    chess[1][1] = 'P';

    ASSERT_FALSE(moveB(match_.white_motion, chess));
    ASSERT_FALSE(moveB(match_.black_motion, chess));
}

CTEST(moveB, bishop_test7)
{
    match match_ = initMatch();

    char chess[8][8];

    char line[] = "1. Be2-f3#";

    ASSERT_TRUE(checkLine(line, &match_));

    testPrint(chess, match_);

    ASSERT_TRUE(moveB(match_.white_motion, chess));
}

CTEST(moveB, bishop_test8)
{
    match match_ = initMatch();

    char chess[8][8];

    char line[] = "1. Be2xg4 Be4xb7";

    ASSERT_TRUE(checkLine(line, &match_));
    testPrint(chess, match_);
    chess[4][6] = 'P';
    chess[1][1] = 'p';

    ASSERT_FALSE(moveB(match_.white_motion, chess));
    ASSERT_FALSE(moveB(match_.black_motion, chess));
}

CTEST(moveB, bishop_test9)
{
    match match_ = initMatch();

    char chess[8][8];

    char line[] = "1. Be2xg4 Be4xb7";

    ASSERT_TRUE(checkLine(line, &match_));
    testPrint(chess, match_);
    chess[4][6] = 'k';
    chess[1][1] = 'K';

    ASSERT_FALSE(moveB(match_.white_motion, chess));
    ASSERT_FALSE(moveB(match_.black_motion, chess));
}

CTEST(moveB, bishop_test10)
{
    match match_ = initMatch();

    char chess[8][8];

    char line[] = "1. Be2-e2 Be4-e4";

    ASSERT_TRUE(checkLine(line, &match_));

    testPrint(chess, match_);

    ASSERT_FALSE(moveB(match_.white_motion, chess));
    ASSERT_FALSE(moveB(match_.black_motion, chess));
}
