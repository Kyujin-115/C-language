#include <stdio.h>

int main_d(void)
{
	int  a, b, c;
	double avg;
	printf("���� : ");
	scanf_s("%d", &a);
	printf("���� : ");
	scanf_s("%d", &b);
	printf("���� : ");
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