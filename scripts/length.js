function convertLength(value, fromUnit, toUnit) {
    const conversionRates = {
        'meters': 1,
        'kilometers': 0.001,
        'centimeters': 100,
        'millimeters': 1000
    };
    return value * conversionRates[toUnit] / conversionRates[fromUnit];
}

function convertWeight(value, fromUnit, toUnit) {
    const conversionRates = {
        'kilograms': 1,
        'grams': 1000,
        'pounds': 2.20462,
        'ounces': 35.274
    };
    return value * conversionRates[toUnit] / conversionRates[fromUnit];
}

function convertTemperature(value, fromUnit, toUnit) {
    if (fromUnit === 'celsius' && toUnit === 'fahrenheit') {
        return (value * 9/5) + 32;
    } else if (fromUnit === 'fahrenheit' && toUnit === 'celsius') {
        return (value - 32) * 5/9;
    } else {
        return "Invalid temperature conversion";
    }
}

console.log("Length: 100 meters to kilometers: " + convertLength(100, 'meters', 'kilometers'));
console.log("Weight: 50 kilograms to pounds: " + convertWeight(50, 'kilograms', 'pounds'));
console.log("Temperature: 25 Celsius to Fahrenheit: " + convertTemperature(25, 'celsius', 'fahrenheit'));