#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

// Do not change the given function declarations
// Do not add new functions

// ADD new data type Movie
struct Movie {
    // ADD CODE
    std::string name;  // namn
    std::string type;    // type
    int year = 0;    // year
};

// Read a movie (name, number of copies, type) from file
// Return the movie read
Movie get(std::ifstream& file);

// Write a movie m to file
void put(const Movie& m, std::ofstream& file);

// Write movie m to cout
void put(const Movie& m);

// Return true, if m1's name is alphabetically larger than m2's name
// Otherwise, returns false
bool larger_than(const Movie& m1, const Movie& m2);
