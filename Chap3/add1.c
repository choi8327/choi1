/* 두개의 숫자의 합을 계산하는 프로그램*/
#include <stdio.h>	// include : 현재 위치의 헤더파일을 읽어서 포함시켜라

int main(void)		// void : 입력이 없다는 의미 
{
	int x;			// 첫번째 정수를 저장할 변수        
	int y;			// 두번째 정수를 저장할 변수
	int sum;		// 두 정수의 합을 저장하는 변수
					// 자료형 (data type) : 변수가 저장할 데이터가 정수인지 실수인지 아니면 또 다른 어떤 데이터인지를 지정하는것
	x = 100;
	y = 200;
	
	sum = x + y;
	printf("두수의 합: %d", sum);

	return 0;		// return : 함수가 값을 반환하는 경우 사용
}