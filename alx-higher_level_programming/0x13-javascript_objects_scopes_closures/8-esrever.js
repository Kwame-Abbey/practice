exports.esrever = function (list) {
    const len = list.length - 1;
    for (let i = 0; i <= Math.floor(list.length / 2); i++) {
        let temp;
        temp = list[i];
        list[i] = list[len - i];
        list[len - i] = temp;
    }

    return list;
}