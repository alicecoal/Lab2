#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Header2Lab2.h"

int main(void)
{
	double x, e, s1, e1; int s2, s3;
	printf("Enter x: ");
	x = check();
	printf("Enter e: ");
	e1 = check();
	e = check1(e1);
	s1 = sin(x);
	s2 = Function1(x, e);
	s3 = Function2(0, 1, x, 1, 2, x, e, 0);
	printf("N = %d\n", s2);
	printf("N = %d\n", s3);
	return 0;
}