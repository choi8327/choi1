#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x = 10, y = 10, z = 33;

	x += 1;	// x = x +1;
	y *= 2;	// y = y *2;

	z %= 10 + 20;	// z = z% (x + y);

	printf("x =%d    y=%d     z=%d \n", x, y, z);
	return 0;
}