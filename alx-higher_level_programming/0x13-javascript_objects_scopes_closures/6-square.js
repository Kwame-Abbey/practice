const Rectangle = require('./4-rectangle');

class Square extends Rectangle {
    constructor(size) {
        super(size, size);
        this.size = size;
    }

    charPrint(c) {
        if (!c) {
            for (let i = 0; i < this.size; i++) {
                console.log('X'.repeat(this.size));
            }
        } else {
            for (let i = 0; i < this.size; i++) {
                console.log(c.repeat(this.size));
            }
        }
    }
}

module.exports = Square