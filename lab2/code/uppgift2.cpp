/*
 * TND012, Lab2: exercise 2
 * Author: Max Wiklundh
 * Step 1: declare the varables
 * Step 2: output what the program does and ask for inputs and retrieve the inputed values
 * Step 3: compute the different values for x
 * Step 4: set up different scenarios depending on the roots
 * Step 5: Output the roots
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // ADD CODE
    // Step 1: declare the varables
    double coefB;
    double coefC;
    double x1;
    double x2;

    // Step 2 : output what the program does and ask for inputs
    cout << "Solving a second degree equation of the form x ^ 2 + b * x + c\n\n";
    cout << "Enter coefficient b: ";
    cin >> coefB;
    cout << "Enter coefficient c: ";
    cin >> coefC;

    // Step 3-5 : compute the different values for x and output the roots

    // First we check if both x1 and x2 are complex roots
    if (pow((coefB / 2),2) - coefC < 0) {
        cout << "\nx1 and x2 are complex roots!!\n";
    }
    // Else we continue and try to calculate x1 and x2
    else {
        // Here we set the number of decimals outputed
        cout << setprecision(3) << fixed;
        // Here we put the coefficients through the equation, + sqrt for x1 and - sqrt for x2
        x1 = ((-coefB) / 2) + sqrt(pow((coefB / 2), 2) - coefC);
        x2 = ((-coefB) / 2) - sqrt(pow((coefB / 2), 2) - coefC);
        
        // Here we check if x1 and x2 are the same, if they are we output the double root message 
        if (x1 == x2) {
            cout << "x1, x2 = " << x1 << " (double root)\n";
        }
        else {
            cout << "x1 = " << x1 << "\n";
            cout << "x2 = " << x2 << "\n";
        }
    }
}
