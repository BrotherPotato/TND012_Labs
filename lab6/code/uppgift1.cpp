/*
 * TND012, Lab6
 * Exercise 1: Load and sort movies
 * Read the txt file with movies
 * Store the information in a Movie vector
 * Sort the movies depending on the movie titel
 * Write the movies in another txt file and to the console
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <utility>  //std::swap

#include "movie.h"

/****************************************/
// Function declarations (prototypes)
/****************************************/

// NO CHANGES TO FUNCTION DECLARATION ALLOWED HERE!

// Sort alphabetically vector of movies V
// movies name is used for sorting
void sort_movies(std::vector<Movie>& V);

// Read a text file f of movies and
// Return a vector with the movies read
std::vector<Movie> read_movies(std::ifstream& f);

// Write all movies in vector V to file f
void write_movies(const std::vector<Movie>& V, std::ofstream& f);

// Display all movies in vector V to std::cout
void display_movies(const std::vector<Movie>& V);

// ADD ADDITIONAL FUNCTIONS BELOW IF NEEDED

/****************************************/
// Main program
/****************************************/

// DO NOT CHANGE THE main() function
int main() {
    std::ifstream in_file("../code/movies.txt");          // file to read
    std::ofstream out_file("../code/movies_sorted.txt");  // file to write

    // Test if opening the files succeeded
    if (in_file && out_file) {
        // Load a file of movies into db
        std::vector<Movie> db = read_movies(in_file);

        if (db.empty() == false) {  // is database db of movies empty?
            // Sort array db by movies name
            sort_movies(db);

            // Display the sorted movies in array db to the screen
            display_movies(db);

            // Save the sorted movies stored in db to a text file
            write_movies(db, out_file);
        } else {
            std::cout << "File is empty!!\n";
        }
    } else {
        std::cout << "Error in file opening!!\n";
    }
}

/****************************************/
// Function definitions
/****************************************/

// Sort alphabetically vector of movies V
// movies name is used for sorting
void sort_movies(std::vector<Movie>& V) {
    // ADD CODE
    int y;
    for (int pass = 1; pass < V.size(); pass++)
    {
        for (int i = 0; i < V.size() - 1; i++) {
            y = i + 1;
            if (larger_than(V[i], V[y])) {
                std::swap(V[i], V[y]);
            }
        }
    } 
}

// Read a text file f of movies and
// Return a vector with the movies read
std::vector<Movie> read_movies(std::ifstream& f) {
    // ADD CODE
    std::vector<Movie> movies;
    Movie temp = get(f);
    while (f) {
        movies.push_back(temp);
        temp = get(f);
    }
    return movies; 
}

// Write all movies in vector V to file f
void write_movies(const std::vector<Movie>& V, std::ofstream& f) {
    // ADD CODE
    for (Movie m : V) {
        put(m, f);
    }
}

// Display all movies in vector V to std::cout
void display_movies(const std::vector<Movie>& V) {
    // ADD CODE  
    for (Movie m : V) {
        put(m);
    }
}
