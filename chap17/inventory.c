


#include <stdio.h>
#include "part.h"


int main()
{
    for (;;)
    {
        char code;
        printf("Enter operation code: ");
        scanf("%c", &code);
        while (getchar() != '\n')
        {
        }
        switch (code)
        {
            case 'i':
                insert();
                break;
            case 's':
                search();
                break;
            case 'e':
                erase();
                break;
            case 'u':
                update();
                break;
            case 'p':
                print();
                break;
            case 'q':
                return 0;
        }
        printf("\n");
    }
}
