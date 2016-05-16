


#include <stdio.h>


void qsort(int *a, int *b)
{
    if (a >= b)
    {
        return;
    }
    int *low = a;
    int *high = b;
    int pivot = *a;

    while (low < high)
    {
        while (*high > pivot && low < high)
        {
            --high;
        }
        *low = *high;
        while (*low <= pivot && low < high)
        {
            ++low;
        }
        *high = *low;
    }

    *low = pivot;
    qsort (a, low - 1);
    qsort (high + 1, b);
}


int main(void)
{
    int array[1000] = {0};
    int n;
    printf("Enter number of numbers entered: ");
    scanf("%d", &n);
    printf("Enter numbers to be sorted: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    qsort (array, array + n - 1);
    for (int i = 0; i < n; i++)
    {   
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
