// Pranav Pramod
// 12/16/2024
// Time-Date Lab

#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // Question 2:
    int utcOffset;

    cout << "Enter a UTC Offset: " << endl;
    cin >> utcOffset;

    time_t now = time(nullptr);
    now += utcOffset * 3600;

    tm* timeZoneTime = gmtime(&now);
    cout << "Current time in specificed time zone: " << asctime(timeZoneTime);

    // Question 3:
    int guess;

    // Start time
    time_t startTime = time(nullptr);

    // Question
    do {
        cout << "What number is this (1): \n1. 2\n2. 3\n3. 1\n4. 2" << endl;
        cin >> guess;
    } while (guess != 3);

    // End time
    time_t endTime = time(nullptr);

    cout << "Correct! The question took you " << difftime(endTime, startTime) << " seconds" << endl;

    return 0;
}
