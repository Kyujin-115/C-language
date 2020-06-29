#include<stdio.h>

int main_k(void)
{
	int result;
	int num1;

	printf("정수 입력 : ");
	scanf_s("%d", &num1);

	result = num1 * num1;
	printf("%d \n", result);
	return 0;
}