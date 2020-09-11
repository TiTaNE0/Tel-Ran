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
void bubbleSort(int arr[], int size);
void bubbleSort1(int arr[], int size);
int bubble(int arr[], int size);
int binarySearch(int arr[], int size, int value);

int main() {

	printf("%d\n", RAND_MAX);

	int size = 10;
	int arr[size];
	fillArr(arr, size, 10, 99);

	printArr(arr, size);

//	bubbleSort(arr, size);

	printArr(arr, size);

	int index = binarySearch(arr, size, 12);
	printf("%d", index);
	return 0;

}


int binarySearch(int arr[], int size, int value) {
	int l = 0;
	int r = size - 1;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (value == arr[mid]) {
			return mid;
		}
		if (value < arr[mid]) {
			r = mid - 1;
		}
		if (value > arr[mid]) {
			l = mid + 1;
		}
	}
	return -1;
}

int bubble(int arr[], int size) {
	int flag = 0;
	int j;
	for (j = 0; j < size - 1; j++) {
		if (arr[j] > arr[j + 1]) {
			arr[j] = arr[j] + arr[j + 1];
			arr[j + 1] = arr[j] - arr[j + 1];
			arr[j] = arr[j] - arr[j + 1];
			flag = 1;
		}
	}
	return flag;
}


void bubbleSort(int arr[], int size) {
	int i, j;
	for (i = 0; i < size - i - 1; i++) {
		for (j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				arr[j] = arr[j] + arr[j + 1];
				arr[j + 1] = arr[j] - arr[j + 1];
				arr[j] = arr[j] - arr[j + 1];
			}
		}
	}
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

