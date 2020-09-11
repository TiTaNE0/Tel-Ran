const person = {
    fName: 'Tina',
    lName: 'Farmer',
    age: 28,

    fName: 'Lou',
    lName: 'Vuitton',
    age: 67,

    fName: 'Megan', // наполняю в ручную для удобства проверки
    lName: 'Ryan',
    age: 34,

    fName: 'Bill',
    lName: 'Thornton',
    age: 27,

    fName: 'Samuel',
    lName: 'Jackson',
    age: 64,

    fName: 'Vincent',
    lName: 'Vega',
    age: 42,

    fullName: function () {
        return `${this.fName} ${this.lName}`;
    }
}

console.log(typeof person);
const personJSON = JSON.stringify(person);
console.log(typeof personJSON);
console.log(person);
console.log(personJSON);

const personObj = JSON.parse(personJSON);
console.log(personObj);


