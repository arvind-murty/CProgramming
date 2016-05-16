


#include <stdio.h>


int main(void)
{

    float number;
    float biggest_number = 0;
    int number_of_numbers = -1;
    float sum = 0;
    do
    {
        ++number_of_numbers;
        printf("Enter a number: ");
        scanf("%f", &number);
        biggest_number = biggest_number > number ? biggest_number : number;
        sum += number;
    }
    while (number > 0);
    float mean = sum / number_of_numbers;
    printf("The largest number entered was %f\n", biggest_number);
    printf("The mean of these numbers is %f\n", mean);
    return 0;

}
