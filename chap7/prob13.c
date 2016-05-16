


#include <stdio.h>


int main(void)
{

    char c;
    float word_counter = 1;
    float character_counter = 0;
    float return_value = 0;
    printf("Enter a sentence: ");
    while (c != '\n' && c != EOF)
    {
        scanf("%c", &c);
        if (c != '\n' && c != EOF)
        {
            if (c == ' ')
            {
                ++word_counter;
            }
            else
            {
                ++character_counter;
            }
        }
    }
    return_value = character_counter / word_counter;
    printf("Average word length: %.1f\n", return_value);
    return 0;

}
