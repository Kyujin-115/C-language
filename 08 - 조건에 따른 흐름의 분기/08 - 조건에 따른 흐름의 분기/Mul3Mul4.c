# include <stdio.h>

int main_a(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{
		if (num % 3 == 0 || num % 4 == 0)
		{
			printf("3또는 4의 배수:%d \n", num);
		}
	}
	return 0;
}