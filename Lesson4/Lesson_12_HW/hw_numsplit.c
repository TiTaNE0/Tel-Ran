/*
 * hw_numsplit.c
 *
 *  Created on: 15 Apr 2020
 *      Author: titan
 */
#include <stdio.h>

int invertNum(int num);
int countDig(int num);
int power(int a, int b);
void contNum(int num, int num1);
void luckyTicMsk(int num);
void piphagoras();

int main() {
	int inv = 123456789;
	printf("%d <|> %d\n", inv, invertNum(inv));

	contNum(12345789, 0);

	piphagoras();

	printf("<|> %d\n", countDig(1231237));

	luckyTicMsk(123051);
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

void luckyTicMsk(int num) {
	int part2 = num % power(10, countDig(num)/2);
	int part1 = num / power(10, countDig(num)/2);
	int res2 = 0;
	int res1 = 0;

	if (countDig(num) % 2) {
		part1 /= 10;
	}

	while (part2) {
		res2 = res2 + part2 % 10;
		part2 /= 10;
	}
	for (; part1; part1 /= 10) {
		res1 = res1 + part1 % 10;
	}

	if (res1 == res2) {
		printf("%d == %d || Lucky ticket!\n", res1, res2);
	} else {
		printf("%d != %d || Not so lucky, sorry...\n", res1, res2);
	}
}


void contNum(int num, int num1){
	int num_orig = num;
	int numDiv = 0;
	for (; num; num /= 10) {
		(num1 == 0) ? (numDiv = num % 10) : (numDiv = num % power(10, countDig(num1)));
		if (numDiv == num1) {
			printf("Number %d contains %d.\n", num_orig, num1);
			break;
		}
	}
	if (numDiv != num1) {
			printf("There is no number %d inside number %d.\n", num1, num_orig);
	}
}


int invertNum(int num){
	int res = 0;
	for (; num; num /= 10) {
		res *= 10;
		res += num % 10;
	}
	return res;
}

int countDig(int num) {
	int res = 0;
	for (; num; num /= 10) {
		res += 1;
	}
	return res;
}

int power(int a, int b) {
	int i;
	int pow = 1;
	for (i = 0; i < b; i++) {
		pow *= a;
	}
	return pow;
}

