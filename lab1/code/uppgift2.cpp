/*
 * TND012, Lab1: exercise 3
 * Author: Max Wiklundh
 * Program to calculate how much electricity was spent and how much to pay for it
 * Step 1 declare variables for kWh last year, now, used last year and price for 1 kWh
 * Step 2 ask the user to input a value for the last year
 * Step 3 let the user input a value
 * Step 4 ask the user to input a value for the kWh now
 * Step 5 let the user input a value
 * Step 6 ask the user to input a value for the price
 * Step 7 let the user input a value
 * Step 8 calculate the amount of kWh used last year
 * Step 9 print out the amount of kWh used
 * Step 10 calculate the total cost for the last year and the cost of 10%
 * Step 11 print out the total cost for the last year
 * Step 12 print out the cost for 10% of the used energy cost
 */

#include <iostream>  //std::cin, std::cout
#include <iomanip>

//using namespace std;

int main() {
    // ADD CODE
    // Step 1 declare variables for kWh last year, now, used last year and price for 1 kWh
    int kWh_Lastyear;
    int kWh_Now;
    int kWh_used_last_year;
    double price_1_kwh;
    double cost_for_10_procent;
    double total_price;
    // the following are used in order to compute the cost for the costly 10% of the total price
    constexpr double procent_10 = 0.1; 
    constexpr double procent_90 = 1 - procent_10;
    constexpr double higer_cost = 1.05;

    // Step 2 ask the user to input a value for the last year
    std::cout << "Enter electricity meter reading a year ago: ";
    // Step 3 let the user input a value
    std::cin >> kWh_Lastyear;

    // Step 4 ask the user to input a value for the kWh now
    std::cout << "Enter electricity meter reading now: ";
    // Step 5 let the user input a value
    std::cin >> kWh_Now;

    // Step 6 ask the user to input a value for the price
    std::cout << "Enter regular price of 1 kWh: ";
    // Step 7 let the user input a value
    std::cin >> price_1_kwh;

    // Step 8 calculate the amount of kWh used last year
    kWh_used_last_year = kWh_Now - kWh_Lastyear;
    // Step 9 print out the amount of kWh used
    std::cout << "\nYou have used " << kWh_used_last_year << " kWh during the last year\n";

    // Step 10 calculate the total cost for the last year and the cost of 10%
    cost_for_10_procent = kWh_used_last_year * procent_10 * (price_1_kwh * higer_cost);
    total_price = kWh_used_last_year * procent_90 * price_1_kwh + cost_for_10_procent;
    //total_price = kWh_used_last_year * (1 - procent_10) * price_1_kwh + cost_for_10_procent;

    // Step 11 print out the total cost for the last year
    std::cout << std::setprecision(2) << std::fixed << "Total cost = " << total_price;
    // Step 12 print out the cost for 10% of the used energy cost
    std::cout << std::setprecision(2) << std::fixed << "\n10% of the used energy costs " << cost_for_10_procent << " SEK\n";
}
