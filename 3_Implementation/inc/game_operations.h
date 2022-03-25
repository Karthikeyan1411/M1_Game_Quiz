/**
 * @file game_operations.h
 * @author Karthikeyan M (karthikeyan1411m@gmail.com)
 * @brief Header file for Quiz Game Application
 * @version 0.1
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _QUIZ_GAME_OPERATIONS_H_
#define _QUIZ_GAME_OPERATIONS_H_

/**
 * @brief Shows the record of quiz game
 * @return Text file generated with secured high score
 */
void show_record();

/**
 * @brief Doing file operations for txt file
 * @return Reset score from '0'
 */
void reset_score();

/**
 * @brief Gives instructions of the game to the user
 */
void help();

/**
 * @brief Gives the score information
 * @param[in] operand1
 * @param[in] operand2
 * @return integer value of the operand1 and operand2 
 */
void edit_score(float operand1, char operand2);

#endif /* #define _QUIZ_GAME_H_ */