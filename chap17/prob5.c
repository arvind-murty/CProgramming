


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/lib.h"

char **words = NULL;
int num_words = 0;


int compare (const void *a, const void *b)
{
    const char **p = (const char **) a;
    const char **q = (const char **) b;
    return strcmp(*p, *q);
}


int main()
{
    char word[20] = {0};
    int len = 1;
    for(;;)
    {
        len = readline("Enter word: ", word);
        if (len == 0)
        {
            break;
        }
        char *p = (char *) calloc(len + 1, sizeof(char));
        strncpy(p, word, len);
        ++num_words;
        words = (char **) realloc(words, num_words * sizeof(char *));
        words[num_words - 1] = p;
    }
    qsort (words, num_words, sizeof(char *), compare);
    printf("In sorted order: ");
    for (int i = 0; i < num_words; i++)
    {
        printf("%s ", words[i]);
    }
    printf("\n");
    return 0;
}
