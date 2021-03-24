#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y, z;

	printf("질량(kg): ");
	scanf("%lf", &x);
	printf("속도(m/s): ");
	scanf("%lf", &y);

	z = 0.5 * x * y * y;
	printf("운동에너지(J): %lf", z);

	return 0;
}