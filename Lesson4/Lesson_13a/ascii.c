/*
 * hw_numsplit.c
 *
 *  Created on: 15 Apr 2020
 *      Author: titan
 */
#include <stdio.h>

int main() {

	int x;
		for (x = 0; x <= 500; x++) {
			if (x % 5) {
				printf("%c -> %d \t", x, x);
			}else{
				printf("%c -> %d \n", x, x);
			}
		}

	return 0;
}
