#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Header1Lab2.h"

int main(void)
{
	double sum; char c, x;	int flag, k;
	printf("Please, choose the point of menu:\n");
	printf("Press 1 if you want to enter the amount of money in Belarusian rubles\n");
	printf("Press 2 if you want to get the information about entered amount in US dollars, euros, and Russian rubles\n");
	printf("Press 3 if you want to get the currency exchange rate table (buy/sell)\n");
	printf("Press 4 if you want to calculate the profit from the operation for each currency and to define the currency most favorable to the bank for the transaction\n");
	printf("Press 5 if you want to get a brief information about the bank and contacts\n");
	printf("Press 6 if you want to exit the program\n");
	flag = 1; sum = 0;
	while (flag == 1) {
		k = 0; 
		printf("Enter the number of menu item: ");
		scanf("%c", &c);
		do {
			scanf("%c", &x);
			k = k + 1;
		} while (x != '\n');
		if (k > 1) {
			printf("THE ENTERED VALUE IS INVALID, PLEASE TRY AGAIN\n");
		}
		else if (c == '1') {
			sum = Function1();
		}
		else if (c == '2') {
			Function2(sum);
		}
		else if (c == '3') {
			Function3();
		}
		else if (c == '4') {
			Function4();
		}
		else if (c == '5') {
			Function5();
		}
		else if (c == '6') {
			flag = 0;
			break;
		}
		else {
			printf("THE ENTERED VALUE IS INVALID, PLEASE TRY AGAIN\n");
		}
	}
	return 0;
}
