


#include <stdio.h>
#include "../lib/lib.h"

int main (void)
{
    char sentence[1000];
    int len = readline ("Enter a message: ", sentence);

    char *p = sentence;
    char *q = sentence + len - 1;

    while (p < q)
    {
        char temp = *p;
        *p = *q;
        *q = temp;

        ++p;
        --q;
    }

    printf("Rversal is: %s", sentence);
    return 0;
}
