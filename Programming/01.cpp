#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;
	double y;
	double z;
	double sum;

	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &x);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &y);
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &z);

	sum = x + y + z;

	printf("���� %lf�̰� ����� %lf�Դϴ�.", sum, sum / 3.0 );

	return 0;
}