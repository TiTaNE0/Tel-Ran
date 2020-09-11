/*
 * array.c
 *
 *  Created on: 21 Apr 2020
 *      Author: titan
 */
#include<stdio.h>
void printArray(int arr[], int size);

int main() {
	//Option I:
	int size = 10;
	int arr[size];
	arr[5] = 65;
	arr[8] = arr[5] * 2;
	printf("%d\n", arr[8]);

	int i;
//	for (i = 0; i < 10; i++) {
//		printf("arr[%d] = %d\n", i, arr[i]);
//	}

	//
	printArray(arr, 10);

	// Option 2
	int arr1[8] = {20000, 15000};
	printArray(arr1, 8);

	//Option 3
	int arr2[] = {2, 4, 6, 8, 10};
	printArray(arr2, 5);

	return 0;
}


void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}

}
