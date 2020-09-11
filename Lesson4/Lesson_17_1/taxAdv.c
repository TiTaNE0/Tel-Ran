/*
 * taxes.c
 *
 *  Created on: Mar 28, 2020
 *      Author: User
 */


#include<stdio.h>
float taxIsrael(float salary, float taxAllowance);
float taxIsrael1(float salary, float taxAllowance);

int main() {
	float tax = taxIsrael(10000, 0);
	printf("tax = %f\n", tax); //1204.60
	tax = taxIsrael(6000, 5.25);
	printf("tax = %f\n", tax); //600
	tax = taxIsrael(12500, 5.75);
	printf("tax = %f\n", tax); //911
	tax = taxIsrael(54000, 2.25);
	printf("tax = %f\n", tax);
	return 0;
}

float taxIsrael(float salary, float taxAllowance) {
	float tax = taxIsrael1(salary, taxAllowance);
	return tax >= 0 ? tax : 0;
}

float taxIsrael1(float salary, float taxAllowance) {
	float tax = -taxAllowance * 219;
	float levels[] = {0, 6310, 9050, 14530, 20200, 42030, 54130};
	float rates[] = {0.1, 0.14, 0.2, 0.31, 0.35, 0.47, 0.5};
	int i;
	for (i = 0; i < 7-1; i++) {
		if (salary > levels[i] && salary <= levels[i+1]) {
			return tax + (salary - levels[i]) * rates[i];
		} else {
			tax = tax + (levels[i + 1] - levels[i]) * rates[i];
		}
	}
	return tax + (salary - levels[6]) * rates[6];
}

