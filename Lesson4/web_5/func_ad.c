/*
 * func_ad.c
 *
 *  Created on: Mar 12, 2020
 *      Author: User
 */

#include<stdio.h>

int plus(int a, int b);
int minus(int a, int b);
float div(float x, int y);
int mult(int a, int b);
void swapNumbers(int a, int b);

int main(){
	int res = plus(15, 87);
	printf("res = %d\n", res);

	float res1 = div(12.2, 2);
	printf("res = %.2f\n", res1);

	swapNumbers(1565, 5651);

	return 0;
}

int plus(int a, int b){
	return a + b;
}

int minus(int a, int b){
	return a - b;
}

float div(float a, int b){
	return a / b;
}

int mult(int a, int b){
	return a * b;
}

void swapNumbers(int a, int b){
	printf("Before swap a = %d, b = %d\n", a, b);
//	int temp = a;
//	a = b;
//	b = temp;

	a = a + b;
	b = a - b;
	a = a - b;

	printf("After swap a = %d, b = %d\n", a, b);
}

