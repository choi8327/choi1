#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;
	double y;
	double area;
	
	printf("�ﰢ���� �غ�: ");
	scanf("%lf", &x);
	printf("�ﰢ���� ����: ");
	scanf("%lf", &y);
	printf("�ﰢ���� ����: ");
	
	area = 0.5 * x * y;
	printf("�ﰢ���� ����:%lf", area);
	
	return 0;
}