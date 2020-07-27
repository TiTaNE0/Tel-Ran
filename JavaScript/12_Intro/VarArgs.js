let res = sum(3, 4, 5, 6, 7, 8,9);
console.log(res);


function sum(a, b = 0, ...arr) {
    let z = a + b;
    for (let i = 0; i < arr.length; i++) {
        z += arr[i];
    }
    return z;
}

function plus(a, b) {
    return a + b;
}

function f() {

}