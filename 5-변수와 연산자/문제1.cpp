#include<stdio.h>

int main_b(void)
{
	int posx, posy ;
	int posz, posa ;
	int area;

	printf("좌상단의 x,y 좌표 : ") ;
	scanf_s("%d %d\n", &posx, &posy) ;
	printf("우하단의 x,y좌표 : ") ;
	scanf_s("%d %d\n", &posz, &posa) ;

	area = (posz - posx) * (posa - posy) ;
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다", area);
	return 0;
}
