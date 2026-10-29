#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {

	// Print Hello World
    printf("Hello Worrld\n");

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

    // Accept input from the user via the CLI.
    // The buffer is byte-based, so UTF-8 encoded Japanese input is supported.
    char input[1024];
    printf("Please enter your input: ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Remove the trailing newline if present
        size_t length = strlen(input);
        if (length > 0 && input[length - 1] == '\n') {
            input[length - 1] = '\0';
        }

        // Display the input data as a response
        printf("Response: %s\n", input);
    }

    // Print Good Bye
    printf("Good Bye\n");

    return 0;
}