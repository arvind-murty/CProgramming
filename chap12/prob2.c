


#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "../lib/lib.h"

int main(void)
{
    char sentence[1000] = {0};
    int len = readline ("Enter a message: ", sentence);
    char *p = sentence;
    char *q = sentence + len - 1;

    bool is_palindrome = true;
    while (p < q && is_palindrome)
    {
        while (!isalpha(*p) && p < q)
            ++p;
        while (!isalpha(*q) && p < q)
            --q;

        is_palindrome = tolower(*p) == tolower(*q);
        p++;
        q--;
    }
    printf(is_palindrome ? "Palindrome\n" : "Not a palindrome\n");
    return 0;
}
