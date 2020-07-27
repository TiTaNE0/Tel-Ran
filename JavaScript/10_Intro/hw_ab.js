let a = 5;
let b = 10;
let res = solution(a, b);
console.log(res);

function solution(a, b) {
    a = +a;
    b = +b;
    if (a !== b) {
        return b/a;
    }
    if (a  === 0 && b !==0) {
        return 'No solution'
    }
    if (a === 0 && b === 0) {
        return 'Solution is any number';
    }
}
