


#include <stdio.h>


int main(void)
{

    char ch;
    int i = 0;
    printf("Enter a sentence: ");
    do
    {
        scanf("%c", &ch);
        switch (ch)
        {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                ++i;
                break;
        }
    }
    while (ch != '\n' && ch != EOF);
    printf("Your sentence has %d vowels\n", i);
    return 0;

}
