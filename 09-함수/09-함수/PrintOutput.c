#include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}

int main_a(void)
{
	int result;
	result = Add(3, 4);
	printf("������� 1: %d\n", result);
	result = Add(5, 6);
	printf("������� 2 : %d", result);
	
	return ;
}