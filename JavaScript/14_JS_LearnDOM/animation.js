const container = document.getElementById('container');
const box = document.getElementById('box');
let size = container.offsetWidth - box.offsetWidth;
let t = setInterval(move, 10);
let pos = 1;
let i = 1;

function move() {
    box.style.left = pos + 'px';
    box.style.top = pos + 'px';
    pos = pos + i;
    if (pos >= size) {
        i = -1;
    }
    if (pos <= 0) {
        i = 1;
    }
}