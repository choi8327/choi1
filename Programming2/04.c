#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y, z, o;

	printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
	scanf("%lf %lf %lf", &x, &y, &z);

	o = x * y * z;

	printf("������ ���Ǵ� %lf�Դϴ�.\n", o);

	return 0;
}