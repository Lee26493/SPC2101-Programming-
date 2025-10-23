/*
Name: Lee Kariuki
Reg no.: CT101/G/26493/25
Description: Program to convert temperature in fahrenheit to celcius
*/

#include <stdio.h>

// Function Prototype
float convertToCelsius(float fahrenheit); 

int main() {
    float temp_f = 98.6;// Example input in Fahrenheit
    float temp_c;
    
    // Function Call
    temp_c = convertToCelsius(temp_f);
    
    printf("Temperature in Fahrenheit: %.1f°F\n", temp_f);
    // Expected output for 98.6°F is approximately 37°C
    printf("Temperature in Celsius: %.1f°C\n", temp_c); 
    
    return 0;
}

// Function Definition
float convertToCelsius(float fahrenheit) { // Takes 'fahrenheit' as input
    float celsius;
    
    // Apply the conversion formula: C = (F - 32) * 5/9
    // We use '5.0 / 9.0' to ensure floating-point division.
    celsius = (fahrenheit - 32.0) * (5.0 / 9.0);
    
    return celsius; // Returns the calculated Celsius temperature
}
