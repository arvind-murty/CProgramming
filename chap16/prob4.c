


#include <stdio.h>
#include <stdlib.h>
#include "../lib/lib.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
    float price;
};
struct part inventory[MAX_PARTS];

int num_parts = 0;

int find_part(int number);
void insert();
void search();
void update_on_hand();
void update_price();
void print();


int main(void)
{
    for (;;)
    {
        printf("Enter operation code: ");
        char code;
        code = getchar();
        while (code != '\n')
        {
        }
        switch (code)
        {
            case 'i':
                insert();
                break;
            case 's':
                search();
                break;
            case 'u':
                printf("Enter furthur operation code: ");
                scanf("%c", &code);
                switch (code)
                {
                    case 'o':
                        update_on_hand();
                        break;
                    case 'p':
                        update_price();
                        break;
                }
                break;
            case 'p':
                print();
                break;
            case 'q':
                exit(0);
        }
        printf("\n");
    }
}


int find_part(int number)
{
    for (int i = 0; i < num_parts; i++)
    {
        if (number == inventory[i].number)
        {
            return i;
        }
    }
    return num_parts;
}


void insert()
{
    if (num_parts == MAX_PARTS)
    {
        printf("Inventory space is full: ");
        return;
    }
    int number;
    printf("Enter part number: ");
    scanf("%d", &number);
    int index = find_part(number);
    if (index < num_parts)
    {
        printf("Part number already exists\n");
        return;
    }
    printf("Enter part name: ");
    scanf("%s", inventory[num_parts].name);
    printf("Enter quantity on hand: ");
    scanf("%d", &inventory[num_parts].on_hand);
    printf("Enter price: ");
    scanf("%f", &inventory[num_parts].price);
    inventory[num_parts].number = number;
    ++num_parts;
}


void search()
{
    int number;
    printf("Enter part number: ");
    scanf("%d", &number);
    int index = find_part(number);
    if (index < num_parts)
    {
        printf("Part name: %s\n", inventory[index].name);
        printf("Quantity on hand: %d\n", inventory[index].on_hand);
        printf("Price of part: %f\n", inventory[index].price);
        return;
    }
    printf("Part not found\n");
    return;
}


void update_on_hand()
{
    int number;
    printf("Enter part number: ");
    scanf("%d", &number);
    int index = find_part(number);
    if (index < num_parts)
    {
        int change_on_hand;
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change_on_hand);
        inventory[index].on_hand += change_on_hand;
        return;
    }
    printf("Part not found\n");
    return;
}


void update_price()
{
    int number;
    printf("Enter part number: ");
    scanf("%d", &number);
    int index = find_part(number);
    if (index < num_parts)
    {
        float change_price;
        printf("Enter change in price: ");
        scanf("%f", &change_price);
        inventory[index].price += change_price;
        return;
    }
    printf("Part not found\n");
    return;
}


void print()
{
    printf("Part Number    Part Name                Quantity on Hand    Price\n");
    int number_array[MAX_PARTS] = {0};
    for (int i = 0; i < num_parts; i++)
    {
        number_array[i] = inventory[i].number;
    }
    my_qsort (number_array, number_array + num_parts - 1);
    for (int i = 0; i < num_parts; i++)
    {
        int index = find_part(number_array[i]);
        printf("%7d        %-25s%11d         $%.2f\n", inventory[index].number, inventory[index].name, inventory[index].on_hand, inventory[index].price);
    }
    return;
}
