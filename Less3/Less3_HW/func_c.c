/*
 * func_c.c
 *
 *  Created on: Mar 5, 2020
 *      Author: User
 */
#include<stdio.h>

void func1();
void func2();
void func3();
void func4();
void func5();
void func6();

int main(){
	printf("Function 6 Call\n");
	func6();
	func1();
	func2();
	return 0;
}

void func6(){
	printf("No Function Call from Function 6\n");
}
void func1(){
	printf("Function 4 Call\n");
	func4();
}

void func4(){
	printf("Function 5 Call\n");
	func5();
}

void func5(){
	printf("Function 6 Call\n");
	func6();
}

void func2(){
	printf("Function 6 Call\n");
	func6();
}


