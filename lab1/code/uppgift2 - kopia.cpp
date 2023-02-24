/*
 * TND012, Lab1: exercise 2
 * Author: Max Wiklundh
 * Program to calculate how much electricity was spent and how much to pay for it
 * Step 1 declare variables for kWh last year, now and kWh used last year
 * Step 2 ask the user to input a value for the last year
 * Step 3 let the user input a value
 * Step 4 ask the user to input a value for the kWh now
 * Step 5 let the user input a value
 * Step 6 calculate the amount of kWh used last year
 * Step 7 print out the amount of kWh used
 */

#include <iostream>  //std::cin, std::cout

int main() {
    // ADD CODE
    // Step 1 declare variables for kWh last year, now and kWh used last year
    int kWh_Lastyear;
    int kWh_Now;
    int kWh_used_last_year;

    // Step 2 ask the user to input a value for the last year
    std::cout << "Enter electricity meter reading a year ago: ";
    // Step 3 let the user input a value
    std::cin >> kWh_Lastyear;

    // Step 4 ask the user to input a value for the kWh now
    std::cout << "Enter electricity meter reading now: ";
    // Step 5 let the user input a value
    std::cin >> kWh_Now;

    // Step 6 calculate the amount of kWh used last year
    kWh_used_last_year = kWh_Now - kWh_Lastyear;
    // Step 7 print out the amount of kWh used
    std::cout << "You have used " << kWh_used_last_year << " kWh during the last year\n";
}
