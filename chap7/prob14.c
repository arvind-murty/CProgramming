


#include <stdio.h>


int main(void)
{

    double x;
    double y = 1;
    double x_over_y = 0;
    double average = 0;
    printf("Enter a positive integer: ");
    scanf("%lf", &x);
    while ((y + x_over_y) / 2 != average)
    {
        x_over_y = x / y;
        average = (y + x_over_y) / 2;
        y = average;
    }
    printf("Square root: %lf\n", average);
    return 0;

}
