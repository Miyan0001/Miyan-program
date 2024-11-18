using System;

class Program {
    // Konversi waktu
    static double ConvertToSeconds(int hours, int minutes, int seconds) {
        return hours * 3600 + minutes * 60 + seconds;
    }

    static double ConvertToHours(int seconds) {
        return seconds / 3600.0;
    }

    // Konversi kecepatan
    static double ConvertSpeedToKmPerHour(double speed, string unit) {
        if (unit == "m/s") {
            return speed * 3.6;
        } else if (unit == "mile/h") {
            return speed * 1.60934;
        }
        return speed; // Asumsikan sudah dalam km/h
    }

    static double ConvertSpeedToMps(double speed, string unit) {
        if (unit == "km/h") {
            return speed / 3.6;
        } else if (unit == "mile/h") {
            return speed * 0.44704;
        }
        return speed; // Asumsikan sudah dalam m/s
    }

    static void Main() {
        int hours = 2, minutes = 30, seconds = 15;
        double timeInSeconds = ConvertToSeconds(hours, minutes, seconds);
        Console.WriteLine($"Time in seconds: {timeInSeconds}");
        
        double speedInKmPerHour = ConvertSpeedToKmPerHour(100, "m/s");
        Console.WriteLine($"Speed in km/h: {speedInKmPerHour}");
        
        double speedInMps = ConvertSpeedToMps(90, "km/h");
        Console.WriteLine($"Speed in m/s: {speedInMps}");
    }
}