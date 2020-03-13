#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Header1Lab2.h"

double Function1(void)
{
	double sum, kol; int flag, f; char a;
	flag = 0;
	while (flag == 0) {
		sum = 0; kol = 10.0; f = 0; a = '0';
		while (((a <= '9') && (a >= '0')) || ((a == '.') && (f < 2))) {
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
			else if (a != '.') {
				sum = sum + ((a - '0') / kol);
				kol = kol * 10;
			}
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
	return sum;
}

void Function2(double sum)
{
	double SellDollar, SellEuro, SellRuble;
	SellDollar = sum / 2.252;
	SellEuro = sum / 2.513;
	SellRuble = sum / 3.42;
	printf("US dollars   %8f\n", SellDollar);
	printf("Euros        %8f\n", SellEuro);
	printf("Rubles       %8f\n", SellRuble);
}

void Function3(void)
{
	double sum = 1;
	double SellDollar, SellEuro, SellRuble, BuyDollar, BuyEuro, BuyRuble;
	SellDollar = sum / 2.252;
	SellEuro = sum / 2.513;
	SellRuble = sum / 3.42;
	BuyDollar = 2.222 * sum;
	BuyEuro = 2.483 * sum;
	BuyRuble = 3.3 * sum;
	printf("\t\tSell \t   Buy\n");
	printf("US dollars   %8f%12f\n", SellDollar, BuyDollar);
	printf("Euros        %8f%12f\n", SellEuro, BuyEuro);
	printf("Rubles(100)  %8f%12f\n", SellRuble, BuyRuble);
}

void Function4(void)
{
	double raz1, raz2, raz3;
	raz1 = 100 - ((1 / 2.252) * 2.222 * 100);
	raz2 = 100 - ((1 / 2.513) * 2.483 * 100);
	raz3 = 100 - ((1 / 3.42) * 3.3 * 100);
	printf("The profit in US dollars   %8.4f %% \n", raz1);
	printf("The profit in Euros        %8.4f %% \n", raz2);
	printf("The profit in Rubles       %8.4f %% \n", raz3);
	if ((raz1 > raz2) && (raz1 > raz3)) {
		printf("The most advantageous currency for a deal is dollars\n");
	}
	if ((raz2 > raz1) && (raz2 > raz3)) {
		printf("The most advantageous currency for a deal is euros\n");
	}
	if ((raz3 > raz1) && (raz3 > raz2)) {
		printf("The most advantageous currency for a deal is rubles\n");
	}
}

void Function5(void)
{
	printf("Priorbank Open Joint Stock Company, founded on January 20, 1989.\n");
	printf("On July 12, 1991, Priorbank OJSC was registered with the National Bank of the Republic of Belarus - registration number 12.\n");
	printf("Banking License 12 was issued to Priorbank OJSC on May 6, 2013.\n");
	printf("Contacts - +375-17-289-90-90, (A1, MTC, life)\n");
}