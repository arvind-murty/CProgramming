


#include <stdio.h>


void encrypt (char *message, int shift);


int main(void)
{
    char message[1000] = {0};
    char encryption[1000] = {0};
    int shift;
    int i = -1;
    int j = 0;
    printf("Enter message to be encrypted: ");
    do
    {
        ++i;
        scanf("%c", &message[i]);
    }
    while (message[i] != '\n');
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    encrypt (message, shift);
    printf("Encrypted message: %s", message);
    return 0;
}


void encrypt (char *message, int shift)
{
    while (*message != '\n')
    {
        if ((*message >= 'A' && *message <= 'Z') || (*message >= 'a' && *message <= 'z'))
        {    
            *message += shift;
            if (*message > 'Z' && *message < 'a')
            {
                *message = *message - 'Z' + 'A' - 1;
            }
            if (*message > 'z')
            {
                *message = *message - 'z' + 'a' - 1;
            }
        }
        ++message;
    }
}
