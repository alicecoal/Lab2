#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "Header2Lab2.h"

double check(void)
{
	double sum, kol; int flag, sign, f; char a;
	flag = 0;
	while (flag == 0) {
		sum = 0; kol = 10.0; f = 0; a = '0'; sign = 0;
		while (((a <= '9') && (a >= '0')) || ((a == '.') && (f < 2)) || ((a == '-') && (sign == 1))) {
			scanf("%c", &a);
			if (a == '\n') {
				break;
			}
			if (a == '.') {
				f = f + 1;
			}
			if (f == 0) {
				sum = sum * 10 + (a - '0');
			}
			else if ((a != '.') && (a != '-')) {
				sum = sum + ((a - '0') / kol);
				kol = kol * 10;
			}
			sign += 1;
		}
		if (a != '\n') {
			printf("THE ENTERED VALUE IF INVALID, PLEASE TRY AGAIN\n");
			while (a != '\n') {
				scanf("%c", &a);
			}
		}
		else {
			flag = 1;
			break;
		}
	}
	if (sign == 1) {
		sum = sum * (-1);
	}
	return sum;
}
double check1(double x) {
	while (1) {
		if (x < 1e-10) {
			printf("THE ENTERED VALUE IF INVALID, PLEASE TRY TO ENTER E AGAIN\n");
			x = check();
		}
		else {
			return x;
		}
	}
}

int Function1(double x, double e) {
	double s2, kol; int sign, factorial, fact, n;
	s2 = 0; kol = x; factorial = 1; fact = 2; sign = 1; n = 0;
	while ((fabs(sin(x) - s2)) > e) {
		s2 = s2 + (sign * (kol / factorial));
		if (sign == 1) {
			sign = -1;
		}
		else {
			sign = 1;
		}
		kol = kol * x * x;
		factorial = factorial * (fact * (fact + 1));
		fact = fact + 2;
		n = n + 1;
		if (n > 1000)
		{
			break;
		}
	}
	return n;
}

int Function2(double s2, int sign, double kol, int factorial, int fact, double x, double e, int n) {
	if ((fabs(sin(x) - s2)) > e) {
		return Function2(s2 + (sign * (kol / factorial)), (-1) * sign, kol * x * x, factorial * (fact) * (fact + 1), fact + 2, x, e, n + 1);
	}
	else return n;
}