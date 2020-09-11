let persons = [];
let dataPers = [];
let records = [];

// persons[0] = new Person('Vasili', 'Ivanov',35);
// persons[1] = new Person('Igor', 'Petrov', 39);
// persons[2] = new Person('Andrey','Lansky',48);
// persons[3] = new Person('Elena','Vasilyeva',26);
// persons[4] = new Person('Anna', 'Dovidova', 29);
/*
 Vasili, Ivanov,35
 Igor, Petrov, 39
 Andrey , Lansky,48
 Elena,Vasilyeva,26
 Anna, Dovidova, 29
*/

appendPerson(5);

console.log(oldestPerson());
console.log(youngestPerson())
console.log(`Average age of persons is ${getAvgAge()}`);
// console.log(dataPers);
// console.log(records);
// console.log(persons);

function appendPerson(quantity) {
    for (let i = 0; i < quantity; i++) {
        dataPers[i] = prompt('Please, enter First, Last names and age separated by comma');
        records[i] = dataPers[i].split(',');
        for (let j = 0; j < quantity; j++) {
            let str = records[i];
            persons[i] = new Person(str[0].trim(), str[1].trim(), Number(str[2]));
        }
    }
}

function youngestPerson() {
    let minAge = persons[0].age;
    let message;
    for (let person in persons) {
        if (persons[person].age <= minAge) {
            minAge = persons[person].age;
            message = `Youngest person is ${persons[person].firstName} ${persons[person].lastName} who is ${minAge} age old.`
        }
    }
    return message;
}

function oldestPerson() {
    let maxAge = persons[0].age;
    let message;
    for (let person in persons) {
        if (persons[person].age >= maxAge) {
            maxAge = persons[person].age;
            message = `Oldest person is ${persons[person].firstName} ${persons[person].lastName} who is ${maxAge} age old.`
        }
    }
    return message;
}

function getAvgAge() {
    let person = 0;
    let sumAge = 0;
    let q = 0;
    for (person in persons) {
        /*
          забыл сделать проверку наличия возраста у персоны
                  if (persons[i].age) {
         */
         sumAge += persons[person].age;
         q++;
    }
    let avgAge = sumAge / q;
    return avgAge;
}

function Person(firstName, lastName, age) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.age = age;
}
