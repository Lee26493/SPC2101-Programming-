/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: Program to track room occupancy for one branch using a 2D array.
*/
#include <stdio.h>  // for input/output
#include <stdlib.h> // for rand() and srand ()
#include <time.h>   // for time()

int main() {
    // Seed random number generator
    srand(time(NULL));

    // Part 2: Room Occupancy (2D Array for one branch)
    // 5 floors (rows) x 10 rooms (columns)
    int occupancy[5][10]; 
    int floor, room, occupied, vacant;

    printf("--- Room Occupancy for One Branch (5 Floors x 10 Rooms) ---\n");
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            // Assign 0 (vacant) or 1 (occupied) randomly
            occupancy[floor][room] = rand() % 2; 
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}
