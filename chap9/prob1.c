


#include <stdio.h>


void print_array (int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}


void selection_sort (int *a, int end)
{
    if (end == 0)
    {
        return;
    }
    --end;
    int largest_index = end;
    int i = end;
    while (i >= 0)
    {    
        largest_index = a[i] > a[largest_index] ? i : largest_index;
        --i;
    }
    int temp = a[end];
    a[end] = a[largest_index];
    a[largest_index] = temp;
    selection_sort (a, end);
}


int main(void)
{
    int i = -1;
    int array[1000] = {0};
    printf("0 to terminate\n");
    printf("Enter a series of integers(with a space in between the numbers): ");
    do
    {
        ++i;
        scanf("%d", &array[i]);
    }
    while (array[i] != 0);
    selection_sort (array, i);
    print_array (array, i);
    return 0;
} 
