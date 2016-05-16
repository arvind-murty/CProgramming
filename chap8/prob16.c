


#include <stdio.h>


int main(void)
{
    char first_word[100] = {0};
    char second_word[100] = {0};
    int i = -1;
    int j = -1;
    int anagrams = 0;
    printf("Enter first word: ");
    do
    {
        ++i;
        scanf("%c", &first_word[i]);
    }
    while (first_word[i] != '\n');
    printf("Enter second word: ");
    do
    {
        ++j;
        scanf("%c", &second_word[j]);
    }
    while (second_word[j] != '\n');
    if (i == j)
    {
        ++anagrams;
    }
    i = 0;
    while (first_word[i] != '\n')
    {
        j = 0;
        while (second_word[j] != '\n')
        {
            if (first_word[i] == second_word[j])
            {
                break;
            }
            ++j;
        }
        if (second_word[j] == '\n')
        {
            anagrams = 0;
        }
        ++i;
    }
    if (anagrams == 1)
    {
        printf("The words are anagrams.\n");
    }
    else
    {
        printf("The words are not anagrams.\n");
    }
    return 0;
}
