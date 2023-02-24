/*
 * TND012, Lab3: exercise 1
 * Author: Max Wiklundh
 * Step 1: Declare variables
 * Step 2: Let user input things
 * Step 3: Let the program do the rest
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // ADD CODE

    // Step 1: declare the varables
    int age;
    int nrTickets;
    int tot_price = 0;
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

    // Step 3: let the user enter num tickets
    cout << "Number of tickets: ";
    cin >> nrTickets;
    while (nrTickets <= 0) {
        cout << "Invalid number of tickets!!\nEnter a new number of tickets: ";
        cin >> nrTickets;
    }
    for (int i = 1; i <= nrTickets; i++){
        cout << "Enter age for person " << i << ": ";
        cin >> age;

        // Step 4: display the price of the ticket
        if (age > number_15) {                                 // This row checks if the inputed age is larger than 15
            tot_price += price_15;
        }
        else if (age >= number_8)                    // This row checks if the inputed age is between between 8 and 15 (including 8)
        {
            tot_price += price_8;
        }
    }
    cout << "\nTotal price = " << tot_price << " SEK\n";
}
