// import { readFile, readFileSync } from 'node:fs';
import fs from 'node:fs/promises'

// readFile('a.txt', 'utf8', (err, data) => {
//     if (err) throw err;
//     console.log(data);
//   }); 

// let a = readFileSync('./a.txt', 'utf8');
// console.log(a);

// fs.readFile('a.txt', 'utf8')
//     .then((data) => console.log(data))
//     .catch(err => console.log(err))

const readfile = async () => {
    try {
        const data = await fs.readFile('a.txt', 'utf8');
        console.log(data);
    } catch (error) {
        console.log(error);
    }
}

readfile();