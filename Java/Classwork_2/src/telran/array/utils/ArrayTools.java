package telran.array.utils;

public class ArrayTools {

	
	public static void fillArray(int[] arr, int min, int max) {
		for (int i = 0; i < arr.length; i++) {
			arr[i] = (int) (min + Math.random() * (max + 1 - min));
			}
	}
	
	public static int sumArray(int[] arr) {
		int res = 0;
		for (int i = 0; i < arr.length; i++) {
			res += arr[i];
		}
		return res;
	}
	
	public static double avg(int[] arr) {
			return 1. * sumArray(arr) / arr.length;
	}
	
	public static void printArray(int[] arr) {
		for (int i = 0; i < arr.length; i++) {
			System.out.print(arr[i] + "\t");
		}
		System.out.println("\n===========");
	}

	public static void bubbleSort(int arr[]) {
		while (bubble(arr));
	}
	

	private static boolean bubble(int[] arr) {
		boolean flag = false;
		int i;
		for (i = 0; i < arr.length-1; i++) {
			if (arr[i] > arr[i+1]) {
				arr[i] = arr[i] + arr[i + 1];
				arr[i + 1] = arr[i] - arr[i + 1];
				arr[i] = arr[i] - arr[i + 1];
				flag = true;
			}
		}
		return flag;
	}
	
	
	public static int binarySearch(int arr[], int value) {
		int l = 0;
		int r = arr.length - 1;
		while (l <= r) {
			int mid = (l + r) / 2;
			if (value == arr[mid]) {
				return mid;
			}
			if (value < arr[mid]) {
				r = mid - 1;
			}
			if (value  > arr[mid]) {
				l = mid + 1;
			}
		}
		return -1;
	}
	
	public static void selectionSort(int arr[]) {
	int min;
	int index = 0;
	int i, j;
	for (i = 0; i < arr.length - 1; i++) {
		min = arr[i];
		for (j = i; j < arr.length; j++) {
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
	System.out.println(arr);
}
}