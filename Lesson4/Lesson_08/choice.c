/*
 * choice.c
 *
 *  Created on: Mar 24, 2020
 *      Author: User
 *
 *    1)  dopisat KOD
 *    2) uluchshit kod
 *    3) iskluchit otricatelni nalog
 */

#include<stdio.h>

float taxIsrael(float salary, float taxAloowance);


int main(){

	float tax = taxIsrael(12100, 3);
	printf("Tax = %.2f\n", tax);

	return 0;
}

float taxIsrael(float salary, float taxAllowance){
	float res = taxAllowance * 216;
	if(salary <= 6310){
		return salary * 0.1 - res;
	}
	if(salary > 6310 && salary <= 9050){
		return 6310 * 0.1 + (salary - 6310) * 0.14 - res;
	}
	if(salary > 9050 && salary <= 14530){
		return 6310 * 0.1 + (9050 - 6310) * 0.14 + (salary - 9050) * 0.2 - res;
	}
	if(salary > 14530 && salary < 20200){
		return 6310 * 0.1 + (9050 - 6310) * 0.14 + (14530 - 9050) * 0.2 + (salary - 14530) * 0.31 - res;
	}
	return 0;
}
