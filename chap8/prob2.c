


#include <stdio.h>


int main(void)
{

    int n;
    int digit_seen[10] = {0};
    int digit = 0;
    int i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Digit:        0  1  2  3  4  5  6  7  8  9\n");
    printf("Occurrences:  ");
    for (i = 0; i < 10; i++)
    {
        int a = n;
        do
        {
            digit = a % 10;
            if (i == digit)
            {
                ++digit_seen[i];
            }
            a /= 10;
        }
        while (a > 0);
    }
    printf("%-3d%-3d%-3d%-3d%-3d%-3d%-3d%-3d%-3d%-3d\n", digit_seen[0], digit_seen[1], digit_seen[2], digit_seen[3], digit_seen[4], digit_seen[5], digit_seen[6], digit_seen[7], digit_seen[8], digit_seen[9]);
    return 0;

}
