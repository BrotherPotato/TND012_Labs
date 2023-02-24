/*
 * TND012, Lab5
 * Author: Max Wiklundh
 *
 */

 /*Test data 1
 country X: 50 50 100 250 100 50 100 85 100 180 10 100 -1
 Sweden:    70 78 170 250 105 90 120 96 160 250 18 150 -1
 J       **
 F       ***
 M       *******
 A
 M       *
 J       ****

 J       **
 A       *
 S       ******
 O       *******
 N       *
 D       *****
 */

 /*Test data 2
 country X: 50 50 100 250 100 50 100 85 100 180 10 100 50 50 120 120 50 77 -1
 Sweden:    70 78 170 250 105 90 120 96 160 250 18 150 65 60 190 147 90 90 -1
 */

 /*Test data 3
 country X: 50 50 100 250 100 50 -1
 Sweden:    70 78 170 250 105 90 120 96 160 250 18 150 -1
 */

 /*Test data 4
 country X: 50 50 100 250 100 50 -1
 Sweden:    70 78 170 250 105 90 -1
 */

 // Try also your code with other test data

#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <cstdlib>  //rand, srand
#include <ctime>    //time(0)

using namespace std;

/******************************
 * Function declarations      *
 ******************************/

vector<int> read_seq();

vector<int> difference(const vector<int>& v1, const vector<int>& v2);

int count_stars(int n);

void display_graph_line(int n, char m);

void display_graph(const vector<int>& v3);

/******************************
 * MAIN                       *
 ******************************/
 // NOTE: main function body should NOT contain any loops

int main() {
	//int temp_read;
	vector<int> data_country_X;
	vector<int> data_country_Swe;
	vector<int> data_difference;
	// Step 1. Read input sequence data for country X
	cout << "Enter data for country X:\n";
	data_country_X = read_seq();
	// ADD CODE: function read_seq can be useful here

	// Step 2. Read input sequence data for Sweden
	cout << "\nEnter data for Sweden:\n";
	data_country_Swe = read_seq();
	// ADD CODE:  function read_seq can be useful here

	if (data_country_X.size() == data_country_Swe.size()) {
		// Step 3. Calculate the difference between country_X and Sweden
		// ADD CODE:  function difference can be useful here
		data_difference = difference(data_country_X, data_country_Swe);
		// Step 4. Display the histogram graph
		// ADD CODE: you decide which functions are useful to call here
		display_graph(data_difference);
	}
	else {
		cout << "Invalid input!!\n";
	}
}

/**************************************
 * Function definitions               *
 **************************************/

vector<int> read_seq() {
	int temp_read;
	vector<int> numbers;
	while (cin >> temp_read) {
		if (temp_read >= 0) {
			numbers.push_back(temp_read);
		}
		else {
			return numbers;
		}
	}
}

vector<int> difference(const vector<int>& v1, const vector<int>& v2) {
	vector<int> v3;
	int i = 0;
	int diff;
	for (int n : v1) {
		diff = (v2[i] - n);
		v3.push_back(diff);
		i++;
	}
	return v3;
}

int count_stars(int n) {
	int nr_stars;
	const int ten = 10;
	nr_stars = round(double(n) / ten);
	return nr_stars;
}

void display_graph_line(int n, char m) {
	int stars;
	stars = count_stars(n);
	cout << m << "\t";
	for (int i = 1; i <= stars; i++)
	{
		cout << "*";
	}
	cout << "\n";
}

void display_graph(const vector<int>& v3) {
	vector<char> months = { 'J', 'F', 'M', 'A', 'M', 'J', 'J', 'A', 'S', 'O', 'N', 'D' };
	for (int i = 0; i < v3.size(); i++)
	{
		display_graph_line(v3[i], months[(i % 12)]);
		if ((i % 6) == 5) {
			cout << "\n";
		}
	}
}