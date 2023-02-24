/*
 * TND012, Lab3: exercise 4
 * Author: Max Wiklundh
 * Step 1: Declare variables
 * Step 2: Let user input things
 * Step 3: Let the program do the rest
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    // ADD CODE

    int TOO = 0;
    int GOOD = 0;
    bool found1 = false;

    for (int T = 0; T <= 9; T++) {

        for (int O = 0; O <= 9; O++)
        {
            if (O != T) {
                
                for (int G = 0; G <= 9; G++)
                {
                    if (G != O && G != T) {
                        
                        for (int D = 0; D <= 9; D++)
                        {
                            if (D != O && D != T && D != G) {

                                TOO = T * 100 + O * 10 + O;
                                GOOD = G * 1000 + O * 100 + O * 10 + D;

                                if ((TOO + TOO + TOO + TOO) == GOOD) {

                                    if (!found1) {
                                        cout << "TOO + TOO + TOO + TOO = GOOD is true when\n";
                                        found1 = true;
                                    }
                                    else {
                                        cout << "And when\n";
                                    }
                                    cout << "TOO = " << TOO << " & GOOD = " << GOOD << "\n";
                                }
                            }
                        }
                    }        
                }
            }
        }
    }
}
