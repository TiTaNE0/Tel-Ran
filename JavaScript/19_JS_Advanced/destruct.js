const arr = [9, 2, 4, 7, 4, 9, 7, 1];
// деструктурирующее присваивание - destructurisation
//

// для массивов
// let a = arr[0];
// let b = arr[1];
let [a, b] = arr;
console.log(a);
console.log(b);

// для объектов

const person = {
    fName: 'Peter',
    lName: 'Jackson',
    age: 34
};
//let fName = person.fName;
//let age = person.age;

let {fName:c, age:d, ...rest} = person;

// console.log(fName);
// console.log(age);

console.log(c);
console.log(d);

console.log(rest);


