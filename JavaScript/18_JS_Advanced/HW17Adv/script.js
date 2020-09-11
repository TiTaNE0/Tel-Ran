/* first NAme, Lastname, age и кнопка ADD
    кнопка showlist - список персон
    и get stats выдает min age, max age, avg age */

const persons = [];
//     {
//         fName: 'Tina',
//         lName: 'Farmer',
//         age: 28
//     },
//     {
//         fName: 'Lou',
//         lName: 'Vuitton',
//         age: 67
//     },
//     {
//         fName: 'Megan', // наполняю в ручную для удобства проверки
//         lName: 'Ryan',
//         age: 34
//     },
//     {
//         fName: 'Bill',
//         lName: 'Thornton',
//         age: 27
//     },
//     {
//         fName: 'Samuel',
//         lName: 'Jackson',
//         age: 64
//     },
//     {
//         fName: 'Vincent',
//         lName: 'Vega',
//         age: 42
//     },
// ];
const stats = [];
const fNameItem = document.getElementById('firstName');
const lNameItem = document.getElementById('lastName');
const ageItem = document.getElementById('age');
const addItem = document.getElementById('addItem');
const divList = document.getElementById('divList');
const divStat = document.getElementById('divStat');
const headerDiv = document.getElementById('head');


addItem.onclick = function () {
    addPerson();
    getList();
    getStats();
}

function addPerson() { // добавляет персону в массив и чистит поле
    const fName = fNameItem.value.trim();
    const lName = lNameItem.value.trim();
    const age = ageItem.value.trim() * 1;
    if (fName && lName && age && age >= 0) { // проверяю заполненность всех полей
        persons.push({fName: fName, lName: lName, age: age});
        fNameItem.value = lNameItem.value = ageItem.value = '';
        console.log(persons);
        addButtons();
    } else {
        /*
        if (headerDiv.childNodes) {
            headerDiv.removeChild(headerDiv.childNodes[2]);
        }
       не могу сделать проверку и удалить созданное предупреждение (или оставить его, нo не создавать новые)
         */
        const errEmptyFields = document.createElement('p');
        const errTextNode = document.createTextNode('Please fill all fields carefully');
        errEmptyFields.classList.add("alert", "alert-warning");
        headerDiv.appendChild(errEmptyFields);
        errEmptyFields.appendChild(errTextNode);
        console.log('Fill error');
    }
}


function addButtons() { // создаёт две кнопки с действиями по вызову списка и таблицы
    if (divStat.hasChildNodes()) {
        divStat.removeChild(divStat.firstElementChild);
    }
    // if (divList.hasChildNodes()) {
    //     divList.removeChild(divList.firstElementChild);
    // }
    // const buttonList = document.createElement('button');
    // let textNode = document.createTextNode('Show list')
    // buttonList.appendChild(textNode);
    const buttonStat = document.createElement('button');
    let textNode = document.createTextNode('Show stats');
    buttonStat.appendChild(textNode);
    // buttonList.onclick = getList;
    buttonStat.onclick = getStats;
//    divList.appendChild(buttonList);
    divStat.appendChild(buttonStat);
}

function getList() { // создаёт массив строк с полным именем и возрастом и выводит в список
    if (divList.hasChildNodes()) {
        divList.removeChild(divList.firstElementChild);
    }
    const fullArr = persons.map(item => `${item.fName} ${item.lName}, ${item.age}`);
    console.log(fullArr);
    const persList = document.createElement('ul');
    persList.classList.add("list-group", "list-group-flush");
    divList.appendChild(persList);
    for (let person in persons) {
        const elementLi = document.createElement('li');
        elementLi.classList.add("list-group-item");
        console.log(fullArr[person]);
        let textNode = document.createTextNode(fullArr[person]);
        elementLi.appendChild(textNode);
        persList.appendChild(elementLi);
    }
}

function getStats() { // считает статистику по возрастам
    const ageList = persons.map(item => item.age);
    console.log(ageList);
    let minAge = ageList[0];
    let maxAge = ageList[0];
    let avgAge;
    let sum = persons.reduce((accum, item) => accum + item.age, 0);
    avgAge = Math.round(sum / ageList.length);
    for (let item in ageList) {
        if (ageList[item] < minAge) {
            minAge = ageList[item];
        }
        if (ageList[item] > maxAge) {
            maxAge = ageList[item];
        }
    }
    console.log(minAge);
    console.log(maxAge);
    console.log(avgAge);
    stats.push({name: 'Min Age', value: minAge});
    stats.push({name: 'Max Age', value: maxAge});
    stats.push({name: 'Avg Age', value: avgAge});
    console.log(stats);

    buildTable();
}


function buildTable() { // создаёт таблицу и заполняет данными функции getStats
    if (divStat.hasChildNodes()) {
        divStat.removeChild(divStat.firstElementChild);
    }
    const statTable = document.createElement('table');
    statTable.setAttribute('class', 'table table-striped');

    for (let i = 0; i < 3; i++) {
        const row = document.createElement('tr');
        for (let j = 0; j < 2; j++) {
            if (j === 0) {
                const cell = document.createElement('td');
                const cellText = document.createTextNode(stats[i].name);
                cell.appendChild(cellText);
                row.appendChild(cell);
            } else {
                const cell = document.createElement('td');
                const cellText = document.createTextNode(stats[i].value);
                cell.appendChild(cellText);
                row.appendChild(cell);
            }
        }
        statTable.appendChild(row);
    }
    divStat.appendChild(statTable);

}




















