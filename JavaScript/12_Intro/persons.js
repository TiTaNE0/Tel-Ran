let persons = [];
persons[0] = new Person('Luke', 'Skywalker', 19);
persons[1] = new Person('Dart', 'Weider');
persons[2] = new Person('Leia', 'Organa');
persons[3] = new Person('Han', 'Solo', 25);
persons[4] = new Person('Mace', 'Windu', 35);


function Person(firstName, lastName, age) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.age = age;
}
let sum = size = 0;


for (let i = 0; i < persons.length; i++) {
    if (persons[i].age) {
        sum += persons[i].age;
        console.log(persons[i].age);
        size++;
    }
}
//
 let avgAge = sum / size;
// alert(`Average age is ${Math.round(avgAge)} of ${size} persons`);
console.log(persons);