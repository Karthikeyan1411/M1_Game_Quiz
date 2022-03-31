#include "unity.h"
#include "game_operations.h"

#define PROJECT_NAME "Game_Quiz"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for Game_Quiz
 * 
 */

/**
 * @brief Testing function for show records
 * 
 */
void test_show_record();

/**
 * @brief Testing function for reset scores
 * 
 */
void test_reset_score();

/**
 * @brief Testing function for help
 * 
 */
void test_help();

/**
 * @brief Testing function for edit scores
 * 
 */
void test_edit_score(float score, char playernm[20]);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_show_record);
    RUN_TEST(test_reset_score);
    RUN_TEST(test_help);
    RUN_TEST(test_edit_score);

    /* Close the Unity Test Framework */
    return UNITY_END;
}
