#include<stdio.h>

int main(void)
{
	double num1, num2;
	printf("µÎ°³ÀÇ ½Ç¼ö ÀÔ·Â : ");
	scanf_s("%1f %1f", &num1, &num2);

	printf("µÎ¼öÀÇ µ¡¼À: %f \n", (double)num1+(double)num2);
	printf("µÎ¼öÀÇ –E¼À: %f \n", (double)num1 - (double)num2);
	printf("µÎ¼öÀÇ °ö¼À: %f \n", (double)num1 * (double)num2);
	printf("µÎ¼öÀÇ ³ª´°¼À: %f \n", (double)num1 / (double)num2);
	return 0;
}
