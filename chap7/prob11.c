


#include <stdio.h>


int main(void)
{

    char ch;
    char first_letter;
    printf("Enter a first and last name: ");
    scanf("%c", &ch);
    first_letter = ch;
    do
    {
        scanf("%c", &ch);
        if (ch == ' ')
        {
            while (ch != '\n' && ch != EOF)
            {
                scanf("%c", &ch);
                if (ch != '\n')
                {
                printf("%c", ch);
                }
            }
        }
    }
    while (ch != '\n' && ch != EOF);
    printf(", %c\n", first_letter);
    return 0;

}
