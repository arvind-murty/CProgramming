


#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    char array[10][10] = {0};
    int i = 0;
    int j;
    char c = 'A';
    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            array[i][j] = '.';
            ++j;
        }
        ++i;
    }
    srand((unsigned) time(NULL));
    array[0][0] = c;
    i = 0;
    j = 0;
    c += 1;
    while (c <= 'Z')
    {
        int variable = rand() % 4;
        switch (variable)
        {
            case 0:
                i -= 1;
                break;
            case 1:
                j += 1;
                break;
            case 2:
                i += 1;
                break;
            case 3:
                j -= 1;
                break;
        }
        if (i >= 0 && i < 10 && j >= 0 && j < 10 && array[i][j] == '.')
        {
            array[i][j] = c;
            c++;
        }
        else
        {
            switch (variable)
            {
                case 0:
                    i += 1;
                    break;
                case 1:
                    j -= 1;
                    break;
                case 2:
                    i -= 1;
                    break;
                case 3:
                    j += 1;
                    break;
            }
            if (array[i + 1][j] != '.' && array[i][j + 1] != '.' && array[i - 1][j] != '.' && array[i][j - 1] != '.')
            {
                break;
            }
        }
    }
    i = 0;
    while (i < 10)
    {
        j = 0;
        while (j < 10)
        {
            printf("%c ", array[i][j]);
            ++j;
        }
        printf("\n");
        ++i;
    }
    return 0;

}
