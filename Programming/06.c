#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;
	double y;

	printf("�����Ը� �Է��ϼ���(����: kg): ");
	scanf("%lf", &x);
	y = x * 0.17;
	printf("�޿����� �����Դ� %lfkg �Դϴ�.", y);
	
	return 0;
}