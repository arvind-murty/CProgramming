


#include <stdio.h>


#ifndef TYPE
#define TYPE double
#endif


int main(void)
{

    int n;
    TYPE result = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    TYPE a = n;
    while (a > 0)
    {
        result *= a;
        --a;
    }
    printf("Factorial of %d: %lf\n", n, (double) result);
    return 0;

}
