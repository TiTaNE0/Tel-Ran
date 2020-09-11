let persons = [];
const quantity = 5;

for (let i = 0; i < quantity; i++) {
    let info = prompt('Enter first name, last name, age');
    /*    console.log(info);*/
    let arr = info.split(',');
    /*    console.log(arr);*/
    persons.push(new Person(arr[0].trim(), arr[1].trim(), arr[2]));

}
averageAge(persons);

function Person(firstName, lastName, age) {
    this.firstName = firstName;
    this.lastName = lastName;
    if (age) {
        this.age = +age;
    }
}


function averageAge(persons) {
    let sum = 0;
    let size = 0;
    let ages = [];
    for (let i = 0; i < persons.length; i++) {
        if (persons[i].age) {
            ages.push(persons[i].age);
            sum += persons[i].age;
            size++;
        }
    }
    let avgAge = sum / size;
    console.log(`Average age: ${avgAge} size: ${size}`);
    console.log(`Min age: ${Math.min(...ages)}`);
    console.log(`Max age: ${Math.max(...ages)}`);
}