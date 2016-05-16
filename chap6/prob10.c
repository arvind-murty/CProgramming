


#include <stdio.h>


int larger_day(int m1, int m2, int d1, int d2, int y1, int y2)
{
        if (y1 > y2)
        {
            return d1;
        }
        else if (y1 == y2)
        {
                if (m1 > m2)
                {
                    return d1;
                }
                else if (m1 == m2)
                {
                        if (d1 > d2)
                        {
                            return d1;
                        }
                        else if (d1 == d2)
                        {
                            return d1;
                        }
                        else
                        {
                            return d2;
                        }
                }
                else 
                {
                    return d2;
                }
        }
        else
        {
            return d2;
        }
}


int larger_month(int m1, int m2, int d1, int d2, int y1, int y2)
{
        if (y1 > y2)
        {
            return m1;
        }
        else if (y1 == y2)
        {
                if (m1 > m2)
                {
                    return m1;
                }
                else if (m1 == m2)
                {
                        if (d1 > d2)
                        {
                            return m1;
                        }
                        else if (d1 == d2)
                        {
                            return m1;
                        }
                        else
                        {
                            return m2;
                        }
                }
                else 
                {
                    return m2;
                }
        }
        else
        {
            return m2;
        }
}


int larger_year(int m1, int m2, int d1, int d2, int y1, int y2)
{
        if (y1 > y2)
        {
            return y1;
        }
        else if (y1 == y2)
        {
                if (m1 > m2)
                {
                    return y1;
                }
                else if (m1 == m2)
                {
                        if (d1 > d2)
                        {
                            return y1;
                        }
                        else if (d1 == d2)
                        {
                            return y1;
                        }
                        else
                        {
                            return y2;
                        }
                }
                else 
                {
                    return y2;
                }
        }
        else
        {
            return y2;
        }
}


int main(void)
{

    int m;
    int d;
    int y;
    int largest_day = 0;
    int largest_month = 0;
    int largest_year = 0;
    do
    {
        printf("Enter date (mm/dd/yy): ");
        scanf("%d/%d/%d", &m, &d, &y);
        largest_day = larger_day(largest_month, m, largest_day, d, largest_year, y);
        largest_month = larger_month(largest_month, m, largest_day, d, largest_year, y);
        largest_year = larger_year(largest_month, m, largest_day, d, largest_year, y);
    }
    while (d > 0);
    printf("The most recent date is %d/%d/%d\n", largest_month, largest_day, largest_year);
    return 0;

}
