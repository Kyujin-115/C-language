#include <stdio.h>

int main_2(void)
{
	double a = 245;
	int b = 3.1415;
	int c = 129;
	char ch1 = c;

	printf("정수를 실수로 : %f \n", a);
	printf("실수를 정수로 : %d \n", b);
	printf("큰 정수를 작은 정수로 : %d \n", ch1);
	return 0;
}