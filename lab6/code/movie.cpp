#include "movie.h"

// Read a movie (name, number of copies, type) from file
// Return the movie read
Movie get(std::ifstream& file) {
	Movie m;
	std::string s = "";
	// ADD CODE

	file >> std::ws;
	std::getline(file, s);
	m.name = s;
	file >> std::ws;
	file >> m.type >> m.year;
	return m;
}

// Write a movie m to file
void put(const Movie& m, std::ofstream& file) {
	//ADD CODE
	file << m.name << "\n" << "Year: " << m.year << "\tType: " << m.type << "\n\n";
}

// Write movie m to std::cout
void put(const Movie& m) {
	// ADD CODE
	std::cout << m.name << "\n" << "Year: " << m.year << "\tType: " << m.type << "\n\n";
}

// Return true, if m1's name is alphabetically larger than m2's name
// Otherwise, returns false
bool larger_than(const Movie& m1, const Movie& m2) {
	// ADD CODE
	std::string large_m1;
	std::string large_m2;
	
	for (char n : m1.name) {
		large_m1.push_back(towupper(n));
	}
	for (char n : m2.name) {
		large_m2.push_back(towupper(n));
	}

	return large_m1 > large_m2;
}
