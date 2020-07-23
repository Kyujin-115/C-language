#include <stdio.h>

int main(void)
{
	int dan = 2;
	int a = 1;

	while (dan < 10)
	{
		a = 1;
		while (a < 10)
		{
			printf("%d X %d = %d\n", dan, a, dan * a);
			a++;
		}
		dan++;
	}
	return 0;
}