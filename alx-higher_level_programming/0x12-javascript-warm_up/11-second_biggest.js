const { argv } = require('node:process');

function compare(a, b) {
    return a - b;
}
if (argv.length <= 3) {
    console.log(0);
} else {
    argv.sort(compare);
    console.log(argv[argv.length - 2]);
}

