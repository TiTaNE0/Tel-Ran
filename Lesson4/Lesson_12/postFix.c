/*
 * postFix.c
 *
 *  Created on: Apr 7, 2020
 *      Author: User
 */
#include<stdio.h>

int main() {
	int x = 10;
	int y = ++x + x++;

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	return 0;
}
