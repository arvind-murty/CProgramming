


#include <stdio.h>


int readline (const char* const prompt, char *str)
{
    int len = -1;

    printf ("%s", prompt);
    do
    {
        ++len;
        scanf("%c", &str[len]);
        str[len+1] = '\0';
    }
    while (str[len] != '\n');
    return len;
}

