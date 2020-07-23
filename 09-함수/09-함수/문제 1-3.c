#include <stdio.h>

int Farrange(int num)
{
	int i;
	int p1, p2, p3;
	for (i = 1; i <= num; i++)
	{
		if (i == 1)
		{
			p1 = 0;
			p2 = 1;
			printf("%d, ", p1);
		}
		
		else 
		{
			p3 = p1 + p2;
			printf("%d, ", p2);
			p1 = p2;
			p2 = p3;
		}
	}

}

int main(void)
{
	int num;
	printf("ÃÑ È½¼ö : ");
	scanf_s("%d", &num);
	Farrange(num);
	
	return 0;
}