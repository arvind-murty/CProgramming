


#include <stdio.h>


int main(void)
{

        int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p;
        printf("Enter the numbers from 1 to 16 in any order: ");
        scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o, &p);
        int rowsum1 = a + b + c + d;
        int rowsum2 = e + f + g + h;
        int rowsum3 = i + j + k + l;
        int rowsum4 = m + n + o + p;
        int columnsum1 = a + e + i + m;
        int columnsum2 = b + f + j + n;
        int columnsum3 = c + g + k + o;
        int columnsum4 = d + h + l + p;
        int diagonalsum1 = a + f + k + p;
        int diagonalsum2 = d + g + j + m;
        printf("%d %d %d %d\n", a, b, c, d);
        printf("%d %d %d %d\n", e, f, g, h);
        printf("%d %d %d %d\n", i, j, k, l);
        printf("%d %d %d %d\n\n", m, n, o, p);
        printf("Row sums: %d %d %d %d\n", rowsum1, rowsum2, rowsum3, rowsum4);
        printf("Column sums: %d %d %d %d\n", columnsum1, columnsum2, columnsum3, columnsum4);
        printf("Diagonal sums: %d %d\n", diagonalsum1, diagonalsum2);
        return 0;

}
