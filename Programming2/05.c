#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const double SQMETER_PER_PYEONG = 3.3058;

	double x, y;

	printf("���� �Է��ϼ���: ");

	scanf("%lf", &x);

	y = x * SQMETER_PER_PYEONG;

	printf("%lf �������Դϴ�.\n", y);

	return 0;
}