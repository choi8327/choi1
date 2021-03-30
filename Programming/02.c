#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double mile;
	
	printf("마일을 입력하시오: ");
	scanf("%lf", &mile);
	printf("%lf마일은 %lf미터입니다.", mile, mile * 1609);
	return 0;
}