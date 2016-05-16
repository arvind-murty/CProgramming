


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


double RPN_expression[1000] = {0};
int stack_pos = 0;


int is_empty (void)
{
    return stack_pos < 1 ? 1 : 0;
}


int is_full (void)
{
    return stack_pos > 1000 ? 1 : 0;
}


void push (double value)
{
    if (is_full()) 
    {
        printf("stack overflow\n");
        exit(-1);
    }
    RPN_expression[stack_pos++] = value;
}


double pop (void)
{
    if (is_empty())
    {
        printf("stack underflow\n");
        exit(-1);
    }
    return RPN_expression[--stack_pos];
}


int main(void)
{
    char ch[1000] = {0};
    printf("Enter RPN expression: ");
    int len = -1;
    do
    {
        ++len;
        scanf("%c", &ch[len]);
    }
    while (ch[len] != '\n');
    double value = 0;
    int idx = 0;
    while (idx < len)
    {
        while (isspace(ch[idx]))
        {
            ++idx;
        }
        switch (ch[idx])
        {
            case '+':
                push (pop() + pop());
                ++idx;
                break;
            case '-':
                push (pop() - pop());
                ++idx;
                break;
            case '*':
                push (pop() * pop());
                ++idx;
                break;
            case '/':
                push (pop() / pop());
                ++idx;
                break;
            default:
                (sscanf(&ch[idx], "%lf", &value));
                push (value);
                while (isdigit(ch[idx]) || ch[idx] == '.')
                {
                    ++idx;
                }
        }
    }
    printf("Value of expression: %lf\n", pop());
    return 0;
}
