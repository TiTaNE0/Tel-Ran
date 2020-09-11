/*
 * funcMinMax.c
 *
 *  Created on: Mar 19, 2020
 *      Author: User
 */

#include<stdio.h>
int min(int a, int b);
int max(int a, int b);
float max1(float a, float b);
float abs1(float x);

int main(){

printf("Minimum is %d\n", min(-19,-13));
printf("Maximum is %d\n", max(-19,-13));
printf("Maximum w/o conditional statement is %.2f\n", max1(-19,-13));

	return 0;
}

int min(int a, int b){
	int min = a < b ? a : b;
	return min;
}

int max(int a, int b){
	int max = a > b ? a : b;
	return max;
}

float max1(float a, float b){
	float max = (a + b - abs1(a-b))/2;
	return max;
}

float abs1(float x){
	return x >=0 ? x : -x;
}
