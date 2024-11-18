using System;

class Program {
    static double CalculateCompoundInterest(double principal, double rate, int time, int n) {
        return principal * Math.Pow(1 + rate / n, n * time);
    }

    static double CalculateFutureValue(double presentValue, double rate, int time) {
        return presentValue * Math.Pow(1 + rate, time);
    }

    static double CalculatePresentValue(double futureValue, double rate, int time) {
        return futureValue / Math.Pow(1 + rate, time);
    }

    static void Main() {
        double principal = 1000, rate = 0.05;
        int time = 10, n = 4;  // Quarterly compounding

        double compoundInterest = CalculateCompoundInterest(principal, rate, time, n);
        Console.WriteLine($"Compound Interest: {compoundInterest}");

        double futureValue = CalculateFutureValue(principal, rate, time);
        Console.WriteLine($"Future Value: {futureValue}");

        double presentValue = CalculatePresentValue(futureValue, rate, time);
        Console.WriteLine($"Present Value: {presentValue}");
    }
}