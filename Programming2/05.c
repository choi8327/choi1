#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const double SQMETER_PER_PYEONG = 3.3058;

	double x, y;

	printf("평을 입력하세요: ");

	scanf("%lf", &x);

	y = x * SQMETER_PER_PYEONG;

	printf("%lf 평방미터입니다.\n", y);

	return 0;
}