/* 
 * TND012, Lab3: exercise 3
 * Author: Max Wiklundh
 * Step 1: Declare variables
 * Step 2: Let user input things
 * Step 3: Let the program do the rest
 */

// Test input: 10 12.5 13 8.5 1120 155 200 220 44 150 112 75 109 80 2300 157 66 47 449 154 STOP

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    // ADD CODE
    double tax_perc = 0.0;
    double temp_double;
    std::vector<double> product_prices;

    cout << setprecision(2) << fixed;
    // input
    cout << "Enter tax percentage: ";
    cin >> tax_perc;
    while (tax_perc < 0) {
        cout << "Error!\nPlease enter another value for the tax percentage: ";
        cin >> tax_perc;
    }

    cout << "Enter products price: ";
    while (cin >> temp_double) {
        // Add g to vector grades
        product_prices.push_back(temp_double);
    }
    // output
    cout << "\nTaxes table\nTax = " << tax_perc << "%\n\n";
    cout << "Price tax free " << std::setw(10) << "Tax" << std::setw(28) << "Price with tax\n";
    std::cout << std::setw(60) << std::setfill('=') << "\n";
    cout << std::setfill(' ');

    for (double temp : product_prices) {
        cout << std::setw(8) << temp << std::setw(19) << (temp * (tax_perc / 100)) << std::setw(18) << (temp + (temp * (tax_perc / 100))) << "\n";
    }
}
