#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char ramdomNumber();
int gamereturn(char user, char computer);

int main(void)
{

    char user, computer;

    printf("__________________________________________________\n\n");

    // user input
    printf("Enter R for rock ,P for paper,S for scissor:");
    scanf("%c", &user);
    computer = ramdomNumber();
    // function call
    int result = gamereturn(user, computer);

    // -1 is computerWinner
    // 0 is draw
    // -1 is userWinner
    if (result == 0)
    {
        printf("\nThe Game is Draw!!\n\n");
    }
    else if (result == 1)
    {
        printf("\nThe You is winner!!\n\n");
    }
    else if (result == -1)
    {
        printf("\nThe Computer is winner!!\n\n");
    }
    else
    {
        printf("\nWrong Choose!!\n\n");
    }

    printf("The You choose %c And The Computer choose %c.\n", user, computer);

    printf("__________________________________________________\n\n");

    return 0;
}

char ramdomNumber()
{

    char computer;

    // genarate ramdom number with the respect to time
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33)
    {
        return (computer = 'r');
    }
    else if (number >= 33 && number < 66)
    {
        return (computer = 'p');
    }
    else
    {
        return (computer = 's');
    }
}

int gamereturn(char user, char computer)
{

    // game case of draw
    if (user == computer)
    {
        return 0;
    }

    // game case of rp, pr, rs, sr, ps, and sp
    if (user == 'r' && computer == 'p')
    {
        return -1;
    }
    else if (user == 'p' && computer == 'r')
    {
        return 1;
    }

    if (user == 'r' && computer == 's')
    {
        return 1;
    }
    else if (user == 's' && computer == 'r')
    {
        return -1;
    }

    if (user == 'p' && computer == 's')
    {
        return -1;
    }
    else if (user == 's' && computer == 'p')
    {
        return 1;
    }
}