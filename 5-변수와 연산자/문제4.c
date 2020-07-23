#include <stdio.h>

int main_d(void)
{
	int num1;

	char ch = 'A';
	char ch0 = 'a';
	printf("%d \n", ch);
	printf("%d \n", ch0);

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num1);
	printf("%c", num1);
	return 0;
}