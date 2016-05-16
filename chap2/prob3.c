

#include <stdio.h>
#include <math.h>

int main(void)
{

        double radius;
        scanf("%lf", &radius);
        double volume = (4.0f/3.0f) * radius * radius * radius * M_PI;
        printf("%e\n", volume);
        return 0;

}
