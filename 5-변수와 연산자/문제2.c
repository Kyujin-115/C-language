#include<stdio.h>

int main(void)
{
	double num1, num2;
	printf("�ΰ��� �Ǽ� �Է� : ");
	scanf_s("%1f %1f", &num1, &num2);

	printf("�μ��� ����: %f \n", (double)num1+(double)num2);
	printf("�μ��� �E��: %f \n", (double)num1 - (double)num2);
	printf("�μ��� ����: %f \n", (double)num1 * (double)num2);
	printf("�μ��� ������: %f \n", (double)num1 / (double)num2);
	return 0;
}
