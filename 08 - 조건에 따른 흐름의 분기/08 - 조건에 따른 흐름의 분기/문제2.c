#include <stdio.h>

int main_c(void)
{
	int num1, num2, num, abs;

	printf("n1 :");
	scanf_s("%d", &num1);
	printf("n2 :");
	scanf_s("%d", &num2);

	abs = num1 - num2;
	num = (abs > 0) ? abs : abs * (-1);
	printf("%d", num);
	return 0;
}