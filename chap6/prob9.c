


#include <stdio.h>


int main(void)
{

    float loan;
    float rate;
    float monthly_payment;
    int n;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter number of monthly payments: ");
    scanf("%d", &n);
    float balance_remaining = loan;
    while (n > 0)
    {
        balance_remaining = balance_remaining + (loan * (rate / 1200)) - monthly_payment;
        printf("Current balance remaining: $%.2f\n", balance_remaining);
        --n;
    }
    return 0;

}
