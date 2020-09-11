/*
 * loops.c
 *
 *  Created on: Mar 31, 2020
 *      Author: User
 *      HW 1) make it work with negative power
 *			2) make "* printer" w/o j;
 */

#include<stdio.h>
void counter();
void even(int min, int max);
float powXY(float x, int y);
void printStars(int n);

int main(){

//	float pow = powXY(2, 5);
//	printf("pow = %.2f", pow );
	printStars(60);
	return 0;
}

void printStars(int n){
	int i = 1;
	int j = 1;
	while (i <= n){
		if (j < 10){
			printf("*");
			j++;
		} else {
			printf("*\n");
			j = 1;
		}
		i++;
	}
	printf("\n");

}

float powXY(float x, int y){
	float res = 1;
	int i = 1;
	while (i <= y){
		res = res * x;
		i++;
		printf("%.2f\n", res);
	}
	return res;
}


void even(int min, int max){
	int num = min;
	while(num <= max){
		if (num % 2 == 0) {
			printf("%d\n", num);
			}
			num++;
	}
}

void counter(){
	int counter = 10;
	while (counter > 0){
		printf("%d\n", counter);
		counter--;
	}
	printf("GO!");
}
