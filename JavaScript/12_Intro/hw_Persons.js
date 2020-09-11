let persons = [];
const quantity = 5;


for (let i = 0; i < quantity; i++) {
    let info = prompt('Enter First, Last name ang age');
    console.log(info);
    let arr = info.split(',');
    console.log(arr);
    persons.push(new Person(arr[0].trim(), arr[1].trim(), arr[2]));
    console.log(persons[i]);
}
persons.firstName = arr[0]
averageAge(persons);

function Person(firstName, lastName, age) {
    this.firstName = firstName;
    this.lastName = lastName;
    if(age) {
        this.age = +age; // перевод строки в число
    }
}

function averageAge(persons) {
    let sum = 0;
    let size = 0;
    let ages = [];
    for (let i = 0; i < persons.length; i++) {
        if (persons[i].age) {
            ages.push((persons[i].age));
            sum += persons[i].age;
            size++;
        }
    }
    let avgAge = sum / size;
    console.log(`Average age: ${avgAge} `);
    console.log(`${Math.min(...ages)}`);
    console.log(`${Math.max(...ages)}`);
}