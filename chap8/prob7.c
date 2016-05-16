


#include <stdio.h>


int main(void)
{

    int integer_array[5][5] = {0};
    int row_totals[5] = {0};
    int column_totals[5] = {0};
    printf("Enter row 1: ");
    scanf("%d %d %d %d %d", &integer_array[0][0], &integer_array[0][1], &integer_array[0][2], &integer_array[0][3], &integer_array[0][4]);
    printf("Enter row 2: ");
    scanf("%d %d %d %d %d", &integer_array[1][0], &integer_array[1][1], &integer_array[1][2], &integer_array[1][3], &integer_array[1][4]);
    printf("Enter row 3: ");
    scanf("%d %d %d %d %d", &integer_array[2][0], &integer_array[2][1], &integer_array[2][2], &integer_array[2][3], &integer_array[2][4]);
    printf("Enter row 4: ");
    scanf("%d %d %d %d %d", &integer_array[3][0], &integer_array[3][1], &integer_array[3][2], &integer_array[3][3], &integer_array[3][4]);
    printf("Enter row 5: ");
    scanf("%d %d %d %d %d", &integer_array[4][0], &integer_array[4][1], &integer_array[4][2], &integer_array[4][3], &integer_array[4][4]);
    int i = 0;
    int j = 0;
    while (i < 5)
    {
        row_totals[i] = integer_array[i][0] + integer_array[i][1] + integer_array[i][2] + integer_array[i][3] + integer_array[i][4];
        column_totals[j] = integer_array[0][j] + integer_array[1][j] + integer_array[2][j] + integer_array[3][j] + integer_array[4][j];
        ++i;
        ++j;
    }
    printf("Row totals: %d %d %d %d %d\n", row_totals[0], row_totals[1], row_totals[2], row_totals[3], row_totals[4]);
    printf("Column totals: %d %d %d %d %d\n", column_totals[0], column_totals[1], column_totals[2], column_totals[3], column_totals[4]);
    return 0;

}
