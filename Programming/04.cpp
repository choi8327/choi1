#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;
	double y;
	
	printf("ȭ������ �Է��Ͻÿ�: ");
	scanf("%lf", &x);
	
	y = (5.0/9.0)*(x - 32.0);

	printf("�������� %lf�� �Դϴ�.", y);
	
	return 0;
}