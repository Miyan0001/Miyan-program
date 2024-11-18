local function add(a, b) 
    return a + b 
end

local function subtract(a, b) 
    return a - b 
end

local function multiply(a, b) 
    return a * b 
end

local function divide(a, b) 
    if b == 0 then
        return "Error: Division by zero"
    else
        return a / b
    end
end

local function modulus(a, b) 
    return a % b 
end

local function power(a, b)
    return a ^ b
end

local function squareRoot(a)
    if a < 0 then
        return "Error: Negative number"
    else
        return math.sqrt(a)
    end
end

local function isEven(a)
    return a % 2 == 0
end

local function isOdd(a)
    return a % 2 ~= 0
end

local function calculate(operation, a, b)
    if operation == "add" then
        return add(a, b)
    elseif operation == "subtract" then
        return subtract(a, b)
    elseif operation == "multiply" then
        return multiply(a, b)
    elseif operation == "divide" then
        return divide(a, b)
    elseif operation == "modulus" then
        return modulus(a, b)
    elseif operation == "power" then
        return power(a, b)
    elseif operation == "sqrt" then
        return squareRoot(a)
    else
        return "Error: Invalid operation"
    end
end

print("Addition: " .. calculate("add", 10, 5))
print("Subtraction: " .. calculate("subtract", 10, 5))
print("Multiplication: " .. calculate("multiply", 10, 5))
print("Division: " .. calculate("divide", 10, 5))
print("Modulus: " .. calculate("modulus", 10, 5))
print("Power: " .. calculate("power", 2, 3))
print("Square Root: " .. calculate("sqrt", 16, 0))
print("Is 10 even? " .. (isEven(10) and "Yes" or "No"))
print("Is 5 odd? " .. (isOdd(5) and "Yes" or "No"))