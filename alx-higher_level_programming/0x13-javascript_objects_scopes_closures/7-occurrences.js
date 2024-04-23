exports.nbOccurences = function (list, searchElement) {
    let num = 0;
    for (let x of list) {
        if (x === searchElement) {
            num++;
        }
    }
    return num;
}