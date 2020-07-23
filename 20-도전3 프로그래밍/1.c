#include <stdio.h>


int main_2(void)
{
	int t, len;
	int a = 1;
	int s = 0, w = -1, cnt = 0;

	int arr[30][30];
	printf("숫자를 입력하시오 : ");
	scanf_s("%d", &t);

	len = t;

	while (1)
	{
		for (int i = 0; i < t; i++)
		{
			w = w + a;
			cnt++;
			arr[s][w] = cnt;
		}
		t = t - 1;

		if (cnt == len * len)
			break;

		for (int j = 0; j < t; j++)
		{
			cnt++;
			s = s + a;
			arr[s][w] = cnt;
		}
		a = a * (-1);
	}
	
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	return 0;
}