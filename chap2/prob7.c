


#include <stdio.h>


int main(void)
{

        int amount;
        printf("Enter a dollar amount: ");
        scanf("%d", &amount);
        int twenty_dollar_bills = amount/20;
        int ten_dollar_bills = (amount - (twenty_dollar_bills * 20))/10;
        int five_dollar_bills = (amount - ((twenty_dollar_bills * 20) + (ten_dollar_bills * 10)))/5;
        int one_dollar_bills = amount - ((twenty_dollar_bills * 20) + (ten_dollar_bills * 10) + (five_dollar_bills * 5));
        printf("$20 bills: %d\n", twenty_dollar_bills);
        printf("$10 bills: %d\n", ten_dollar_bills);
        printf("$5 bills: %d\n", five_dollar_bills);
        printf("$1 bills: %d\n", one_dollar_bills);
        return 0;

}
