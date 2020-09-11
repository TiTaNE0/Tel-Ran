// паттерн - разработанный метод языка
// итератор - патерн перебора

const str = 'javascript';

for(let c of str) {
    console.log(c);
}

const set = new Set();
set.add(5);
set.add('Five');
set.add('5');
set.add('Five');

for(let x of set) {
    console.log(x);
}
console.log(set.size);
console.log(set.has(5));
console.log(set.delete('Five'));

for(let x of set) {
    console.log(x);
}


const map = new Map();
map.set(1, 'Peter');
map.set('two', 'Tigran');
map.set(true, 'Tigran 2');
console.log(map.get(3));

for(let x of map) {
    console.log(`${x[0]} : ${x[1]}`);
}
console.log('=================================');
console.log(map.size);
console.log(map.has(true));

console.log('=================================')
let res = map.values();
for (let x of res) {
    console.log(x);
}

res = map.keys();
for (let x of res) {
    console.log(x);
}

console.log('=================================')

let arr = Array.from(res);
console.log(arr);


const person = {
    fName: 'Peter',
    lName: 'Jackson',
    age: 34
}
res = Object.keys(person);
console.log(res);

console.log('==========');
res = Object.values(person);
console.log(res);
