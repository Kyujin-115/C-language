#include <stdio.h>

int main_g(void)
{
	int A, Z;
	int result;

	for (A = 1; A < 10; A++)
	{
		for (Z = 1; Z < 10; Z++)
		{
			result = (10 * A + Z) + (10 * Z + A);
			if (result == 99)
			{
				printf("%d, %d\n", A, Z);
			}
			else
				continue;
		}

	}

	return 0;
}