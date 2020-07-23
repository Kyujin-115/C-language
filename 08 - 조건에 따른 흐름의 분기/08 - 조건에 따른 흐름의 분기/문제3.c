#include <stdio.h>

int main_d(void)
{
	int  a, b, c;
	double avg;
	printf("국어 : ");
	scanf_s("%d", &a);
	printf("수학 : ");
	scanf_s("%d", &b);
	printf("영어 : ");
	scanf_s("%d", &c);

	avg = (a + b + c) / 3;

	if (avg >= 90)
	{
		printf("A");
	}
	else if (avg >= 80)
	{
		printf("B");
	}
	else if (avg >= 70)
	{
		printf("C");
	}
	else if (avg >= 50)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	
	return 0;
}