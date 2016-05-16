


#include <stdio.h>
#include <stdlib.h>

struct dialing_code
{
	char *country;
	int code;
};


const struct dialing_code country_codes[] =
	{{"Argentina", 54}, {"Bangladesh", 880}, {"Brazil", 55}, {"Burma (Myanmar)", 95}};


int main()
{
	int i;
	int n;
	int len = sizeof(country_codes) / sizeof(struct dialing_code);
	printf("Enter dialing code: ");
	scanf("%d", &n);
	for (i = 0; i < len; i++)
	{
		if (country_codes[i].code == n)
		{
            printf("Country with dialing code %d is %s\n", n, country_codes[i].country);
            return 0;
            exit(0);
        }
    }
    printf("Dialing code doesn't exist\n");
    return 0;
}
