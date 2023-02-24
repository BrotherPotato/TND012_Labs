/* 
 * TND012, Lab4: program to find prime numbers
 * Author: Max Wiklundh
 * Let user input a option
 * Access functions depending on option
 * Let user use functions until the exit option is chosen
 */

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>
#include <vector>

using namespace std;

// ADD any needed functions here
void display_menu();

bool test_prime(int n);

int next_prime(int n);

int previous_prime(int n);

int display_primes(int n);

int main() {
	constexpr int Exit = 5;
	int option = 0;
	// loop while exit option is not chosen
	do {
		// Display the menu
		display_menu();
		// Read user option
		cin >> option;
		// Handle user option, clear output
		system("CLS");
		int inp_nr;
		
		if (option > 5 || option < 1) {
			cout << "Wrong number";
			option = 6;
		}
		
		// go through the different options
		switch (option) {
		case 1:
			// call test prime
			cout << "CASE 1\nTest a number (if it is a prime):";
			cin >> inp_nr;
			if (test_prime(inp_nr) && inp_nr >= 0) {
				cout << inp_nr << " is a prime number\n";
			}
			else if (inp_nr >= 0) {
				cout << inp_nr << " is not a prime number\n";
			}
			else {
				cout << "Enter a number larger or equal to 0\n";
			}
			break;
		case 2:
			//call Next prime
			cout << "CASE 2\nNext prime? ";
			cin >> inp_nr;
			if (next_prime(inp_nr) >= 0) {
				cout << "The next prime of " << inp_nr << " is " << next_prime(inp_nr) << "\n";
			}
			else {
				cout << "Enter a number larger or equal to 0\n";
			}
			break;
		case 3:
			//call Previous prime
			cout << "CASE 3\nPrevious prime? ";
			cin >> inp_nr;
			if (previous_prime(inp_nr) >= 2) {
				cout << "Previous prime of " << inp_nr << " is " << previous_prime(inp_nr) << "\n";
			}
			else {
				cout << "There is no previous prime number";
			}
			break;
		case 4:
			//call Display Primes
			cout << "CASE 4\nDisplay primes up to, N? ";
			cin >> inp_nr;
			if (inp_nr >= 0) {
				display_primes(inp_nr);
			}
			else {
				cout << "Enter a number larger or equal to 0\n";
			}
			break;
		case 6:
			break;
		}
		cout << "\n";

	} while (option != Exit);
}

// ADD any needed functions here
// display the menu
void display_menu() {
	std::cout << "*****************\n";
	std::cout << "1. Test prime\n2. Next prime\n3. Previous prime\n4. Display primes\n5. Exit";
	std::cout << "\n*****************\n";
}
// test if the given number is a prime
bool test_prime(int n) {
	bool p_found = true;
	if (n >= 2) {
		for (int i = 2; i <= (n / 2); i++)
		{
			if (n % i == 0) {
				p_found = false;
			}
		}
	}
	else {
		p_found = false;
	}
	return p_found;
}
// test every number larger than n until a prime is found
int next_prime(int n) {
	bool p_found = false;
	while (!p_found) {
		if (test_prime(n)) {
			p_found = true;
			return n;
		}
		n++;
	}
}
// test every number smaller than n until a prime is found
int previous_prime(int n) {
	bool p_found = false;
	while (!p_found && n >= 2) {
		if (test_prime(n)) {
			p_found = true;
			return n;
		}
		n--;
	}
}
// display all primes between 1 and any given number larger than 0
int display_primes(int n) {
	bool p_found = false;
	for (int i = 1; i <= n; i++) {
		if (test_prime(i) && !p_found) {
			p_found = true;
			cout << "Primes in [1," << n << "]\n";
			i = 0;
		}
		if (test_prime(i) && p_found) {
			cout << i << " ";
		}
	}
	if (!p_found) {
		cout << "There are no prime numbers";
	}
	return n;
}