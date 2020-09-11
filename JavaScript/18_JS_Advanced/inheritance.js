
// прототипное наследование

const human = {
    hobby: 'reading'
};

const john = {
    firstName: 'John',
    lastName: 'Smith'

};


console.log(john.firstName);
console.log(john.lastName);
console.log(john.hobby);

// через специальное поле __proto__

john.__proto__ = human;
console.log(john.hobby);
