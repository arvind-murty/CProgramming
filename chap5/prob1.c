


#include <stdio.h>


int main(void)
{

        int x;
        printf("Enter a number: ");
        scanf("%d", &x);
        if (x >= 1000)
          printf("The number %d has 4 digits\n", x);
        else if (x >= 100)
          printf("The number %d has 3 digits\n", x);
        else if (x >= 10)
          printf("The number %d has 2 digits\n", x);
        else
          printf("The number %d has 1 digit\n", x);
        return 0;

}
