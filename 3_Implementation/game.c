/**
 * @file game.c
 * @author Karthikeyan M (karthikeyan1411m@gmail.com)
 * @brief This is the main program where the project is run
 * @version 0.1
 * @date 2022-03-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

/* Display score records */
void show_record();
/* Reset score */
void reset_score();
/* Help for gamer */
void help();
/* Edit scores */
void edit_score(float,char[]);

/* Start of the application */
/**
 * @brief Main program
 * @return int
 * @return int 
 */
int main()
{
    int countr,r,r1,count,i,n;
    float score;
    char choice;
    char playername[20];
    mainhome:
    printf("\t\t\t  << QUIZ GAME >>\n");
    printf("\n\t\t\t      WELCOME\n ");
    printf("\n\t\t\t        to\n ");
    printf("\n\t\t\t    THE QUIZ GAME ");
    printf("\n\t\t   BECOME RICH EARN UPTO 1 MILLION $ ;-) ");

    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > Press V to view the highest score  ");
    printf("\n\t\t > Press R to reset score");
    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    choice=toupper(getchar());
     
    if(choice=='V') //Enter choice for view
	{
        system("cls");
        show_record();
        system("cls");
        goto mainhome;
	}
     
    else if(choice=='H') //Enter choice for help
	{
        system("cls");
        help();
        getchar();
        system("cls");
	    goto mainhome;
	}
	 
    else if(choice=='R') //Enter choice for reset
	{
        system("cls");
        reset_score();
	    getchar();
	    goto mainhome;
    }
	 
    else if (choice=='Q') //Enter choice for quit
	{
        exit(1);
    }    
    
    else if(choice=='S') //Enter choice for start
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        gets(playername);

        system("cls");
        printf("\n *********** Welcome %s to C Program Quiz Game *****************",playername);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n ********************************************************************************");
        printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n >> In warmup round total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded with 10 points!");
        printf("\n    By this way you can score upto 100 :-) :-):-):-):-):-):-)!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        
        if (toupper(getchar())=='Y')
		{
            system("cls");
		    goto home;
        }
	
        else
		{
            system("cls");
            goto mainhome;
        }
        
        home:
        system("cls");
        count=0;
        
        for(i=1;i<=3;i++)
        {
            r1=i;
            switch(r1)
            {
                case 1:
		            printf("\n\nA collecion of 8 bits are called?");
		            printf("\n\nA.bit\t\tB.word\n\nC.byte\t\tD.record");
		            if (toupper(getchar())=='C')
		            {
	           		    printf("\n\nCorrect!!!");
                        count++;
			            getchar();
			            system("cls");
			            break;
                    }
                    else
                    {
	                    printf("\n\nWrong!!! The correct answer is C.byte");
		                getchar();
		                system("cls");
		                break;
  	   	            }
                case 2:
		            printf("\n\nWhich of the following is a Palindrome number?");
		            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		            if (toupper(getchar())=='C')
		            {
			            printf("\n\nCorrect!!!");
                        count++;
			            getchar();
			            system("cls");
			            break;
                    }
                    else
	                {
	                    printf("\n\nWrong!!! The correct answer is C.23232");
		                getchar();
		                system("cls");
		                break;
  	   	            }
                        system("cls");
                case 3:
		            printf("\n\n\nWhich of the following is most oriented toward scientific programming ?");
		            printf("\n\nA.Cobol\t\tB.Fortran\n\nC.c++\t\tD.Basic");
                    if (toupper(getchar())=='B')
                    {
                        printf("\n\nCorrect!!!");
                        count++;
			            getchar();
			            system("cls");
                        break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is B.Fortran");
		                getchar();
		                system("cls");
                        break;
                    }
            }
        }
        if(count>=2)
	    {
            goto test;
        }	
        else
	    {
            system("cls");
            printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            getchar();
            goto mainhome;
	    }
        
        test:
        system("cls");
        printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
        printf("\n\n\n\n\t!Press any key to Start the Game!");
        if(toupper(getchar())=='p')
        {
            goto game;
        }
        
        game:
        countr=0;
        for(i=1;i<=10;i++)
        {
            system("cls");
            r=i;
            switch(r)
            {
		        case 1:
		            printf("\n\nAll are the example of input devices Except a:");
		            printf("\n\nA.Scanner\t\tB.Mouse\n\nC.Printer\t\tD.Keyboard");
		            if (toupper(getchar())=='C')
		            {
                        printf("\n\nCorrect!!!");countr++;getchar();
			            break;
                        getchar();
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is C.Printer");
                        getchar();
		                goto score;
		                break;
                    }
                case 2:
		            printf("\n\n\nWhat kind of file extension .mpg?,");
		            printf("\n\nA.Movie file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		            if (toupper(getchar())=='A')
		            {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getchar();
			            break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is A.Movie file");
                        getchar();
	                    goto score;
		                break;
	                }
                case 3:
		            printf("\n\n\nA DVD is an example of a/an.. ");
		            printf("\n\nA.Magnetic disk\t\tB.Hard disk\n\nC.Output device\t\tD.Optical disk");
		            if (toupper(getchar())=='D')
		            {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getchar();
			            break;
                    }
		            else
	                {
                        printf("\n\nWrong!!! The correct answer is D.Optical disk");
                        getchar();
		                goto score;
		                break;
                    }
                case 4:
		            printf("\n\n\nWho is he founder of facebook?");
		            printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		            if (toupper(getchar())=='A')
		            {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getchar();
			            break;
                    }
                    else
                    {
                        printf("\n\nWrong!!! The correct answer is A.Mark zuckerburg");
                        getchar();
       	                goto score;
		                break;
		            }
                case 5:
		            printf("\n\n\nWhich of he following is a web browser?");
		            printf("\n\nA.Dreamweaver\tB.Netscape navigator\n\nC.Maya\t\tD.Flash");
		            if(toupper(getchar())=='B')
		            {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getchar();
                        break;
                    }
		            else
                    {
		                printf("\n\nWrong!!! The correct answer is B.Netscape navigator");
		                getchar();
		                goto score;
		                break;
		            }
                case 6:
		            printf("\n\n\nWhat kind of file extension .bak?,");
		            printf("\n\nA.Backup file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		            if (toupper(getchar())=='A')
		            {
                        printf("\n\nCorrect!!!");
                        countr++;
                        getchar();
                        break;
                    }
		            else
                    {
		                printf("\n\nWrong!!! The correct answer is A.Backup file");
		                getchar();
		                goto score;
		                break;
		            }
                    case 7:
		                printf("\n\n\nwhich of he following is a read only memory storage device ");
		                printf("\n\nA.Flash drive\t\tB.Hard disk\n\nC.Floppy disk\t\tD.CDROM");
		                if(toupper(getchar())=='D')
		                {
                            printf("\n\nCorrect!!!");
                            countr++;
                            getchar();
                            break;
                        }
		                else
                        {
		                    printf("\n\nWrong!!! The correct answer is D.CDROM");
		                    getchar();
		                    goto score;
		                    break;
		                }
                    case 8:
		                printf("\n\n\nThe _____ shows all the web sites any pages that you have visited one of recent time ");
		                printf("\n\nA.Hisory list\t\tB.Status bar \n\nC.task bar\t\tD.record");
		                if(toupper(getchar())=='A')
		                {
                            printf("\n\nCorrect!!!");
                            countr++;
                            getchar();
                            break;
                        }
		                else
                        {
		                    printf("\n\nWrong!!! The correct answer is A.Hisory list");
		                    getchar();
		                    goto score;
		                    break;
		                }
                    case 9:
		                printf("\n\n\nA 32 bit word computer can access ____ bytes at a time ");
		                printf("\n\nA.32\t\tB.16\n\nC.8\t\tD.4");
		                if(toupper(getchar())=='C')
		                {
                            printf("\n\nCorrect!!!");
                            countr++;
                            getchar();
                            break;
                        }
		                else
                        {
		                    printf("\n\nWrong!!! The correct answer is C.8");
		                    getchar();
		                    goto score;
		                    break;
		                }
                    case 10:
     	                printf("\n\n\nWho is the founder of pixar animation?");
		                printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		                if(toupper(getchar())=='C')
		                {
                            printf("\n\nCorrect!!!");
                            countr++;
                            getchar();
                            break;
                        }
		                else
                        {
		                    printf("\n\nWrong!!! The correct answer is C.Steve jobs");
		                    getchar();
		                    goto score;
		                    break;
		                }
            }
        }
        
        score:
        system("cls");
	    score=(float)countr*100000;
	    if(score>0.00 && score<1000000)
	    {
	        printf("\n\n\t\t**************** CONGRATULATION *****************");
            printf("\n\t You won $%.2f",score);
            goto go;
        }
        else if(score==1000000.00)
	    {
	        printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	        printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	        printf("\n\t\t\t\t You won $%.2f",score);
	        printf("\n\t\t\t\t Thank You !!");
	    }
	    else
        {
	        printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	        printf("\n\t\t Thanks for your participation");
	        printf("\n\t\t TRY AGAIN");
            goto go;
        }  
        
        go:
	    puts("\n\n Press Y if you want to play next game");
	    puts(" Press any key if you want to go main menu");
	    if (toupper(getchar())=='Y')
	    {
	    	goto home;
        }
        else
	    {
	     	edit_score(score,playername);
		    goto mainhome;
        }
    }
}