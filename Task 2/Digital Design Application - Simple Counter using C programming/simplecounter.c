#include <stdio.h>
#include <unistd.h>  // For usleep() in POSIX systems

int main() {
    int counter = 0;
    int end_value = 10;  // Set the end value

    printf("Simple Digital Counter\n");

    while (counter <= end_value) {  // Loop until counter reaches end value
        printf("Counter: %d\n", counter);
        counter++;  // Increment the counter
        usleep(1000000);  // Wait for 1 second (1,000,000 microseconds)
    }

    printf("Counter reached the end value of %d. Stopping.\n", end_value);

    return 0;
}