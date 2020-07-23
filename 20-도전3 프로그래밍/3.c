#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	printf("난수의 범위 : 0부터 %2d까지 \n", RAND_MAX%100);
	for (i = 0; i < 5; i++)
		printf("난수 출력 : %2d \n", rand()%100);
	return 0;
}