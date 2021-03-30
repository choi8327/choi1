#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;
	double y;

	printf("몸무게를 입력하세요(단위: kg): ");
	scanf("%lf", &x);
	y = x * 0.17;
	printf("달에서의 몸무게는 %lfkg 입니다.", y);
	
	return 0;
}