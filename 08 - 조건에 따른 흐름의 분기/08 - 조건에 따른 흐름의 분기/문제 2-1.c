#include <stdio.h>

int main_f(void)
{
	int i, j;
	for (i = 1; i < 10; i++)
	{
		if (i % 2 == 1)
			continue;
		for (j = 1; j <= 10; j++)
		{
			if (j > i)
				break;
			else
				printf("%d X %d = %d\n", i, j, i * j);
		}
	}

	return 0;
}