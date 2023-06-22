#include <stdio.h>

// Structure to represent a time period
struct TimePeriod {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct TimePeriod calculateTimeDifference(struct TimePeriod t1, struct TimePeriod t2) {
    struct TimePeriod diff;
    int totalSeconds1, totalSeconds2, diffSeconds;

    // Convert both time periods to seconds
    totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    // Calculate the difference in seconds
    diffSeconds = totalSeconds2 - totalSeconds1;

    // Convert the difference back to hours, minutes, and seconds
    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;

    return diff;
}

int main() {
    struct TimePeriod t1, t2, diff;

    // Input the first time period
    printf("Enter the first time period (hours minutes seconds): ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);

    // Input the second time period
    printf("Enter the second time period (hours minutes seconds): ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);

    // Calculate the difference
    diff = calculateTimeDifference(t1, t2);

    // Display the difference
    printf("The difference is: %d hours, %
