let library = [];
/*let numberOfBooksToAdd = +prompt('please enter number of books to add');*/
/*for (let i = 0; i < numberOfBooksToAdd; i++) {
    let info = prompt('Enter title, author, isbn');
    let arr = info.split(',');
    library.push(new Book(arr[0], arr[1], arr[2]));
}*/

library[0] = new Book('War and Peace', 'Leo Tolstoy', '123');
library[1] = new Book('C++ Algorithms', 'Alexand Fish', '321');
library[2] = new Book('How to code in Notepad', 'Bill Gates', '213');
library[3] = new Book('How to Start starting', 'Andret', '312');
library[4] = new Book('MacOs for Unix users', 'Leo Tolstoy', '231');


alert(printArrayOfObjects(library));
let action;
while (action !== 'end'){
    action = prompt('Enter your action');
    if (action === 'delete last'){
       library.pop();
       alert(printArrayOfObjects(library));
    }
    if (action == 'isbn') {
        let enterIsbn = +prompt('Enter ISBN');
        alert(getBookByIsbn(enterIsbn));
    }
}

function getBookByIsbn(isbn) {
    let res;
    for (let book in library) {
        if (isbn === library[i].isbn) {
            res = library[i];
        }
    }
    return printArrayOfObjects(res);
}

function Book(title, author, isbn) {
    this.title = title;
    this.author = author;
    if (isbn) {
        this.isbn = +isbn;
    }
}


function printArrayOfObjects(arr) {
    let res = '';
    for(let i = 0; i < arr.length; i++)
    {
        res += printObject(arr[i]);
        res += '\n';
    }
    return res;
}

function printObject(obj){
    let res = '';
    for(let key in obj){
        res += `${obj[key]} `;
    }
    return res;
}

