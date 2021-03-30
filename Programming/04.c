#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;
	double y;
	
	printf("화씨값을 입력하시오: ");
	scanf("%lf", &x);
	
	y = (5.0/9.0)*(x - 32.0);

	printf("섭씨값은 %lf도 입니다.", y);
	
	return 0;
}