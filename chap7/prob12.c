


#include <stdio.h>


int main(void)
{

    float n;
    float a;
    char c = 'a';
    printf("Enter an expression: ");
    scanf("%f", &n);
    a = n;
    while (c != '\n' && c != EOF)
    {
        scanf("%c", &c);
        if (c != '\n' && c != EOF)
        {
            scanf("%f", &n);
            switch (c)
            {
                case '+':
                    a = a + n;
                    break;
                case '-':
                    a = a - n;
                    break;
                case '*':
                    a = a * n;
                    break;
                case '/':
                    a = a / n;
                    break;
            }
        }
    }
    printf("Value of expression: %f\n", a);
    return 0;

}
