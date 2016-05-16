#include "line.h"
#include <string.h>
#include <stdio.h>

char line[80 + 1];
int  len = 0;



void clear_line()
{
    line[0] = '\0';
	len = 0;
}

void add_word (const char *word)
{
    if (len != 0)
    {    
        line[len++] = ' ';
    }

    strcpy (line + len, word);
	len = strlen(line);
}

int space_remaining ()
{
    return 80 - len - 1;
}

void write_line ()
{
    int extra_spaces = space_remaining();

    flush_line();
}

void flush_line ()
{
    printf ("%s\n", line);
}

