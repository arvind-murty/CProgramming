


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
};
struct part inventory[MAX_PARTS];

int num_parts = 0;

int find_part(int number);
void insert();
void search();
void update();
void print();


int main(void)
{
    for (;;)
    {
        printf("Enter operation code: ");
        char code;
        scanf("%c", &code);
        while (getchar() != '\n')
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
                update();
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
        return;
    }
    printf("Part not found\n");
    return;
}


void update()
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


void print()
{
    printf("Part Number    Part Name                Quantity on Hand\n");
    int number_array[MAX_PARTS] = {0};
    for (int i = 0; i < num_parts; i++)
    {
        number_array[i] = inventory[i].number;
    }
    my_qsort (number_array, number_array + num_parts - 1);
    for (int i = 0; i < num_parts; i++)
    {
        int index = find_part(number_array[i]);
        printf("%7d        %-25s%11d\n", inventory[index].number, inventory[index].name, inventory[index].on_hand);
    }
    return;
}
