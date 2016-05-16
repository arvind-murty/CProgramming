


#include <stdio.h>


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
    while (message[i] != '\n' && message[i] != EOF);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    while (j < i)
    {
        if (message[j] >= 'A' && message[j] <= 'Z')
        {
            encryption[j] = ((message[j] - 'A') + shift) % 26 + 'A';
        }
        else if (message[j] >= 'a' && message[j] <= 'z')
        {
            encryption[j] = ((message[j] - 'a') + shift) % 26 + 'a';
        }
        else
        {
            encryption[j] = message[j];
        }
        ++j;
    }
    printf("Encrypted message: %s\n", encryption);
    return 0;
}
