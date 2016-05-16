


#include <stdio.h>


int main(void)
{

        int value_entered;
        printf("Enter a two-digit number: ");
        scanf("%d", &value_entered);
        int value_returned = ((value_entered % 10) * 10) + (value_entered/10);
        printf("The reversal is: %d\n", value_returned);
        return 0;

}
