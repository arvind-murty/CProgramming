#ifndef PART_H
#define PART_H
#define NAME_LEN 25


struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
    struct part *next;
};


typedef struct part Part;

Part *find_part(int number);
void insert();
void search();
void update();
void print();


#endif
