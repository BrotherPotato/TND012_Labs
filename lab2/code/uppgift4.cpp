/*
 * TND012, Lab2: exercise 4
 * Author: Max Wiklundh
 * Step 1: declare the varables
 * Step 2: let the user input values for the departure time and the flight duration
 * Step 3: check if the inputed values are within the allowed time frame, if not let the user input a new value
 * Step 4: convert values to clock format
 * Step 5: output the  arrival time
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main() {
    // ADD CODE
    int departureH = 0;
    int departureM = 0;

    int flightDurH = 0;
    int flightDurM = 0;

    int arrivalH = 0;
    int arrivalM = 0;

    // Step 2: let the user input values for the departure time and the flight duration
    cout << "Please input your departure time (Hours followed by Minutes): ";
    cin >> departureH >> departureM;

    while (0 > departureH || departureH >= 24 || 0 > departureM || departureM >= 60) {
        cout << "Please enter a real departure time (Hours followed by Minutes): ";
        cin >> departureH >> departureM;
    }


    cout << "\nPlease input the flight duration (Hours followed by Minutes): ";
    cin >> flightDurH >> flightDurM;
    
    while (0 > flightDurH || flightDurH >= 24 || 0 > flightDurM || flightDurM >= 60) {
        cout << "Please enter a real flight duration (Hours followed by Minutes): ";
        cin >> flightDurH >> flightDurM;
    }
    
    /*
    if (0 > flightDurH || flightDurH >= 24 || 0 > flightDurM || flightDurM >= 60) {
        cout << "Problem";
        exit(EXIT_FAILURE);
    }
    */

    // count minutes, if it would exceed 60 add 1 to the hour and sub 60 from min, else just add
    if (departureM + flightDurM >= 60) {
        arrivalH++;
        arrivalM = departureM + flightDurM - 60;
    } else{
        arrivalM = departureM + flightDurM;
    }


    // count hours and output the time, if it would exceed 24 say tomorrow at the end, the if-statments just build a sentence in different parts, if hour or min is smaller than 10 add a 0 before
    cout << "You will arrive at (";
    if (arrivalH + departureH + flightDurH >= 24) {
        arrivalH = arrivalH + departureH + flightDurH - 24;
        // the following if-statments just build a sentence in different parts, if hour or min is smaller than 10 add a 0 before
        if (arrivalH >= 10) {
            cout << arrivalH << ":" ;
        }
        else {
            cout << "0" << arrivalH << ":";
        }
        if (arrivalM >= 10) {
            cout << arrivalM;
        }
        else {
            cout << "0" << arrivalM;
        }
        cout << ") tomorrow\n";
    }
    else {
        arrivalH = arrivalH + departureH + flightDurH;

        if (arrivalH >= 10) {
            cout << arrivalH << ":";
        }
        else {
            cout << "0" << arrivalH << ":";
        }
        if (arrivalM >= 10) {
            cout << arrivalM;
        }
        else {
            cout << "0" << arrivalM;
        }
        cout << ") today\n";
    }
}
