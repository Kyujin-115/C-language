#include<stdio.h>

int main_g(void)
{
	int result;
	int num1, num2;

	printf("����one : ");
	scanf_s("%d", &num1);
	printf("����two : ");
	scanf_s("%d", &num2);
	
	printf("%d+%d=%d \n", num1, num2, num1+num2);
	return 0;
}