local function sine(a)
    return math.sin(math.rad(a))
end

local function cosine(a)
    return math.cos(math.rad(a))
end

local function tangent(a)
    return math.tan(math.rad(a))
end

local function logBase10(a)
    if a <= 0 then
        return "Error: Invalid input for logarithm"
    else
        return math.log10(a)
    end
end

local function naturalLog(a)
    if a <= 0 then
        return "Error: Invalid input for logarithm"
    else
        return math.log(a)
    end
end

local function calculate(operation, a)
    if operation == "sine" then
        return sine(a)
    elseif operation == "cosine" then
        return cosine(a)
    elseif operation == "tangent" then
        return tangent(a)
    elseif operation == "log10" then
        return logBase10(a)
    elseif operation == "ln" then
        return naturalLog(a)
    else
        return "Error: Invalid operation"
    end
end

print("Sine(30): " .. calculate("sine", 30))
print("Cosine(45): " .. calculate("cosine", 45))
print("Tangent(60): " .. calculate("tangent", 60))
print("Logarithm base 10(100): " .. calculate("log10", 100))
print("Natural Logarithm(2.718): " .. calculate("ln", 2.718))