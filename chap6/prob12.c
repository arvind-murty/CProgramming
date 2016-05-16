


#include <stdio.h>


int main(void)
{

    double e;
    double denom = 1;
    int n;
    printf("Enter a small (floating-point) number: ");
    scanf("%lf", &e);
    for (n = 1; e <= 1 / denom; denom *= n)
    {
        ++n;
    }
    printf("The answer to this question is %d\n", n);
    return 0;

}
