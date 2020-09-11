/*
 * sortArray.c
 *
 *  Created on: 1 May 2020
 *      Author: titan
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printArr(int arr[], int size);
void fillArr(int arr[], int size, int min, int max);
void selectionSort(int arr[], int size);
void selectionSort1(int arr[], int size);
int indexMin(int arr[], int start, int size);

int main() {

	printf("%d\n", RAND_MAX);

	int size = 10;
	int arr[size];
	fillArr(arr, size, 10, 99);

	printArr(arr, size);

	selectionSort(arr, size);

//	printArr(arr, size);

	return 0;

}

void selectionSort1(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		int index = indexMin(arr, i, size);
		if (i != index) {
			int temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
		}
	}

}

int indexMin(int arr[], int start, int size) {
	int i;
	int index = start;
	for (i = start + 1; i < size; i++) {
		if (arr[index] > arr[i]) {
			i = index;
		}
	}
	return index;
}

void selectionSort(int arr[], int size) {
	int min;
	int index = 0;
	int i, j;
	for (i = 0; i < size - 1; i++) {
		min = arr[i];
		for (j = i; j < size; j++) {
			if (arr[j] < min) {
				min = arr[j];
				index = j;
			}
		}
		if (arr[i] > arr[index]) {
			int temp = arr[i];
			arr[i] = arr[index];
			arr[index] = temp;
		}
	}
	printArr(arr, size);
}

void fillArr(int arr[], int size, int min, int max) {
	srand(time(NULL));
	int i;
	for (i = 0; i < size; i++) {
		arr[i] = min + rand() % (max + 1 - min);
	}
}

void printArr(int arr[], int size) {
	int i;
	printf("{ ");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf(" }\n");
}
