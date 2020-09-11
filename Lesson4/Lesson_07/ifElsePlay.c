/*
 * ifElsePlay.c
 *
 *  Created on: Mar 20, 2020
 *      Author: User
 */

#include<stdio.h>

int max(int x, int y);
int abs1(int x);
int D(float a, float b, float c);
int sign(float x);

int main() {
	int height = 190;

	if (height >= 192) {
		printf("I'm very tall!\n");
	} else {
		printf("I'm not as tall as Jordan\n");
	}
	printf("My height is %d. \n", height);

	printf("MAX is %d\n", max(1, 2));

	printf("ABS = %d\n", abs1(19));

	int roots = D(1, 2, 1);
	printf("Number of roots %d\n", roots);

	int signRes = sign(-0.0);
	printf("%d", signRes);

	return 0;
}

int sign(float x){
	if(x > 0){
		return 1;
	}else{
		if (x < 0) {
		return -1;
		}else{
			return 0;
		}
	}
}

int D(float a, float b, float c) {
	float delta = (b * b - 4 * a * c);
	if (delta < 0) {
		return 0;
	} else {
		if (delta == 0) {
			return 1;
		} else {
			return 2;
		}

	}
}

int max(int x, int y) {
	if (x > y) {
		return x;
	} else {
		return y;
	}
}

int abs1(int x) {
	if (x >= 0) {
		return x;
	} else {
		return -x;
	}
}

