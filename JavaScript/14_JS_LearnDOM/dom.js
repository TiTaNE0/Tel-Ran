//console.log(document.body.innerHTML);
//document.body.innerHTML = '<h1>Hello world!</h1>';
const div1 = document.getElementById('div1');
div1.style.border = '1px solid black';
const p = document.querySelectorAll('#div1 > p');
for (let i = 0; i < p.length; i++) {
    p[i].innerHTML = `<span>new text ${i + 1}</span>`;
}
const children = div1.children;
console.log(children.length);
for (let i = 0; i < children.length; i++) {
    children[i].style.color = 'red';
}

const newP1 = document.createElement('p');
const newP1Text = document.createTextNode('text created with special method');
newP1.appendChild(newP1Text);
div1.appendChild(newP1);
//div1.insertBefore(newP1,div1.lastElementChild);
//document.body.insertBefore(newP1,div1.nextElementSibling);
const newP2 = document.createElement('p');
const newP2Text = document.createTextNode('p2 text');
newP2.appendChild(newP2Text);
div1.replaceChild(newP2, div1.firstElementChild);
div1.removeChild(div1.firstElementChild.nextElementSibling);