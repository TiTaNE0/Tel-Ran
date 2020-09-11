/*
 * switchCase.c
 *
 *  Created on: Mar 28, 2020
 *      Author: User
 *    1) HW bank leumi work hours
 *    2) 4 brigades: John, 		Peter, 		Tigran, 	Maria
 *    				1, 5, 9,   2, 6, 10,   3, 7, 11,  4, 8, 12
 *
 */

#include<stdio.h>
void fan(int mode);
void fan1(int mode);
void fan2(int mode);
float calculator(float a, float b, int oper);

int main(){
	fan(2);
	fan1(2);
	fan2(2);
	float result = calculator(3, 5, 10);
	printf("result = %.0f\n", result);
	return 0;
}

float calculator(float a, float b, int oper) {
	float res = 0;
	switch (oper) {
	case 1:
		res = a + b;
		break;
	case 2:
		res = a - b;
	case 3:
		res = a * b;
	case 4:
		res = a / b;
	default:
		printf("WRONG OPERATION\n");
	}
	return res;
}

void fan(int mode){
	if (mode == 0) {
		printf("off\n");
	} else {
		if (mode == 1){
			printf("slow\n");
		} else {
			if (mode == 2) {
				printf("middle\n");
			} else {
				if (mode == 3) {
					printf("fast\n");
				} else {
					printf("Wrong mode\n");
				}
			}
		}
	}
}
void fan1(int mode){
	if (mode == 0) {
		printf("OFF\n");
	}
	if (mode == 1) {
		printf("Slow\n");
	}
	if (mode == 2) {
		printf("Middle\n");
	}
	if (mode == 3) {
		printf("Fast\n");
	}
	if (mode < 0 || mode > 3) {
		printf("WRONG MODE\n");
	}
}

void fan2(int mode){
	switch(mode){
	case 0: printf("off\n");
		break;
	case 1:
		printf("slow\n");
		break;
	case 2:
		printf("middle\n");
		break;
	case 3:
		printf("fast\n");
		break;
	default:
		printf("wrong mode\n");
	}
//	printf("next code\n");
}
