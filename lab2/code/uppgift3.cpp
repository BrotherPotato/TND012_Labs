/*
 * TND012, Lab2: exercise 3
 * Author: Max Wiklundh
 * Step 1: use the given parts
 * Step 2: add a small constant delta
 * Step 3: check if the given y value and the calculated y value are the "same", if they are print out the results
 * Step 4: else print that it does not fit the line and show the user what the difference between the y values actually is
 */

/*
* Input examples
* Input 1: y = 2.30 x + 4.00, p = (10, 27)
* Input 2: y = 1.00 x - 1.00, p = (-1.22, -2.22)
* Input 3: y = 1.00 x + 1.00, p = (-1.67, -0.67)
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main() {
    // Step 1
    double m = 0.0;
    double b = 0.0;
    std::cout << "Enter a line (m followed by b): ";
    std::cin >> m >> b;

    double x = 0.0;
    double y = 0.0;
    std::cout << "Enter a point (x and y coordinates): ";
    std::cin >> x >> y;

    // ADD CODE

    constexpr double delta = 0.00001;
    double y2 = m * x + b;
    double yDiff = 0;

    // the abs value of the equation should be smaller than delta if they should be considered the same
    if (abs(y - y2) < delta) {
        cout << "Point (" << x << ", " << y << ") belong to line y = " << m <<"x + " << b << "\n";

        /*
        cout << "Point (" << x << ", " << y << ") belong to line y = " << m << "x";
        if (b >= 0) {
            cout << " + " << b << "\n";
        } else {
            cout << " - " << abs(b) << "\n";
        }
        */

    }
    else {
        cout << "Point (" << x << ", " << y << ") does not belong to the line y = " << m << "x + " << b << "\n";

        /*
        cout << "Point (" << x << ", " << y << ") does not belong to the line y = " << m << "x";
        if (b >= 0) {
            cout << " + " << b << "\n";
        } else {
            cout << " - " << abs(b) << "\n";
        }
        */

        yDiff = abs(y - y2);
        cout << "The given y value of " << y << " is not the same as " << y2 << "\n";
        cout << "The difference is " << yDiff << "\n";
    }
}