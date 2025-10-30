/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: Program to track room occupancy for multiple branches using a 3D array.
*/
#include <stdio.h>  // for input/output
#include <stdlib.h> // for rand() and srand ()
#include <time.h>   // for time()

int main() {
    // Seed random number generator
    srand(time(NULL));

    // Part 3: Multiple Branches Occupancy (3D Array)
    // 3 branches x 5 floors x 10 rooms
    int chain[3][5][10]; 
    int branch, floor, room, total_occupied = 0;

    printf("--- Multiple Branches Occupancy (3 Branches, 5 Floors, 10 Rooms Each) ---\n");
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                // Assign 0 (vacant) or 1 (occupied) randomly
                chain[branch][floor][room] = rand() % 2; 
                if (chain[branch][floor][room] == 1)
    			    total_occupied++;
            }
        }
    }

    printf("Total occupied rooms across all branches: %d\n", total_occupied);

    return 0;
}
