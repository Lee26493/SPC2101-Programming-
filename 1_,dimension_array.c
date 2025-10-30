/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: Program to track weekly revenue using a 1D array.
*/
#include <stdio.h> // for input/output

int main() {
    // Part 1: Weekly Revenue Tracker (1D Array)
    float revenue[7], total = 0, average;
    int i;

    printf("--- Weekly Revenue Tracker ---\n");
    // Get revenue for 7 days
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        // Note: In a real application, you'd add error checking for scanf
        if (scanf("%f", &revenue[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1; // Exit with an error code
        }
        total += revenue[i];
    }

    // Calculate and display results
    average = total / 7.0;
    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}
