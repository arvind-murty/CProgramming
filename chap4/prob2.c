

#include <stdio.h>


int power(int x)
{

        if (x == 0) return 1;
        return 10 * power(x - 1);

}


int power_of_n(int x)
{

        if (x/10 == 0) return 0;
        return power_of_n(x / 10) + 1;

}


int reverse(int n, int a)
{

        if (a == 0) return n;
        return ((n % 10) * power(a)) + reverse(n / 10, a - 1);

}


int main(void)
{

        int n;
        printf("Enter an integer: ");
        scanf("%d", &n);
        int reverse_of_n = reverse(n, power_of_n(n));
        printf("The reversal is: %d\n", reverse_of_n);
        return 0;

}
