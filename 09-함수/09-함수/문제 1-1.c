#include <stdio.h>

int Max(int num1, int num2, int num3)
{
	if (num1 > num2)
		return (num1 > num3 ? num1 : num3);
	else
		return (num2 > num3 ? num2 : num3);
}

int Min(int num1, int num2, int num3)
{
	if (num1 < num2)
		return (num1 < num3 ? num1 : num3);
	else
		return (num2 < num3 ? num2 : num3);
}

int main_b(void)
{
	int n1, n2, n3;
	int Max_result;
	int Min_result;
	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	Max_result = Max(n1, n2, n3);
	Min_result = Min(n1, n2, n3);
	printf("���� ū �� : %d \n", Max_result);
	printf("���� ���� �� : %d \n", Min_result);
	return;
}