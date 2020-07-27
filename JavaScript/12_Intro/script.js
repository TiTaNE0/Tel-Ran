function plusFunc(a, b) {
    return a + b;
}

function minusFunc(a, b) {
    return a - b;
}

function comb(a, b, plus, minus) {
    if (a > b) {
        return minus(a, b);
    } else {
        return plus (a, b);
    }
}

let aVar = 13;
let bVar = 12;

console.log(comb(aVar, bVar, plusFunc, minusFunc));