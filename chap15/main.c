
#include "word.h"
#include "line.h"


int main ()
{
    char word[1000];
    int word_len = 0;
    for (;;)
    {
        read_word (word, 1000);
        if (*word == '\0')
        {
            flush_line ();
            break;
        }

        if (word_len > space_remaining ())
        {
            write_line ();
            clear_line ();
        }
        add_word (word);
    }
    return 0;
}

