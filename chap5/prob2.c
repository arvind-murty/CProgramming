


#include <stdio.h>


int main(void)
{

        int hours;
        int minutes;
        printf("Enter a 24-hour time: ");
        scanf("%d:%d", &hours, &minutes);
        if (hours == 24)
          printf("Equivalent 12-hour time: 12:00 AM\n");
        else if (hours > 12)
          printf("Equivalent 12-hour time: %d:%d PM\n", hours - 12, minutes);
        else if (hours == 12)
          printf("Equivalent 12-hour time: 12:%d PM\n", minutes);
        else
          printf("Equivalent 12-hour time: %d:%d AM\n", hours, minutes);
        return 0;

}
