let persons = [];
personData = 'Fedor, Ivanov,23';

let arr = personData.split(',');

function getString(array) {
    for (let i = 0; i < 3; i++) {
//        arr[i] =
        arr[i] = arr[i].trim();
        return arr[i];
    }
}

for (let i = 0; i < 5; i++) {
    persons[i] = new Person(getString(arr));


    // let personData = 'Fedor,Ivanov,23';//prompt('Введите через зяпятую Имя, Фамилию, возраст человека:');
    // let
    // for (j = 0; j < 3; j++) {
    //     persons[j] = new Person();

}

for (let record in persons) {
    console.log(arr[record]);
    console.log(persons[record]);
}

function Person(firstName, lastName, age) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.age = age;
}