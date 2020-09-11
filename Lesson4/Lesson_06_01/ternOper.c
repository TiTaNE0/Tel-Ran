/*
 * ternOper.c
 *
 *  Created on: Mar 17, 2020
 *      Author: User
 */
#include<stdio.h>
int max(int x, int y);
float abs1(float x);
int delta(float a, float b, float c);

int main(){

	int age = 15;
	int vol = age >= 18 ? 42 : 1; //тернарный оператор

	printf("vol = %d\n", vol);

	int res = max(15, 11);
	printf("max = %d\n", res);

	float x = -7;
	float z = abs1(x);
	printf("abs = %.0f\n", z);

	int d = delta(1, 2, 3);
	d <= 0 ? printf("Solution exists") : printf("There is no solution");

	return 0;
}

int max(int x, int y) {
	int res = x > y ? x : y;
	return res;
}
float abs1(float x){
	return x >=0 ? x : -x;
}
int delta(float a, float b, float c){
	float res = b*b -  4*a*c;
	return res >=0 ? 1 : 0;
}
