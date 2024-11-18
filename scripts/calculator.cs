using System;

class Program {
    static double Add(double a, double b) {
        return a + b;
    }

    static double Subtract(double a, double b) {
        return a - b;
    }

    static double Multiply(double a, double b) {
        return a * b;
    }

    static double Divide(double a, double b) {
        if (b == 0) {
            Console.WriteLine("Error: Division by zero");
            return 0;
        }
        return a / b;
    }

    static int Modulus(int a, int b) {
        return a % b;
    }

    static double Power(double a, double b) {
        return Math.Pow(a, b);
    }

    static double SquareRoot(double a) {
        if (a < 0) {
            Console.WriteLine("Error: Negative number");
            return -1;
        }
        return Math.Sqrt(a);
    }

    static bool IsEven(int a) {
        return a % 2 == 0;
    }

    static bool IsOdd(int a) {
        return a % 2 != 0;
    }

    static double Calculate(string operation, double a, double b) {
        if (operation == "add") {
            return Add(a, b);
        } else if (operation == "subtract") {
            return Subtract(a, b);
        } else if (operation == "multiply") {
            return Multiply(a, b);
        } else if (operation == "divide") {
            return Divide(a, b);
        } else if (operation == "modulus") {
            return Modulus((int)a, (int)b);
        } else if (operation == "power") {
            return Power(a, b);
        } else if (operation == "sqrt") {
            return SquareRoot(a);
        } else {
            Console.WriteLine("Error: Invalid operation");
            return -1;
        }
    }

    static void Main() {
        double a = 10, b = 5;
        Console.WriteLine("Addition: " + Calculate("add", a, b));
        Console.WriteLine("Subtraction: " + Calculate("subtract", a, b));
        Console.WriteLine("Multiplication: " + Calculate("multiply", a, b));
        Console.WriteLine("Division: " + Calculate("divide", a, b));
        Console.WriteLine("Modulus: " + Calculate("modulus", a, b));
        Console.WriteLine("Power: " + Calculate("power", 2, 3));
        Console.WriteLine("Square Root: " + Calculate("sqrt", 16, 0));
        Console.WriteLine("Is 10 even? " + (IsEven(10) ? "Yes" : "No"));
        Console.WriteLine("Is 5 odd? " + (IsOdd(5) ? "Yes" : "No"));
    }
}