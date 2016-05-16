


#include <stdio.h>

int main(void)
{

        float loan;
        float interest_rate;
        float monthly_payment;
        printf("Enter amount of loan: ");
        scanf("%f", &loan);
        printf("Enter interest rate: ");
        scanf("%f", &interest_rate);
        printf("Enter monthly payment: ");
        scanf("%f", &monthly_payment);
        float first_payment = ((1 + (interest_rate/1200)) * loan) - monthly_payment;
        float second_payment = first_payment - monthly_payment + ((interest_rate/1200) * loan);
        float third_payment = second_payment - monthly_payment + ((interest_rate/1200) * loan);
        printf("Balance remaining after first payment: $%f\n", first_payment);
        printf("Balance remaining after second payment: $%f\n", second_payment);
        printf("Balance remaining after third payment: $%f\n", third_payment);
        return 0;

}
