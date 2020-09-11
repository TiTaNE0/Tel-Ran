const arr = ['one', 'two', 'three', 'three', 'three', 'six'];

// let res = arr.indexOf('three');
// console.log(res);
// res = arr.indexOf('three', res + 1);
// console.log(res);
console.log('=====indexes of value=======')
searchAllPositions(arr, 'three');
//
console.log('===Includes=value===');
res = arr.includes('two');
console.log(res);
//
console.log('===Find=Index===');
res = arr.findIndex((item, index) => item.length === 3 && index > 2);
console.log(res);
console.log('=====Array=of=objects======');
const persons = [
    {
        name: 'Peter',
        age: 23
    },
    {
        name: 'John',
        age: 28
    },
    {
        name: 'Tigran',
        age: 31
    }
];

res = persons.findIndex(item => item.age > 30);
console.log(persons[res]);

console.log('=====For=Each======');
persons.forEach(item => console.log(`${item.name.toUpperCase()} is ${item.age} age old.`));

console.log('=======Filter=======');
res = persons.filter(item => item.age < 30);
console.log(res);

console.log('=======M=A=P=======');
res = persons.map(item => `${item.name} - ${item.age}`);
console.log(res);

console.log('==M=A=P==for=HTML==');
res = persons.map(item => `<li>${item.name} - ${item.age}</li>>`);
console.log(res);


console.log('===R=e=d=u=c=e===')
const numbers = [5, 9, 11, 2, 7, 13, 2];
res = numbers.reduce((accum, item) => accum + item);
console.log(res);
console.log('===========');

console.log('===R=e=d=u=c=e===')
res = persons.reduce((accum, item) => accum + item.age, 0);
console.log(res / persons.length);
console.log('===========');

console.log('=====S=O=R=T=====')
numbers.sort((a, b ) => a - b);
console.log(numbers);

console.log('=====Pere-S=O=R=T=====')
numbers.sort((a, b ) => Math.random() - 0.5);
console.log(numbers);

console.log('=====S=O=R=T=====')
persons.sort((p1, p2 ) => p1.name - p2.name);
console.log(persons);
persons.fill({name: 'Anon', age: NaN}, 1, 3);
console.log(persons);

const array =  new  Array(10).fill(10);
console.log(array);

function searchAllPositions(arr, val) {
    let index = arr.indexOf(val);
    while (index !== -1) {
        console.log(index);
        index = arr.indexOf(val, index + 1);
    }
//    indexes.pop(arr.indexOf());
}