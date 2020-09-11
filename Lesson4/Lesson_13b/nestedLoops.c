/*
 * hw_numsplit.c
 *
 *  Created on: 15 Apr 2020
 *      Author: titan
 */
#include <stdio.h>

void piphagoras();
void starCube(int n);

int main() {

	piphagoras();
//	starCube(7);

}
void piphagoras() {
	int i, j;
	for (i = 1; i <= 10; i++) {
		for (j = 0; j<= 10; j++) {
			printf("%d\t", i * j);
		}
		printf("\n");
	}
}

void starCube(int n) {
	int i, j;
	for (i = 1; i <= n;i++) {
		for (j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n || i == j) {
				printf("* ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}



