let x = getRandomInRange(1, 100);
console.log(x);

arr = getRandomArr(10);
console.log(arr);

bubbleSort(arr);
console.log(arr);

console.log(binarySearch(arr, 15));

function binarySearch(array, value) {
    let left = 0;
    let right = array.length - 1;
    while (left <= right) {
        const mid = Math.floor((left + right) / 2);
        if (value === array[mid]) {
            return mid;
        }
        if (value < array[mid]) {
            right = mid - 1;
        }
        if (value > array[mid]) {
            lefyt = mid + 1;
        }
        return -1;
    }
}

function bubbleSort(arr) {
    for (let i = 0; i < arr.length - 1; i++) {
        for (let j = 0; j < arr.length - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
    return arr;
}

function getRandomArr(len) {
    let arr = [];
    for (let i = 0; i < len; i++) {
        arr[i] = getRandomInRange(10, 99);
    }
    return arr;
}

function getRandomInRange(min, max) {
    return Math.floor(Math.random() * (max - min + 1)) + min;
}
