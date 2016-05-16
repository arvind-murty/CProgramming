


#include <stdio.h>


int main(void)
{

    char sentence[1000] = {0};
    char reversal[1000] = {0};
    char terminate;
    int length = 0;
    printf("Enter a sentence: ");
    do
    {
        scanf("%c", &sentence[length]);
        if (sentence[length] == '.' || sentence[length] == '!' || sentence[length] == '?')
        {
            terminate = sentence[length];
            sentence[length] = 0;
            break;
        }
        ++length;
    }
    while (sentence[length] != '\n' && sentence[length] != EOF);
    int idx_r = 0;
    int idx_s = length - 1;
    int size = 0;
    int i = 0;
    while (idx_s >= 0)
    {
        while (sentence[idx_s] == ' ')
        {
            reversal[idx_r] = sentence[idx_s];
            ++idx_r;
            --idx_s;
        }
        while (sentence[idx_s - size] != ' ' && idx_s - size >= 0)
        {
            ++size;
        }
        for (i = 1; i <= size; i++)
        {
            reversal[idx_r + i - 1] = sentence[idx_s - size + i];
        }
        idx_s -= size;
        idx_r += size;
        size = 0;
    }
    printf("Reversal of sentence: ");
    printf("%s", reversal);
    printf("%c\n", terminate);
    return 0;

}
