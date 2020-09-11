/*
 * condition.c
 *
 *  Created on: Mar 17, 2020
 *      Author: User
 */
#include<stdio.h>

int main(){

	int x = 17 % 5;
	printf("x = %d \n", x);

	x= 5782 % 100;
	printf("x = %d\n", x);

	int a = 5;
	int b = 5;

	int check = a > b;
	printf("check = %d\n", check);


	int z = -x;
	printf("z = %d\n", z);
	z = -z;
	printf("z = %d\n", z);


	--x;
	printf("x = %d\n", x);



	return 0;
}
