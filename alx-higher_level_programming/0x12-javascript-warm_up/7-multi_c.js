const { argv } = require('node:process');

const num = argv[2];

if (isNaN(num)) {
    console.log('Missing number of occurrences');
} else {
    for (let i = 0; i < parseInt(num); i++)
    {
        console.log('C is fun');
    }
}