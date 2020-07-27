let f = 30; // ввести количество

console.time()
let a = fibonacciArr(f);
console.log(a);
console.timeEnd();

console.time()
printArr(addFibToArr(f)); // через рекурсивную функцию
console.timeEnd();

function fibonacciArr(N) {
    let n1 = 1;
    let n2 = 1;
    let arr = [n1, n2];
    for (let i = 2; i < N; i++) {
        n1 = n1 + n2; //
        n2 = n1 - n2; // обмен переменных
        n1 = n1 - n2; //
        n2 = n1 + n2; // сумма двух предыдущих
        arr[i] = n2;
    }
    return arr;
}

function fiboRec(N) {
    if (N <= 1) return 1;
    return fiboRec(N - 1) + fiboRec(N - 2);
}

function addFibToArr(N) {
    let arr = [];
    for (let i = 0; i < N; i++) {
        arr[i] = fiboRec(i);
    }
    return arr;
}

function printArr(arr) {
    let array = '[';
    for (let i = 0; i <= arr.length-1; i++) {
        array = array + ` ${arr[i]}`;
    }
    array = array + ' ]';
    console.log(array);
}