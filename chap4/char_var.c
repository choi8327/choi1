#define _CRT_SECURE_NO_WARNINGS
/*문자 변수와 문자 상수*/
#include <stdio.h>

int main()
{
	char code1 = 'A';	// 문자 상수로 초기화
	char code2 = 65;	// 아스키 코드로 초기화

	printf("문자 상수 초기화 = %c\n", code1);
	printf("아스키 코드 초기화 = %c\n", code2);
}