/*
 * hw.c
 *
 *  Created on: 17 Apr 2020
 *      Author: titan
 */
#include<stdio.h>
void printArr(int arr[], int size);

void printReverseArray(int arr[], int size);


int main () {
	int arr2[] = {2, 4, 6, 8, 10};

	printArr(arr2, 5);
	printReverseArray(arr2, 5);

	return 0;

}


void printArr(int arr[], int size) {
	int i;
	printf("{ ");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf(" }\n");

}

void printReverseArray(int arr[], int size) {
	int i;
	printf("{ ");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[size-i-1]);
	}
	printf(" }\n");

}
