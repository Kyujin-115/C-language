#include <stdio.h>

int main_e(void)
{
	int num;
	for (num = 1 ; num<20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue; 
		else
			printf("%d \n",num);
	}

	return 0;
}