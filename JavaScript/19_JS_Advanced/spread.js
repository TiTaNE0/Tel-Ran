// spread оператор разворота (
console.log('для массива (высыпать элементы массива)');
let arr = [2, 3, 5];
const arr1 = [7, 11, 13];

let newarr1 = [...arr];
console.log(arr === newarr1);

newarr1 = arr.concat(arr1);
newarr1 = [...arr, ...arr1];
console.log(newarr1);


console.log('======с объектами======');
const obj1 = {
    fName: 'Peter',
    lName: 'Jackson',
};

const obj2 = {
    age: 34,
    fullName: function () {
        return `${this.fName} ${this.lName}`
    }
}
const person = {...obj1, ...obj2};
console.log(person);

const baseObj = {
    hobby: 'chess'
}

const job = {
    company: "Motorola",
    position: 'Developer'
}

console.log('==========как раньше==========');
let peter = Object.assign({}, person, baseObj, job, {age: 37});
console.log(peter);
console.log(person);
peter = Object.assign({}, person);


console.log('==========как сейчас со spread==========');
let clonePerson = {...person};
console.log(clonePerson);
peter = {...person, ...baseObj, ...job, age: 37, gender:'Male'};
console.log(peter);
const codes = {
    "+1": "USA",
    "+972": "Israel",
    "+7" : "Russia",
    "+38" : "Ukraine",
    "+375" : "Belarus"
}

for (let code in codes) {
    console.log(`${code} -> ${codes[code]}`);
}
