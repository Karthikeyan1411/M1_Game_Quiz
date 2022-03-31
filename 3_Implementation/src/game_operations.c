/**
 * @file game_operations.c
 * @author Karthikeyan M (karthikeyan1411m@gmail.com)
 * @brief This is the source code which contains all the functions for the project
 * @version 0.1
 * @date 2022-03-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <game_operations.h>

/**
 * @brief Shows the record of quiz game
 * @return Text file generated with secured high score
 */
void show_record()
{
    return ("score.txt","r");
}

/**
 * @brief Doing file operations for txt file
 * @return Reset score from '0'
 */
void reset_score()
{
    return ("score.txt","r+");
}

/**
 * @brief Gives instructions of the game to the user
 */
void help()
{
    return("Instructions to the User");
}

/**
 * @brief Gives the score information
 * @param[in] operand1
 * @param[in] operand2
 * @return integer value of the operand1 and operand2 
 */
void edit_score(float operand1, char operand2)
{
    if(operand1>=0)
    {
        return (operand2);
    }
}