#ifndef INPUT_H
#define INPUT_H

#include <iostream>

void inputData(double& amount, std::string& fromCurrency, std::string& toCurrency) {
    std::cout << "Input $: ";
    std::cin >> amount;
std::cout << "Currency (USD, EUR, UAH): ";
std::cin >> fromCurrency;
std::cout << "Currency convert (USD, EUR, UAH): ";
std::cin >> toCurrency; 
}
#endif