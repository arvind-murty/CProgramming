



#include <stdio.h>


int main(void)
{

        float amount;
        printf("Enter an amount: ");
        scanf("%f", &amount);
        float amount_with_tax = (amount * 105.0)/100.0;
        printf("With tax added: $%.2f\n", amount_with_tax);
        return 0;

}
