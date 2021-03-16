#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;
	double y;
	double z;
	double sum;

	printf("실수를 입력하시오: ");
	scanf("%lf", &x);
	printf("실수를 입력하시오: ");
	scanf("%lf", &y);
	printf("실수를 입력하시오: ");
	scanf("%lf", &z);

	sum = x + y + z;

	printf("합은 %lf이고 평균은 %lf입니다.", sum, sum / 3.0 );

	return 0;
}