/*
 * null_div.c
 *
 *  Created on: Mar 7, 2020
 *      Author: User
 */
#include<stdio.h>

void divIntOneOnNull();
void divFloatOneOnNull();
void divIntNullOnNull();
void divFloatNullonNull();

int main() {
	divIntOneOnNull();
	divFloatOneOnNull();
	divIntNullOnNull();
	divFloatNullonNull();

	return 0;
}

void divIntOneOnNull() {
	int a = 1;
	printf("Dividing integer %d on ", a);

	int b = 0;
	printf("integer %d to be like ", b);
		if (b==0)
		{
			printf("... Division by zero error\n");
		}
		else
		{
			int c = a / b;
			printf("%d\n", c);
		}
	}

void divFloatOneOnNull() {
	float a = 1.;
	printf("Dividing float %f on ", a);

	int b = 0;
	printf("integer %d to be like ", b);

	float c = a / b;
	printf("%f\n", c);

}

void divIntNullOnNull() {
	int a = 0;
	printf("Dividing integer %d on ", a);

	int b = 0;
	printf("integer %d to be like ", b);
	if (b==0)
	{
		printf("... Division by zero error\n");
	}
	else
	{
	int c = a / b;
	printf("%d\n", c);
	}
}

void divFloatNullonNull() {
	float a = 0.;
	printf("Dividing float %f on ", a);

	int b = 0;
	printf("integer %d to be like ", b);

	float c = a / b;
	printf("%f\n", c);

}
