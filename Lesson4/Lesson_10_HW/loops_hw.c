/*
 * loops_hw.c
 *
 *  Created on: Apr 1, 2020
 *      Author: User
 */
#include<stdio.h>

float negPow(float x, int y);
void starPrint(int q);

int main(){

	float power = negPow(4, -5);
	printf("%f\n", power);

	starPrint(64);

	return 0;
}

float negPow(float x, int y){
	float res = 1;
	int i = 1;
	int pow = 1;
	if (y < 0) {
		pow = -y;
	} else {
		pow = y;
	}


	while (i <= pow) {
		res = res * x;
		i++;
	}
	if (y < 0) {
			res = 1 / res;
		}
	return res;
}

void starPrint(int q){
	int i=1;
	while (i < q) {
		printf("*");
		if (i % 8 == 0) {
			printf("\n");
		}
		i++;
	}
}
