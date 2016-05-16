


#include <stdio.h>


int main(void)
{

    int number_of_days;
    int starting_day;
    printf("Enter number of days in month: ");
    scanf("%d", &number_of_days);
    printf("Enter starting day of week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);
    int i;
    int a = starting_day;
    while (a > 1)
    {
        printf("   ");
        --a;
    }
    for (i = 1; i <= number_of_days; ++i)
    {
        if (i + starting_day - 1 == 7)
        {
            printf("%-3d\n", i);
        }
        else if (i + starting_day - 1 == 14)
        {
            printf("%-3d\n", i);
        }
        else if (i + starting_day - 1 == 21)
        {
            printf("%-3d\n", i);
        }
        else if (i + starting_day - 1 == 28)
        {
            printf("%-3d\n", i);
        }
        else if (i + starting_day - 1 == 35)
        {
            printf("%-3d\n", i);
        }
        else if (i == number_of_days)
        {
            printf("%-3d\n", i);
        }
        else
        {
            printf("%-3d", i);
        }
    }
    return 0;

}
