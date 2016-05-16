


#include <stdio.h>


int main(void)
{

    int grade;
    printf("Enter numerical grade: ");
    scanf("%d", &grade);
    int tens_digit = grade / 10;
    if (grade < 0)
    {
        printf("ERROR\n");
    }
    else if (grade > 100)
    {
        printf("ERROR\n");
    }
    else
    {
        switch (tens_digit)
        {
            case 10:
            case 9:
                printf("Letter grade: A\n");
                break;
            case 8:
                printf("Letter grade: B\n");
                break;
            case 7:
                printf("Letter grade: C\n");
                break;
            case 6:
                printf("Letter grade: D\n");
                break;
            default:
                printf("Letter grade: F\n");
                break;
        }
    }
}
