#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y, z;

	printf("����(kg): ");
	scanf("%lf", &x);
	printf("�ӵ�(m/s): ");
	scanf("%lf", &y);

	z = 0.5 * x * y * y;
	printf("�������(J): %lf", z);

	return 0;
}