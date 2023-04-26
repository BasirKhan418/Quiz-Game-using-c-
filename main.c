#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
void help();
int main()
{
    int countr, r, r1, count, i, n;
    int score;
    char choice;
    char playername[20];
mainhome:
    system("cls");
    printf("\t\t\tC PROGRAM QUIZ GAME\n");
    printf("\n\t\t________________________________________");

    printf("\n\t\t\t   WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t   C QUIZ COMPETITION ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t   BECOME HIRE TO OUR COMPANY !!!!!!!!!!!    ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    choice = toupper(getch());
    if (choice == 'V')
    {
        printf("A New Feature will added it will be added soon\n");
        goto mainhome;
    }
    else if (choice == 'H')
    {
        help();
        getch();
        goto mainhome;
    }
    else if (choice == 'R')
    {
        printf("A New Feature will added it will be added soon\n");
        getch();
        goto mainhome;
    }
    else if (choice == 'Q')
        exit(1);
    else if (choice == 'S')
    {
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        gets(playername);

        system("cls");
        printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------", playername);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
        printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if (toupper(getch()) == 'Y')
        {
            goto home;
        }
        else
        {
            goto mainhome;
            system("cls");
        }

    home:
        system("cls");
        count = 0;
        for (i = 1; i <= 3; i++)
        {
            system("cls");
            r1 = i;

            switch (r1)
            {
            case 1:
                printf("\n\nWhich of the following is a correct integer syntax?");
                printf("\n\nA.int a = 30;\t\tB.int @a =23;\n\nC.float a =30;\t\tD.char a = 30;");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.int a = 30;");
                    getch();
                    break;
                }

            case 2:
                printf("\n\n\nHow many keywords in c ?");
                printf("\n\nA.45\t\tB.33\n\nC.32\t\tD.31");
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is C.32");
                    getch();
                    break;
                }

            case 3:
                printf("\n\n\nWhich is the correct float variable syntax ?");
                printf("\n\nA.Float #ab =1.0;\t\tB.float a = 1.0;\n\nC.float 1a=1.2;\t\tD.int a =1.0;");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect!!!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.float a = 1.0;");
                    getch();
                    break;
                }
            }
        }

        if (count >= 2)
        {
            goto test;
        }
        else
        {
            system("cls");
            printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            getch();
            goto mainhome;
        }
    test:
        system("cls");
        printf("\n\n\t*** CONGRATULATION %s you are eligible to take the test***", playername);
        printf("\n\n\n\n\t!Press any key to Start the Game!");
        if (toupper(getch()) == 'p')
        {
            goto game;
        }
    game:
        countr = 0;
        for (i = 1; i <= 10; i++)
        {
            system("cls");
            r = i;

            switch (r)
            {
            case 1:
                printf("\n\nWhich is the correct arithmetic operator in c language?");
                printf("\n\nA.==\t\tB.>=\n\nC.+\t\tD.<=");
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
                    break;
                    getch();
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is C.+");
                    getch();
                    break;
                }

            case 2:
                printf("\n\n\nWho is the father of C language?,");
                printf("\n\nA.Steve Jobs\t\tB.James Gosling\n\nC.Rasmus Lerdorf\t\tD. Dennis Ritchie");
                if (toupper(getch()) == 'D')
                {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is D. Dennis Ritchie");
                    getch();
                    break;
                }

            case 3:
                printf("\n\n\nWhich of the following is not a valid C variable name? ");
                printf("\n\nA. int number;\t\tB. float rate;\n\nC.int $main;\t\tD.int variable_count;");
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is C. int $main;");
                    getch();
                    break;
                }

            case 4:
                printf("\n\n\n The C-preprocessors are specified with _________ symbol.");
                printf("\n\nA. #\t\tB.$\n\nC.” ”\t\tD. &");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.#");
                    getch();
                    break;
                }

            case 5:
                printf("\n\n\nWhich of the following cannot be a variable name in C?");
                printf("\n\nA.export\t\tB.volatile\n\nC. true\t\tD.friend");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.volatile");
                    getch();
                    break;
                }

            case 6:
                printf("\n\n\nWhat is the use of printf?");
                printf("\n\nA.For printing the value\t\tB.Scanning\n\nC.Updating the value\t\tD.Increasing");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.For printing the value");
                    getch();
                    goto score;
                    break;
                }
            }
        }
    score:
        system("cls");
        score = countr;
        if (score >= 2)
        {
            printf("\n\n\t\t**************** CONGRATULATION *****************");
            printf("\n\t You won a chance reappear it  your score is %d", score);
            printf("\n\t You won a chance reappear it press z to reapper");
           choice = toupper(getch());
            if (choice == 'Z')
        {
            goto game;
        }
        }

        else if (score >=5)
        {
            printf("\n\n\n \t\t**************** CONGRATULATION ****************");
            printf("\n\t\t\t\t YOU ARE A HIRED");
            printf("\n\t\t You Score 6 out of %d", score);
            printf("\t\t Thank You!!");
        }
        else
        {
            printf("\n\n\t******** SORRY YOU DIDN'T HIRE ********");
            printf("\n\t\t Thanks for your participation");
            printf("\n\t\t TRY AGAIN");
            goto go;
        }

    go:
        puts("\n\n Press Y if you want to play next game");
        puts(" Press any key if you want to go main menu");
        if (toupper(getch()) == 'Y')
            goto home;

        goto mainhome;
    }
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
    printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by group 3 of c project credit goes to chandra kant sir********");
}
