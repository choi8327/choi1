#define _CRT_SECURE_NO_WARNINGS
/* 2�� ���� ���α׷�*/
#include <stdio.h>

int main()
{
	int x = 3;
	int y = -3;

	printf("x = %08x\n", x);		// 8�ڸ��� 16������ ����Ѵ�.
	printf("y = %08x\n", y);		// 8�ڸ��� 16������ ����Ѵ�.
	printf("x+y = %08x\n", x + y);  // 8�ڸ��� 16������ ����Ѵ�.

	return 0;
}