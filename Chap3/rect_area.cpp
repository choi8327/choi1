#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double w;
	double h;
	double area;
	double perimeter;

	w = 10.0;
	h = 5.0;
	area = w * h;
	perimeter = 2 * (w + h);

	printf("����: %lf\n", area);
	printf("�ѷ�: %lf\n", perimeter);
		
	return 0;
	}