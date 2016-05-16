


#include <stdio.h>


int power (int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        if (n % 2 == 0)
        {
            return power (x, n / 2) * power (x, n / 2);
        }
        else
        {
            return x * power (x, n - 1);
        }
    }
}


int main(void)
{
    int a;
    int b;
    printf("Enter base of exponential expression: ");
    scanf("%d", &a);
    printf("Enter exponent of exponential expression: ");
    scanf("%d", &b);
    int value = power (a, b);
    printf("Value of this expression: %d\n", value);
    return 0;
}
