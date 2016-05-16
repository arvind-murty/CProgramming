


#include <stdio.h>


int gcd(int x, int y);

int main ()
{
    int first_number;
    int second_number;
    printf("Enter two integers: ");
    scanf("%d %d", &first_number, &second_number);
    int _gcd = gcd (first_number, second_number);
    printf("Greatest common divisor: %d\n", _gcd);
}
