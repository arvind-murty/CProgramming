


#include <stdio.h>


int main(void)
{
    char c;
    int i = 0;
    int a = 0;
    char b1ff[1000] = {0};
    printf("Enter message: ");
    do
    {
        scanf("%c", &c);
        b1ff[i] = c;
        if (c >= 'a' && c <= 'z')
        {
            b1ff[i] = c - ('a' - 'A');
        }
        switch (c)
        {
            case 'A':
            case 'a':
                b1ff[i] = '4';
                break;
            case 'B':
            case 'b':
                b1ff[i] = '8';
                break;
            case 'E':
            case 'e':
                b1ff[i] = '3';
                break;
            case 'I':
            case 'i':
                b1ff[i] = '1';
                break;
            case 'O':
            case 'o':
                b1ff[i] = '0';
                break;
            case 'S':
            case 's':
                b1ff[i] = '5';
                break;
        }
        ++i;
    }
    while (c != '\n' && c != EOF);
    i -= 1;
    b1ff[i] = '!';
    printf("In B1FF-speak: ");
    while (a <= i)
    {
        printf("%c", b1ff[a]);
        ++a;
    }
    printf("!!!!!!!!!!\n");
    return 0;
}
