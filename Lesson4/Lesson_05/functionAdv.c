/*
 * functionAdv.c
 *
 *  Created on: Mar 10, 2020
 *      Author: User
 */

#include<stdio.h>
float getPi();
float getLength(float radius);
float getG();
float power(float mass);
float getHg(float);
void fakeFunc();

int main() {

	float pi = getPi();
	printf("Pi = %f\n", pi);

	float length = getLength(10);
	printf("length = %.2f\n", length);

	length = getLength(20);
	printf("lenght = %.2f\n", length);

	printf("lenght = %.2f\n", getLength(30));

	printf("Gravity = %.2f\n", power(100));

	float hg = getHg(12);
	printf("Heigth = %.2f\n", hg);

	fakeFunc(124);
	fakeFunc(8475);
	fakeFunc(5);

	return 0;
}

void fakeFunc(int num) {
	int res = num / 10;
	printf("%d\n", res);
}

float getHg(float time) {
	float res = getG() * time * time / 2;
	return res;
}

float power(float mass) {
	float res = mass * getG();
	return res;
}

float getG() {
	return 9.8;
}

float getLength(float radius) {
	float res = 2 * getPi() * radius;
	return res;
}

float getPi() {
	return 3.1415926;
}
