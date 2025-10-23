/*
Name: Lee Kariuki
Reg no.: CT101/G/26493/25
Description: Program to calculate fare
*/

#include <stdio.h>

// Function Prototype
float calculateFare(float distance_km); 

int main() {
    float distance = 10.0;// Distance in km
    float total_fare;
    
    // Function Call
    total_fare = calculateFare(distance);
    
    printf("Distance traveled: %.2f km\n", distance);
    printf("Total fare: KSh. %.2f\n", total_fare);// Expected output for 10 km is 500.
    
    return 0;
}

// Function Definition
float calculateFare(float distance_km) { // Takes 'distance_km' as input
    const float RATE = 50.0;// Fixed rate per kilometer
    float fare;
    
    fare = distance_km * RATE;
    
    return fare; // Returns the calculated fare
}
