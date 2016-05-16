


#include <stdio.h>


int main(void)
{

    int n;
    double value = 1;
    double denom = 1;
    int i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        denom = denom * i;

        if (denom < 0) break;
        value = value + (1.0 / denom);
    }
    printf("The approximation of e is %f after %d terms\n", value, i);
    return 0;

}
