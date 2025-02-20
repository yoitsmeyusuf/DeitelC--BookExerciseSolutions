#include <iostream>

int timeSinceLast12(int hours, int minutes, int seconds) {
    // Convert the time to seconds
    int totalSeconds = hours * 3600 + minutes * 60 + seconds;
    // Calculate the seconds since the last 12 o'clock
    int secondsSince12 = totalSeconds % 43200; // 43200 seconds in 12 hours
    return secondsSince12;
}

int timeDifference(int hours1, int minutes1, int seconds1, int hours2, int minutes2, int seconds2) {
    int time1 = timeSinceLast12(hours1, minutes1, seconds1);
    int time2 = timeSinceLast12(hours2, minutes2, seconds2);
    return abs(time2 - time1);
}

int main() {
    int hours1, minutes1, seconds1;
    int hours2, minutes2, seconds2;

    std::cout << "Enter first time (hours minutes seconds): ";
    std::cin >> hours1 >> minutes1 >> seconds1;

    std::cout << "Enter second time (hours minutes seconds): ";
    std::cin >> hours2 >> minutes2 >> seconds2;

    int difference = timeDifference(hours1, minutes1, seconds1, hours2, minutes2, seconds2);
    std::cout << "The difference in seconds is: " << difference << std::endl;

    return 0;
}