/*
 * arrayTools.c
 *
 *  Created on: 24 Apr 2020
 *      Author: titan
 */


#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void printArr(int arr[], int size);
void fillArr(int arr[], int size, int min, int max);
void reverseArray(int arr[], int size);
int search(int arr[], int size, int value);
int maxArray(int arr[], int size);
int maxIndex(int arr[], int size);
int sumArray(int arr[], int size);
float arrayAvg(int arr[], int size);


int main () {

	printf("%d\n", RAND_MAX);

	int size = 10;
	int arr[size];

	fillArr(arr, size, 10, 99);

	printArr(arr, size);

	int res = search(arr, size, 55);
	printf("res = %d\n", res);
	if (res >= 0) {
		printf("arr[%d] = %d", res, arr[res]);
	}

	res = maxArray(arr, size);
	printf("max = %d\n", res);

	res = maxIndex(arr, size);
	printf("max Index = %d\n", res);

	res = sumArray(arr, size);
	printf("Array sum is %d\n", res);

	float avg = arrayAvg(arr, size);
	printf("Array average number is %.2f\n", avg);

	void reverseArray(arr, size);


	return 0;
}

void reverseArray(int arr[], int size) {
	int i;
	for (i = 0; i < size/2; i++) {
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}

}

int sumArray(int arr[], int size) {
	int i;
	int sum = 0;
	for (i = 0; i < size; i++) {
		sum = sum + arr[i];
	}
	return sum;
}


float arrayAvg(int arr[], int size) {
//	float avg = (float)sumArray(arr, size) / size;
//	return avg;
	int i;
	float avg = 0;
	for (i = 0; i < size; i++) {
		avg = avg + arr[i]*1.0/size;
	}
	return avg;
}



int maxIndex(int arr[], int size){
	int i;
	int index = 0;
	for (i = 1; i < size; i++) {
		if (arr[index] < arr[i]) {
			index = i;
		}
	}
	return index;
//	int max = maxArray(arr, size);
//	return search(arr, size, max);
}

int maxArray(int arr[], int size) {
	int i;
	int max = arr[0];
	for (i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}


void fillArr(int arr[], int size, int min, int max) {
	srand(time(NULL));
	int i;
	for (i = 0; i < size; i++) {
		arr[i] = min + rand() % (max + 1 - min);
	}
}


int search(int arr[], int size, int value) {
	int i;
	for (i = 0; i < size; i++) {
		if (arr[i] == value) {
			return i;
		}
	}
return -1;
}

void printArr(int arr[], int size) {
	int i;
	printf("{ ");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf(" }\n");
}
