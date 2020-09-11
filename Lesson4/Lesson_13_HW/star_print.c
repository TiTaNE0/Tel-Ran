/*
 * star_print.c
 *
 *  Created on: 18 Apr 2020
 *      Author: titan
 */
#include<stdio.h>
void starPrinterX(int q);
void starPrinter05left(int q);
void starPrinter025top(int q);

int main() {
	printf("   1 2 3 4 5 6 7 8 9 10 = j\n");
	printf("1  * * * * * * * * * * \n");
	printf("2  * * * * * * * * * * \n");
	printf("3  *   * * * * * *   * \n");
	printf("4  *     * * * *     * \n");
	printf("5  *       * *       * \n");
	printf("6  *       * *       * \n");
	printf("7  *     *     *     * \n");
	printf("8  *   *         *   * \n");
	printf("9  * *             * * \n");
	printf("10 * * * * * * * * * * \n");
	printf("i\n");
	printf("\n");
	starPrinter025top(10);

	starPrinterX(10);
    starPrinter05left(10);

    return 0;
}

void starPrinterX(int q) {
	int i, j;
	for (i = 1; i <= q; i++) {
		for (j = 1; j <= q; j++) {
			if (i == 1 || i == q || j == 1 || j == q || i == j || (j == q-i+1)){
				printf("* ");
			} else {
			printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
}


void starPrinter05left(int q) {
	int i, j;
	for (i = 1; i <= q; i++) {
		for (j = 1; j <= q; j++) {
			if (i == 1 || i == q || j == 1 || (j <= i) || (j == i) || j == q) {
				printf("* ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
}

void starPrinter025top(int q) {
	int i, j;
	for (i = 1; i <= q; i++) {
		for (j = 1; j <= q; j++) {
			if (i == 1 || i == q || j == 1 || (j == i) || j == q || (j == q-i+1) ||
			(j >= i && i + j <= q + 1)) {
				printf("* ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("\n");
}
