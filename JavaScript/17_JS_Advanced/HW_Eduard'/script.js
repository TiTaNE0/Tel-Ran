const firstName = document.getElementById('firstName');
const lastName = document.getElementById('lastName');
const age = document.getElementById('age');
const add = document.getElementById('add');
const showPersons = document.getElementById('showPersons');
const showStats = document.getElementById('showStats');
const persons = document.getElementById('persons');
const personsList = [];


showStats.onclick = () => {
    let min = personsList[0].age;
    let max = personsList[0].age;
    let sum = 0;
    for (let i = 0; i< personsList.length; i++) {
        sum += personsList[i];
        if (personsList[i].age < min) {
            min = personsList[i].age;
        }
        if (personsList[i].age > max) {
            max = personsList[i].age;
        }

        let p = document.createElement('p');
        let text = document.createTextNode(`Min ${min}`);
        p.appendChild(text);
        stats.appendChild(p);
        p = document.createElement('p');
        text = document.createTextNode(`Max ${max}`);
        p.appendChild(text);
        stats.appendChild(p);
        p = document.createElement('p');
        text = document.createTextNode(`Min ${avg}`);
        p.appendChild(text);
        stats.appendChild(p);

        // stats.appendChild(document.createElement('p').appendChild(document.createTextNode(`Min ${min}`)));
        // stats.appendChild(document.createElement('p').appendChild(document.createTextNode(`Max ${max}`)));
        // stats.appendChild(document.createElement('p').appendChild(document.createTextNode(`Avg ${sum / personsList.length}`)));
    }

add.onclick = () => {
    const person = new Person((firstName.value.trim(), lastName.value.trim(), age.value));
    if (!person.isEmpty()) {
        personsList.push(person);
    }
    console.log(personsList);
    firstName.value = lastName.value = age.value = '';
}

showPersons.onclick = () => {
    persons.innerHTML = '';
    persons.forEach(item => {
        const li = document.createElement('li');
        const text = document.createTextNode(`First Name: ${item.firstName}, Last Name: ${item.lastName}, age: ${item.age}`);
        li.appendChild(text);
        persons.appendChild(li);
    });
}

function Person(firstName, lastName, age) {
    this.firstName = firstName;
    this.lastName = lastName;
    this.age = age;
    age = '' + age;
    this.isEmpty = function () {
        return !(firstName && lastName && age);
    }
}

