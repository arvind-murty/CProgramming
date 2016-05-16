


void my_qsort(int *a, int *b)
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
    my_qsort (a, low - 1);
    my_qsort (high + 1, b);
}
