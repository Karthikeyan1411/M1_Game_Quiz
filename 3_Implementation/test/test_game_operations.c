#include "unity.h"
#include "game_operations.h"

#define PROJECT_NAME "Game_Quiz"

void test_show_record();
void test_reset_score();
void test_help();
void test_edit_score(float score, char playernm[20]);

void setUp(){}

void tearDown(){}

int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_show_record);
    RUN_TEST(test_reset_score);
    RUN_TEST(test_help);
    RUN_TEST(test_edit_score);

    return UNITY_END;
}
