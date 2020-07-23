#include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}

int main_a(void)
{
	int result;
	result = Add(3, 4);
	printf("µ¡¼À°á°ú 1: %d\n", result);
	result = Add(5, 6);
	printf("µ¡¼À°á°ú 2 : %d", result);
	
	return ;
}