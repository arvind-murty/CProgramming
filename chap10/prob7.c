


#include <stdio.h>

const char* l[] = { " _  ",  /* 0 */
                    "| | ",
                    "|_| ",

                    "    ",  /* 1 */
                    "  | ",
                    "  | ",

                    " _  ",  /* 2 */
                    " _| ",
                    "|_  ",

                    " _  ",  /* 3 */
                    " _| ",
                    " _| ",

                    "    ",  /* 4 */
                    "|_| ",
                    "  | ",

                    " _  ",  /* 5 */
                    "|_  ",
                    " _| ",

                    " _  ",  /* 6 */
                    "|_  ",
                    "|_| ",

                    " _  ",  /* 7 */
                    "  | ",
                    "  | ",

                    " _  ",  /* 8 */
                    "|_| ",
                    "|_| ",

                    " _  ",  /* 9 */
                    "|_| ",
                    " _| ",

                    "    ",  /* template */
                    "    ",
                    "    ",

                  };



int main(void)
{
    int num_array[1000] = {0};
    int len = 0;
    printf("Enter a number: ");

    char ch;
    do
    {
        scanf("%c", &ch);
        if (ch >= '0' && ch <= '9')
        {
            num_array[len++] = ch - '0';
        }
    }
    while (ch != '\n');

    for (int line = 0; line < 3; line++)
    {
        for (int i = 0; i < len; i++)
        {
            printf("%s", l[num_array[i] * 3 + line]);
        }
        printf("\n");
    }
}
