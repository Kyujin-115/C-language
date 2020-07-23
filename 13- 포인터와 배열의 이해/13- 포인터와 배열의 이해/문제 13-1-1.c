#include <stdio.h>

int main_c(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[0];
	
	for (int i = 0; i < 5; i++)
	{
		*ptr += 2;
		ptr++;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}