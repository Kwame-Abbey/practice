const { argv } = require('node:process');

function fact(n) {
    if (isNaN(n) || n === 1) return 1;
    return n * fact(n - 1);
}

console.log(fact(parseInt(argv[2])));