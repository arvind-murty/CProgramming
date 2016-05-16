


#include <stdio.h>


int gcd(int x, int y);


int main(void)
{

    int num;
    int denom;
    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &denom);
    int result_num = num / gcd(num, denom);
    int result_denom = denom / gcd(num, denom);
    printf("%d/%d\n", result_num, result_denom);
    return 0;

}
