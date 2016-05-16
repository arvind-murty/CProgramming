


#include <stdio.h>


int main(void)
{

    int number;
    printf("Enter a two-digit number: ");
    scanf("%d", &number);
    int ones_digit = number % 10;
    int tens_digit = number / 10;
    switch (number)
    {
        case 10:
            printf("You entered the number ten\n");
            return 0;
        case 11:
            printf("You entered the number eleven\n");
            return 0;
        case 12:
            printf("You entered the number twelve\n");
            return 0;
        case 13:
            printf("You entered the number thirteen\n");
            return 0;
        case 14:
            printf("You entered the number fourteen\n");
            return 0;
        case 15:
            printf("You entered the number fifteen\n");
            return 0;
        case 16:
            printf("You entered the number sixteen\n");
            return 0;
        case 17:
            printf("You entered the number seventeen\n");
            return 0;
        case 18:
            printf("You entered the number eighteen\n");
            return 0;
        case 19:
            printf("You entered the number nineteen\n");
            return 0;
    }
    switch (tens_digit)
    {
        case 2:
            printf("You entered the number twenty");
            break;
        case 3:
            printf("You entered the number thirty");
            break;
        case 4:
            printf("You entered the number forty");
            break;
        case 5:
            printf("You entered the number fifty");
            break;
        case 6:
            printf("You entered the number sixty");
            break;
        case 7:
            printf("You entered the number seventy");
            break;
        case 8:
            printf("You entered the number eighty");
            break;
        case 9:
            printf("You entered the number ninety");
            break;
    }
    switch (ones_digit)
    {
        case 0:
            printf("\n");
            break;
        case 1:
            printf("-one\n");
            break;
        case 2:
            printf("-two\n");
            break;
        case 3:
            printf("-three\n");
            break;
        case 4:
            printf("-four\n");
            break;
        case 5:
            printf("-five\n");
            break;
        case 6:
            printf("-six\n");
            break;
        case 7:
            printf("-seven\n");
            break;
        case 8:
            printf("-eight\n");
            break;
        case 9:
            printf("-nine\n");
            break;
    }
    return 0;

}
