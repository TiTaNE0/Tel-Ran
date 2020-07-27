let arr = [1, 2, 3, 9];
arr.push(20);
console.log(arr);

let res = arr.pop();
console.log(arr);
console.log(res);

res = arr.shift(arr);
console.log(arr);
console.log(res);

arr.unshift(-1);
console.log(arr);

res = arr.slice(1, 3);
console.log(res);
console.log(arr);

arr.splice(arr.length, 0, 50);
console.log(arr);


