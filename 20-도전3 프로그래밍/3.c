#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	printf("������ ���� : 0���� %2d���� \n", RAND_MAX%100);
	for (i = 0; i < 5; i++)
		printf("���� ��� : %2d \n", rand()%100);
	return 0;
}