/*
 * TND012, Lab3: exercise 2
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

    double first_price = 0.0;
    double last_price = 0.0;
    double price_step = 0.0;
    double tax_perc = 0.0;

    cout << setprecision(2) << fixed;

    cout << "Enter first price: ";
    cin >> first_price;
    while (first_price < 0) {
        cout << "Error!\nPlease enter another value for the first price: ";
        cin >> first_price;
    }

    cout << "Enter last price: ";
    cin >> last_price;
    while (last_price < 0 || last_price < first_price) {
        cout << "Error!\nPlease enter another value for the last price: ";
        cin >> last_price;
    }
    cout << "Enter price step: ";
    cin >> price_step;
    while (price_step <= 0) {
        cout << "Error!\nPlease enter another value for the price step: ";
        cin >> price_step;
    }
    cout << "Enter tax percentage: ";
    cin >> tax_perc;
    while (tax_perc < 0) {
        cout << "Error!\nPlease enter another value for the tax percentage: ";
        cin >> tax_perc;
    }

    cout << "\nTaxes table\nTax = " << tax_perc << "%\n\n";
    cout << "Price tax free " << std::setw(10) << "Tax" << std::setw(26) << "Price with tax\n";
    std::cout << std::setw(60) << std::setfill('=') << "\n";
    cout << std::setfill(' ');

    for (double i = first_price; i <= last_price; i = i + price_step) {
        cout << std::setw(7) << i << std::setw(19) << (i * (tax_perc/100)) << std::setw(18) << (i + (i * (tax_perc / 100))) << "\n";
    }


}
