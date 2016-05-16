


#include <stdio.h>


int main(void)
{

    int n;
    int r = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n > 0)
    {
        r = (r * 10) + (n % 10);
        n = n / 10;
    }
    printf("Reversal of that number is %d\n", r);

}
