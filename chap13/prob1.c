


#include <stdio.h>
#include <string.h>
#include "../lib/lib.h"


int main(void)
{
    char word[20] = {0};
    char smallest_word[20] = {0};
    char largest_word[20] = {0};
    int len = readline ("Enter word: ", word);
    strcpy (smallest_word, word);
    strcpy (largest_word, word);
    while (len != 4)
    {
        len = readline ("Enter word: ", word);
        if (strcmp (word, largest_word) > 0)
        {
            strcpy (largest_word, word);
        }
        if (strcmp (word, smallest_word) < 0)
        {
            strcpy (smallest_word, word);
        }
    }
    printf("\n");
    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);
    return 0;
}
