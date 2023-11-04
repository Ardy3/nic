const pseudoOne = (rowx, rowy) => {
    let result = "";
    for (let i = 0; i < rowy; i++) {
        for (let j = 0; j < rowx; j++) {
            if (rowx - i - 1 > j) {
                result += ".";
            } else {
                result += "*";
            }
        }
        result += "\n";
    }
    console.log(result);
}

const pseudoTwo = (rowxy) => {
    let result = "";
    for (let i = 0; i < rowxy; i++) {
        for (let j = 0; j < rowxy; j++) {
            if (i <= 1 || i >= rowxy - 2) {
                result += "*";
            } else {
                if (j <= 1 || j >= rowxy - 2) {
                    result += "*";
                } else {
                    result += " ";
                }
            }
        }
        result += "\n";
    }
    console.log(result);
}

pseudoTwo(7);