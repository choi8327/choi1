#define _CRT_SECURE_NO_WARNINGS
/* 2의 보수 프로그램*/
#include <stdio.h>

int main()
{
	int x = 3;
	int y = -3;

	printf("x = %08x\n", x);		// 8자리의 16진수로 출력한다.
	printf("y = %08x\n", y);		// 8자리의 16진수로 출력한다.
	printf("x+y = %08x\n", x + y);  // 8자리의 16진수로 출력한다.

	return 0;
}