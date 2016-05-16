


#include <stdio.h>


char stack_array[1000] = {0};
int stack_pos = 0;


int is_full (void)
{
   return stack_pos == 1000;
}


int is_empty (void)
{
    return stack_pos == 0;
}

void push (char c)
{
    if (is_full())
    {
        fprintf(stderr, "stack overflow\n");
        exit (-1);
    }
    stack_array[stack_pos++] = c;
}


char pop (void)
{
    if (is_empty())
    {
        fprintf(stderr, "stack underflow\n");
        exit (-2);
    }
    return stack_array[--stack_pos];
}


int main ()
{
    const char* const overflow = "Upper limit reached\n";
    const char* const success  = "The paran/braces are nested\n";
    const char* const failed   = "The paran/braces are not nested\n";
    char ch;
    do
    {
        scanf("%c", &ch);

        switch (ch)
        {
            case '{':
            case '(':
                if (is_full ()) {
                    printf (overflow);
                    exit (-1);
                }
                push (ch);
                break;

            case '}':
            case ')':
                if (is_empty()) {
                    printf (failed);
                    exit (-1);
                }
                switch (ch)
                {
                    case '}':
                        if (pop () != '{') { printf (failed); exit (-1); }
                        break;
                    case ')':
                        if (pop () != '(') { printf (failed); exit (-1); }
                        break;
                }
                break;

            default:
                printf (failed);
                exit (-1);
        }
    }
    while (ch != '\n' && ch != EOF);

    if (is_empty()) printf (success);
    else            printf (failed);
}

