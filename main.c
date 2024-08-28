#include <stdio.h>
#include <time.h>

int main() {
    // Get the current time
    time_t currentTime = time(NULL);

    // Convert the current time to a string
    char* timeString = ctime(&currentTime);

    // Print the current time
    printf("Current time: %s", timeString);

    // print the UTC time
    struct tm* utcTime = gmtime(&currentTime);
    char* utcTimeString = asctime(utcTime);
    printf("UTC time: %s", utcTimeString);

    return 0;
}