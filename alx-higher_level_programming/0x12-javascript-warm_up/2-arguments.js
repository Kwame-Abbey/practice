const { argv } = require('node:process');

if (argv.length <= 2) {
    console.log("No argument");
} else if (argv.length === 3) {
    console.log("Argument found");
} else {
    console.log("Arguments found");
}

// console.log(argv[3]);