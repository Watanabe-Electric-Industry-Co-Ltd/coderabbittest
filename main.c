#include <stdio.h>
#include <time.h>

int main() {
    // Get the current time
    time_t currentTime = time(NULL);

    // Convert the current time to a string
    char* timeString = ctime(&currentTime);

    // Print the current time
    printf("Current time: %s", timeString);

    return 0;
}