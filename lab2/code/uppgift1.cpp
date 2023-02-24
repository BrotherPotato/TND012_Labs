/*
 * TND012, Lab2: exercise 1
 * Author: Max Wiklundh
 * Step 1: declare the varables
 * Step 2: introduce the user and display the prices
 * Step 3: let the user enter a age
 * Step 4: display the price of the ticket
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // ADD CODE
    // Step 1: declare the varables
    int age = 0;
    constexpr int price_15 = 80;
    constexpr int number_15 = 15;
    constexpr int price_8 = 30;
    constexpr int number_8 = 8;
    constexpr int price_0 = 0;

    // Step 2 : introduce the user and display the prices
    cout << "Welcome to our Football Arena.\n\n";
    cout << "Ticket prices:\n";
    cout << "Price for people over 15: " << price_15 << " SEK\n";
    cout << "Price for people between 8 and 15: " << price_8 << " SEK\n";
    cout << "Price for people below 8: " << price_0 << " SEK\n\n";

    // Step 3: let the user enter a age
    cout << "Enter age: ";
    cin >> age;

    // Step 4: display the price of the ticket
    if (age > number_15) {                                 // This row checks if the inputed age is larger or equal to 15
        cout << "Price = " << price_15 << " SEK\n";
    }
    else if (number_8 <= age && age <= number_15) {           // This row checks if the inputed age is between between 8 and 15 (including 8)
        cout << "Price = " << price_8 << " SEK\n";
    }
    // if (age < number_8)
    else {
        cout << "Price = " << price_0 << " SEK\n";
    }
}
