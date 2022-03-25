#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void test(){
	void show_record()
	{ 
		char name[20];
		float scr=0;
		FILE *f;
		f=fopen("score.txt","r");
		fscanf(f,"%s%f",&name,&scr);
		printf("\n\n\t\t*************************************************************");
		printf("\n\n\t\t %s has secured the Highest Score %f",name,scr);
		printf("\n\n\t\t*************************************************************");
		fclose(f);
		getchar();
	}

	void reset_score()
	{
    	system("cls");
    	float sc;
		char nm[20];
		FILE *f;
		f=fopen("score.txt","r+");
		fscanf(f,"%s%f",&nm,&sc);
		sc=0;
		fprintf(f,"%s,%.2f",nm,sc);
    	fclose(f);
	}

	void help()
	{
    	system("cls");
    	printf("\n\n                              HELP");
    	printf("\n -------------------------------------------------------------------------");
    	printf("\n ......................... C program Quiz Game...........");
    	printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    	printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    	printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    	printf("\n    right answers otherwise you can't play the Game...........");
    	printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    	printf("\n    total 10 questions each right answer will be awarded $100,000.");
    	printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    	printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    	printf("\n    right option");
    	printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    	printf("\n >> No negative marking for wrong answers");

		printf("\n\n\t*********************BEST OF LUCK*********************************");
		printf("\n\n\t*****C PROGRAM QUIZ GAME is developed byDEEPAK SHARMA AP GOYAL SHIMLA UNIVERSITY********");
	}

	void edit_score(float score, char playernm[20])
	{
    	system("cls");
		float sc;
		char nm[20];
		FILE *f;
		f=fopen("score.txt","r");
		fscanf(f,"%s%f",&nm,&sc);
		if (score>=sc)
		{
        	sc=score;
	    	fclose(f);
	    	f=fopen("score.txt","w");
	    	fprintf(f,"%s\n%.2f",playernm,sc); //print in player name
	    	fclose(f);
    	}
	}
}

void test_game()
{
    printf("Successfully Done This Project\n");
    printf("Can we do this Again!!!☺\n\n");
}

/*
int main()
{
    test_game();
    return 0;
}
*/
 
//Code Reference: allprogramminghindi.in