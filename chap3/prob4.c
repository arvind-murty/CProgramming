


#include <stdio.h>


int main(void)
{

        int first_three_numbers;
        int second_three_numbers;
        int last_four_numbers;
        printf("Enter phone number [(xxx) xxx-xxxx]: ");
        scanf("(%d) %d-%d", &first_three_numbers, &second_three_numbers, &last_four_numbers);
        printf("You entered %d.%d.%d\n", first_three_numbers, second_three_numbers, last_four_numbers);
        return 0;

}
