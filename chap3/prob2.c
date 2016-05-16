


#include <stdio.h>


int main(void)
{

        int number;
        float price;
        int month;
        int day;
        int year;
        printf("Enter item number: ");
        scanf("%d", &number);
        printf("Enter unit price: ");
        scanf("%f", &price);
        printf("Enter purchase date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        printf("\nItem\t\tUnit   \t\tPurchase\n");
        printf("    \t\tPrice  \t\tDate\n");
        printf("%-4d\t\t$%-7.2f\t\t%.2d/%.2d/%.4d\n", number, price, month, day, year);
        return 0;

}
