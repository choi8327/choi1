#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double mile;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%lf", &mile);
	printf("%lf������ %lf�����Դϴ�.", mile, mile * 1609);
	return 0;
}