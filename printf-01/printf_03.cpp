#include <stdio.h>

int main() {

	printf("문자열 출력 \n");
	printf("%s \n", "문자는 겹따옴표 묶음");

	printf("이름 국어 영어 수학 총점 평균  \n");
	printf("이름\t국어\t영어\t수학\t총점\t평균\n");

	printf("%c \n", 'abc');
	printf("%d \n", 'a');
	printf("%d \n", 'A');

	printf("%s \t%s \t%s \t%s \t%s \t%s\n"
	, "이름", "국어", "영어", "수학", "총점", "평균");
	}