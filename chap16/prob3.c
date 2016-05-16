


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

typedef struct part part;

int find_part(part* parts, int num_parts, int number);
int insert(part* parts, int num_parts);
void search(part* parts, int num_parts);
void update(part* parts, int num_parts);
void print(part* parts, int num_parts);


int main(void)
{
    part inventory[MAX_PARTS];
    int num_parts = 0;

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
                num_parts = insert(inventory, num_parts);
                break;
            case 's':
                search(inventory, num_parts);
                break;
            case 'u':
                update(inventory, num_parts);
                break;
            case 'p':
                print(inventory, num_parts);
                break;
            case 'q':
                exit(0);
        }
        printf("\n");
    }
}


int find_part(part* parts, int num_parts, int number)
{
    for (int i = 0; i < num_parts; i++)
    {
        if (number == parts[i].number)
        {
            return i;
        }
    }
    return num_parts;
}


int insert(part* parts, int num_parts)
{
    if (num_parts == MAX_PARTS)
    {
        printf("Inventory space is full: ");
        return num_parts;
    }
    int number;
    printf("Enter part number: ");
    scanf("%d", &number);
    int index = find_part(parts, num_parts, number);
    if (index < num_parts)
    {
        printf("Part number already exists\n");
        return num_parts;
    }
    printf("Enter part name: ");
    scanf("%s", parts[num_parts].name);
    printf("Enter quantity on hand: ");
    scanf("%d", &parts[num_parts].on_hand);
    parts[num_parts].number = number;
    ++num_parts;
    return num_parts;
}


void search(part* parts, int num_parts)
{
    int number;
    printf("Enter part number: ");
    scanf("%d", &number);
    int index = find_part(parts, num_parts, number);
    if (index < num_parts)
    {
        printf("Part name: %s\n", parts[index].name);
        printf("Quantity on hand: %d\n", parts[index].on_hand);
        return;
    }
    printf("Part not found\n");
    return;
}


void update(part* parts, int num_parts)
{
    int number;
    printf("Enter part number: ");
    scanf("%d", &number);
    int index = find_part(parts, num_parts, number);
    if (index < num_parts)
    {
        int change_on_hand;
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change_on_hand);
        parts[index].on_hand += change_on_hand;
        return;
    }
    printf("Part not found\n");
    return;
}


void print(part* parts, int num_parts)
{
    printf("Part Number    Part Name                Quantity on Hand\n");
    int number_array[MAX_PARTS] = {0};
    for (int i = 0; i < num_parts; i++)
    {
        number_array[i] = parts[i].number;
    }
    my_qsort (number_array, number_array + num_parts - 1);
    for (int i = 0; i < num_parts; i++)
    {
        int index = find_part(parts, num_parts, number_array[i]);
        printf("%7d        %-25s%11d\n", parts[index].number, parts[index].name, parts[index].on_hand);
    }
    return;
}
