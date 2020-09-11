/*
 * array.c
 *
 *  Created on: 21 Apr 2020
 *      Author: titan
 */
#include<stdio.h>
void printArray(int arr[], int size);
void pow2(int a);
void pow2Array(int arr1[], int size);

int main() {

	int x = 10;
	printf("before function %d\n", x);
	pow2(x);
	printf("after function %d\n", x);

	int arr[] = {10, 20, 30};
	printf("array before function\n");
	printArray(arr,3);
	pow2Array(arr, 3);
	printf("array after function\n");
	printArray(arr,3);


	return 0;
}

void pow2Array(int arr1[], int size) {
	arr1[0] = arr1[0] * arr1[0];
	printf("array into function\n");
	printArray(arr1, size);
}

void pow2(int a) {
	a = a * a;
	printf("into function %d\n", a);
}

void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("=======================\n");
}
