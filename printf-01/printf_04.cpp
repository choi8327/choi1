#include <stdio.h>

int main() {
	//정수
	// 홀따음표 '' -> 문자
	// 겹따음표 "" -> 문자열
	printf("정수 5 + 6 = 11 \n");
	printf("정수 %d +%d = %d \n", 5, 6, 5 + 6);
	
	
	printf("국어 영어 총점 \n");
	printf("100 90 190 \n");
	printf("%d %d %d \n", 90, 100, 90 + 100);
	printf("%d %d %d \n", 90, 100, 100 + 100);

	printf("======줄맞춤========\n");
	printf("국어\t영어\t총점 \n");
	printf("100\t90\t190 \n");
	printf("%d\t%d\t%d \n", 90, 100, 90 + 100);
	printf("%d\t%d\t%d \n", 90, 100, 100 + 100);
	printf("======줄맞춤========\n");
	printf("국어 영어 총점 \n");
	printf("100 090 190 \n");
	printf("%03d %03d %03d \n", 90, 100, 90 + 100);
	printf("%03d %03d %03d \n", 90, 100, 100 + 100);

	printf("============숫자 표현 다양하게 ============\n");
	printf("%d \n", 3769);
	printf("%20d \n", 3769);
	printf("%#02d \n", 3769);
}