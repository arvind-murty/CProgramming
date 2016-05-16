


#include <stdio.h>

float power(float x, unsigned int n);

int main(void)
{

        float x;
        scanf("%f", &x);
        float value = (3 * power(x, 5)) + (2 * power(x, 4)) - (5 * power(x, 3)) - (power(x, 2)) + (7 * x) - 6;
        printf("%f\n", value);
        return 0;
        
}


float power(float x, unsigned int n)
{
        return n == 0 ? 1.0 : x * power (x, n-1);
}
