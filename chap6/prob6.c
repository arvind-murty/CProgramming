


#include <stdio.h>


int main(void)
{

    int n;
    int a = 2;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n >= a * a)
    {
        printf("%d\n", a * a);
        a = a + 2;
    }
    return 0;

}
