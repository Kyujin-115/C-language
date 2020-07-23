#include <stdio.h>

int main_b(void)
{
	int num,abs;
	printf("Á¤¼ö ÀÔ·Â : ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("Àý´ñ°© : %d \n", abs);

	return 0;
}