function mean(numbers) {
    const sum = numbers.reduce((acc, num) => acc + num, 0);
    return sum / numbers.length;
}

function median(numbers) {
    numbers.sort((a, b) => a - b);
    const len = numbers.length;
    if (len % 2 === 0) {
        return (numbers[len / 2 - 1] + numbers[len / 2]) / 2;
    } else {
        return numbers[Math.floor(len / 2)];
    }
}

function standardDeviation(numbers) {
    const m = mean(numbers);
    const variance = numbers.reduce((acc, num) => acc + Math.pow(num - m, 2), 0) / numbers.length;
    return Math.sqrt(variance);
}

function probability(successes, trials) {
    return successes / trials;
}

console.log("Mean: " + mean([1, 2, 3, 4, 5]));
console.log("Median: " + median([1, 2, 3, 4, 5, 6]));
console.log("Standard Deviation: " + standardDeviation([1, 2, 3, 4, 5]));
console.log("Probability of success: " + probability(3, 5));