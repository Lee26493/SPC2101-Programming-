/*
Name: Lee Kariuki
Reg no.: CT101/G/26493/25
Description: Program to calculate electric bill
*/

#include <stdio.h>

// Function Prototype: Tells the compiler the function exists, 
// its return type (float), and its parameter type (int).
float calculateElectricBill(int units); 

int main() {
    int units_consumed = 250; 
    float total_bill;
    
    // Function Call: The main program calls the function and 
    // stores the returned value in the 'total_bill' variable.
    total_bill = calculateElectricBill(units_consumed);
    
    printf("Units consumed: %d\n", units_consumed);
    printf("Total bill: KSh. %.2f\n", total_bill); 
    // Example: If 250 units are consumed, the total bill should be KSh. [span_0](start_span)3,500[span_0](end_span).
    
    return 0;
}

// Function Definition: The actual implementation of the function's logic.
float calculateElectricBill(int units) { // Takes 'units' as input
    float bill = 0.0;
    
    // Consumption over 200 units (Rate: 20 KSh/unit)
    if (units > 200) {
        // Calculate the charge for units beyond 200
        bill += (units - 200) * 20.0;
        // The remaining units to check are 200
        units = 200; 
    }
    
    // Consumption between 101 and 200 units (Rate: 15 KSh/unit)
    if (units > 100) {
        // Calculate the charge for units between 101 and 200 (100 units total)
        bill += (units - 100) * 15.0;
        // The remaining units to check are 100
        units = 100;
    }
    
    // Consumption for the first 100 units (Rate: 10 KSh/unit)
    if (units > 0) {
        // Calculate the charge for the first 100 units or less
        bill += units * 10.0;
    }
    
    return bill; // Returns the calculated bill amount
}
    