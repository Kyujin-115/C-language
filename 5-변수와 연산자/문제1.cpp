#include<stdio.h>

int main_b(void)
{
	int posx, posy ;
	int posz, posa ;
	int area;

	printf("�»���� x,y ��ǥ : ") ;
	scanf_s("%d %d\n", &posx, &posy) ;
	printf("���ϴ��� x,y��ǥ : ") ;
	scanf_s("%d %d\n", &posz, &posa) ;

	area = (posz - posx) * (posa - posy) ;
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�", area);
	return 0;
}
