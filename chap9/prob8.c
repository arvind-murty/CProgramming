


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int play_game (char ch)
{
    if (ch == 'y')
    {
        return 1;
    }
    else if (ch == 'Y')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int roll_dice (void)
{
    int first_roll;
    int second_roll;
    int sum;
    first_roll = (rand() % 6) + 1;
    second_roll = (rand() % 6) + 1;
    sum = first_roll + second_roll;
    return sum;
}


int main(void)
{
    char c = 'y';
    int point;
    int value;
    int wins = 0;
    int losses = 0;
    srand((unsigned) time(NULL));
    while (play_game (c) == 1)
    {
        point = roll_dice();
        printf("You rolled: %d\n", point);
        printf("Your point is %d\n", point);
        do
        {
            if (point == 7)
            {
                printf("You win!\n\n");
                ++wins;
                break;
            }
            else if (point == 11)
            {
                printf("You win!\n\n");
                ++wins;
                break;
            }
            else if (point == 2)
            {
                printf("You lose!\n\n");
                ++losses;
                break;
            }
            else if (point == 3)
            {
                printf("You lose!\n\n");
                ++losses;
                break;
            }
            else if (point == 12)
            {
                printf("You lose!\n\n");
                ++losses;
                break;
            }
            value = roll_dice ();
            printf("You rolled: %d\n", value);
            if (value == point)
            {
                printf("You win!\n\n");
                ++wins;
                break;
            }
            else if (value == 7)
            {
                printf("You lose!\n\n");
                ++losses;
                break;
            }
        }
        while (roll_dice () > 0);
        printf("Play again? ");
        do
        {
            scanf("%c", &c);
        } 
        while (c != 'y' && c != 'Y' && c != 'n' && c != 'N');
        printf("\n");
    }
    printf("Wins: %d  Losses: %d\n", wins, losses);
    return 0;
}
