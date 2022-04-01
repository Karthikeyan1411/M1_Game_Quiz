#include "unity.h"

#define PROJECT_NAME  "Game_Quiz"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for Game_Quiz
 * 
 */
extern void test_game();

/* Required by the unity test framework */
void setUp(void)
{
}

/* Required by the unity test framework */
void tearDown(void)
{
}

/* Start of the application test */
int main(void)
{
    /* Initiate the Unity Test Framework */
    UnityBegin(NULL);

    /* Run Test functions */
    RUN_TEST(test_game);
    
    /* Close the Unity Test Framework */
    return (UnityEnd());
}
