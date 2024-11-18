function add(a, b) {
    return a + b;
}

function subtract(a, b) {
    return a - b;
}

function multiply(a, b) {
    return a * b;
}

function divide(a, b) {
    if (b === 0) {
        console.log("Error: Division by zero");
        return 0;
    }
    return a / b;
}

function modulus(a, b) {
    return a % b;
}

function power(a, b) {
    return Math.pow(a, b);
}

function squareRoot(a) {
    if (a < 0) {
        console.log("Error: Negative number");
        return -1;
    }
    return Math.sqrt(a);
}

function isEven(a) {
    return a % 2 === 0;
}

function isOdd(a) {
    return a % 2 !== 0;
}

function calculate(operation, a, b) {
    if (operation === "add") {
        return add(a, b);
    } else if (operation === "subtract") {
        return subtract(a, b);
    } else