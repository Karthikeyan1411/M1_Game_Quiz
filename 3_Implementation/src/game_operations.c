#include <game_operations.h>

void show_record()
{
    return ("score.txt","r");
}

void reset_score()
{
    return ("score.txt","r+");
}

void help()
{
    return("Instructions to the User");
}

void edit_score(float operand1, char operand2)
{
    if(operand1>=0)
    {
        return (operand2);
    }
}