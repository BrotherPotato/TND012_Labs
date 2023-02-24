/*
 * TND012, Lab1: exercise 1
 * Author: Max Wiklundh
 * Program to convert currency from Euro to SEK
 * Input: a quantity of Euro and exchange rate Euro to SEK
 * Output: a quantity of Euro converted to SEK
 * 
 */

#include <iostream>  //std::cin, std::cout

int main() {
    // Define variables
    double money_Euro = 0.0;
    constexpr double euro_exchange_rate = 2;

    // Read how much money in euro
    std::cout << "Please enter the amount of Euro you would like to convert to SEK\n";
    std::cout << "Euro: ";
    std::cin >> money_Euro;
    // expected a ';'  

    // If you want the user to input the exchange rate you could do the following
    /*
    * std::cout << "Please enter the exchange rate\n";
    * std::cout << "exchange rate (euro to sek): ";
    * std::cin >> euro_exchange_rate;
    */

    // Convert from Euro to SEK
    double money_SEK = euro_exchange_rate * money_Euro;
    // identifier "money_SEK" is undefined

    // Display the result: euro -> SEK
    std::cout << money_Euro << " Euro = " << money_SEK << " SEK\n";

    // ADD CODE for  Exercise 1.5 below
    constexpr double sek_exchange_rate = 0.5;
    std::cout << "Please enter the amount of SEK you would like to convert to Euro\n";
    std::cout << "SEK: ";
    std::cin >> money_SEK;

    // Again, If you want the user to input the exchange rate you could do the following
    /*
    * std::cout << "Please enter the exchange rate\n";
    * std::cout << "exchange rate (sek to euro): ";
    * std::cin >> sek_exchange_rate;
    */

    money_Euro = sek_exchange_rate * money_SEK;
    std::cout << money_SEK << " SEK = " << money_Euro << " Euro\n";
}
