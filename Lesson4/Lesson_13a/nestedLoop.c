/*
 * nestedLoops.c
 *
 *  Created on: 17 Apr 2020
 *      Author: titan
 */
#include<stdio.h>
void printStars(int row, int col);

int main () {

	printStars(3, 5);

	return 0;
}

void star(int row, int col) {
	int i, j;
	for (i = 1; i <= row; i++) {
		for (j = 0; j<= col; j++) {
		printf("*\n");
		}
	}
}


