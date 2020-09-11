/*
 * loopAdv.c
 *
 *  Created on: Apr 3, 2020
 *      Author: User
 */

#include<stdio.h>

int sumDigits(int num);
int countDigits(int num);



int main(){

//	int res = sumDigits(73845723);
//	printf("sum digits = %d\n", res);

	int count = countDigits(73845723);
	printf("count digits = %d\n", count); //8

	count = countDigits(-738457);
	printf("count digits = %d\n", count); //6

	count = countDigits(7);
	printf("count digits = %d\n", count); // 1

	count = countDigits(-5);
	printf("count digits = %d\n", count); // 1

	count = countDigits(0);
	printf("count digits = %d\n", count); // 1

	return 0;
}

int countDigits(int num){
	int res = 0;
	do {
		num /= 10;
		res++;
	} while (num);
	return res;
}

int countDigits1(int num){
	if (!num) {
		return 1;
	}
	int res = 0;
	while (num) {
		num /= 10;
		res++;
	}
	return res;
}

int sumDigits(int num){
	int res = 0;
	while(num){  // num != 0
		int digit = num % 10;
		res += digit;
		num /= 10;
	}
	return res;
}


