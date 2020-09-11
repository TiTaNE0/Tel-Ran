/*
 * arrayTaxIL.c
 *
 *  Created on: 30 Apr 2020
 *      Author: titan
 */
#include<stdio.h>

float taxIsrael(float salary, float taxAllowance);

int main () {
	float tax = taxIsrael(12050, 5.25);
	printf("tax = %d", tax);
	return 0;
}


float taxIsrael(float salary, float taxAllowance) {
	float tax = -taxAllowance*216;
	int arrTax[] = {6310, 9050, 14530, 20200, 42030, 54130};
	float arrPerc[] = {0.1, 0.15, 0.2, 0.31, 0.35, 0.47, 0.5};
	int i;
	for (sal = salary; sal <= arrTax[6]; sal+tax)
	for (i = 0; i <= 7; i++) {

	}
	return tax;
}



