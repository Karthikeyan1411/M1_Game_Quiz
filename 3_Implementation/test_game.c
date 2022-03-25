#include "unity.h"

#define PROJECT_NAME  "Game_Quiz"

extern void test_game();

void setUp(void)
{
}

void tearDown(void)
{
}


int main(void)
{
    UnityBegin(NULL);

    RUN_TEST(test_game);

    return (UnityEnd());
}
