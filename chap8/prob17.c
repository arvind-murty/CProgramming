


#include <stdio.h>


int main(void)
{
    int size;
    printf("This program creates a magic square of a specified size.\n");
    printf("This size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &size);
    int magic_square[99][99] = {0};
    int a = 2;
    int i = 0;
    int j = size / 2;
    int p_i;
    int p_j;

    p_i = i;
    p_j = j;
    magic_square[i][j] = 1;

    --i;
    ++j;
    while (a <= size * size)
    {
        if (i < 0)
        {
            i = size - 1;
        }
        else if (i > size - 1)
        {
            i = 0;
        }
        if (j < 0)
        {
            j = size - 1;
        }
        else if (j > size - 1)
        {
            j = 0;
        }
        if (magic_square[i][j] != 0)
        {
            i = p_i;
            j = p_j;
            ++i;
            if (i > size - 1)
            {
                i = 0;
            }
        }

        p_i = i;
        p_j = j;
        magic_square[i][j] = a;

        ++a;
        --i;
        ++j;
    }
    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size)
        {
            printf("%-5d", magic_square[i][j]);
            ++j;
        }
        printf("\n");
        ++i;
    }
    return 0;
}
