local function arithmeticSequence(a, d, n)
    local sequence = {}
    for i = 1, n do
        table.insert(sequence, a + (i - 1) * d)
    end
    return sequence
end

local function geometricSequence(a, r, n)
    local sequence = {}
    for i = 1, n do
        table.insert(sequence, a * r^(i - 1))
    end
    return sequence
end

local function mean(numbers)
    local sum = 0
    for _, num in ipairs(numbers) do
        sum = sum + num
    end
    return sum / #numbers
end

local function median(numbers)
    table.sort(numbers)
    local len = #numbers
    if len % 2 == 0 then
        return (numbers[len / 2] + numbers[len / 2 + 1]) / 2
    else
        return numbers[math.ceil(len / 2)]
    end
end

local function standardDeviation(numbers)
    local m = mean(numbers)
    local sumSquares = 0
    for _, num in ipairs(numbers) do
        sumSquares = sumSquares + (num - m)^2
    end
    return math.sqrt(sumSquares / #numbers)
end

-- Contoh penggunaan
print("Arithmetic Sequence: " .. table.concat(arithmeticSequence(1, 3, 5), ", "))
print("Geometric Sequence: " .. table.concat(geometricSequence(2, 3, 5), ", "))
print("Mean: " .. mean({1, 2, 3, 4, 5}))
print("Median: " .. median({1, 3, 5, 7, 9}))
print("Standard Deviation: " .. standardDeviation({1, 2, 3, 4, 5}))