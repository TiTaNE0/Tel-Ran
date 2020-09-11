const numbers = [5, 9, 11, 2, 7, 13, 2];

console.log('===========SLICE===========')
const arr = numbers.slice(1, 4); // не меняет массив
console.log(arr);
console.log(numbers);
console.log('===========SPLICE===========')
numbers.splice(numbers.length, 0, 520) // меняет массив и ничего не меняет
console.log(numbers);