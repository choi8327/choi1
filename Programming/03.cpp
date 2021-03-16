#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x;
	double y;
	double area;
	
	printf("»ï°¢ÇüÀÇ ¹Øº¯: ");
	scanf("%lf", &x);
	printf("»ï°¢ÇüÀÇ ³ôÀÌ: ");
	scanf("%lf", &y);
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ: ");
	
	area = 0.5 * x * y;
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ:%lf", area);
	
	return 0;
}