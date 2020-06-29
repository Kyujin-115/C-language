#include<stdio.h>

int main_b(void)
{
	int num1, num2; //num이라는 이름의 변수 선언 int-메모리 공간을 할당
	int num3 = 30, num4 = 40;

	num1 = 10;
	num2 = 20;
	printf("num1:%d, num2:%d\n", num1, num2);

	printf("num1 : %d, num2 : %d \n", num1, num2);
	printf("num3 : %d, num4 : %d \n", num3, num4);
	return 0;
}