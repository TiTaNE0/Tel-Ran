let res = plus('10', 12)
console.log(res);

function plus(a = 2, b = 4) {
 if (typeof a !== 'number' || typeof b !== 'number') {
     return 'Please enter valid number'
 }
    return a + b;
}

function pow(x, y) {
    let res = 1;
    while (y != 0) {
        res *= x;
        y--;
    }
    return res;
}