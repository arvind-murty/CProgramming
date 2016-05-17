


#include "part.h"
#include <stdio.h>
#include <stdlib.h>


Part *inventory = NULL;

Part *find_part(int number)
{
    Part *here = inventory;
    while (here != NULL)
    {
        if (here->number == number)
        {
            return here;
        }
        here = here->next;
    }
    return NULL;
}


void insert()
{
    Part *cur;
    Part *prev;
    Part *new_node;
    int number;
    printf("Enter part number: ");
    scanf("%d", &number);
    
    if (find_part(number) != NULL)
    {
        printf("Part already exists\n");
        return;
    }
    new_node = malloc(sizeof(Part));
    new_node->number = number;
    for (prev = NULL, cur = inventory; cur != NULL && cur->number < new_node->number; prev = cur, cur = cur->next)
    {
    }

    printf("Enter part name: ");
    scanf("%s", new_node->name);
    printf("Enter quantity on hand: ");
    scanf("%d", &new_node->on_hand);
    new_node->next = cur;
    if (prev != NULL)
    {
        prev->next = new_node;
    }
    else
    {
        inventory = new_node;
    }
}


void search()
{
    int number;
    printf("Enter part number: ");
    scanf("%d", &number);
    Part *i = find_part(number);
    if (i != NULL)
    {
        printf("Part name: %s\n", i->name);
        printf("Quantity on hand: %d\n", i->on_hand);
    }
    else
    {
        printf("Part not found\n");
    }
}


void update()
{
    int number;
    printf("Enter part number: ");
    scanf("%d", &number);
    Part *i = find_part(number);
    if (i != NULL)
    {
        int change_on_hand;
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change_on_hand);
        i->on_hand += change_on_hand;
    }
    else
    {
        printf("Part not found\n");
    }
}



void print()
{
    Part *cur = inventory;
    printf("Part Number    Part Name                Quantity on Hand\n");
    while (cur != NULL)
    {
        printf("%7d        %-25s%11d\n", cur->number, cur->name, cur->on_hand);
        cur = cur->next;
    }
}
