#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {
    int hour, min, sec;
    time_t current_time;
    struct tm *time_info;

    // Get current system time
    current_time = time(NULL);
    time_info = localtime(&current_time);

    // Extract time components and handle potential errors
    if (time_info == NULL) {
        perror("localtime");
        return 1;
    }

    hour = time_info->tm_hour;
    min = time_info->tm_min;
    sec = time_info->tm_sec;

    while (1) {
        // Clear the screen (optional)
        // system("clear"); // Uncomment if desired

        // Print formatted time in 24-hour format
        printf("%02d:%02d:%02d\n", hour, min, sec);

        // Update time using a loop with conditional increments
        sec++;

        if (sec == 60) {
            sec = 0;
            min++;
        }

        if (min == 60) {
            min = 0;
            hour++;
        }

        if (hour == 24) {
            hour = 0;
        }

        // Delay for 1 second
        sleep(1);
    }

    return 0; // Unreachable due to the infinite loop
}
