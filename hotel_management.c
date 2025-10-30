/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: A program to develop a simple system for ahotel chain to monitor revenue and room occupancy.
*/
#include <stdio.h>// for input/output
#include <stdlib.h>// for rand() and srand ()
#include <time.h>// for time()

int main() {
    // Seed random number generator
    srand(time(NULL));

    // Part 1: Weekly Revenue Tracker (1D Array)
    float revenue[7], total = 0, average;
    int i;

    printf("Weekly Revenue Tracker\n");
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;
    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n\n", average);

    // Part 2: Room Occupancy (2D Array for one branch)
    int occupancy[5][10];
    int floor, room, occupied, vacant;

    printf("Room Occupancy for One Branch\n");
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 or 1
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupied, vacant);
    }

    // Part 3: Multiple Branches (3D Array)
    int chain[3][5][10];
    int branch, total_occupied = 0;

    printf("\nMultiple Branches Occupancy\n");
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
    			total_occupied++;
            }
        }
    }

    printf("Total occupied rooms across all branches: %d\n", total_occupied);

    return 0;
}
