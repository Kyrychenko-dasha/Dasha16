#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
double convertCurrency(double amount, const std::string& fromCurrency, const std::string& toCurrency) {
    double conversionRate = 1.0;
    if (fromCurrency == "USD" && toCurrency == "EUR") {
        conversionRate = 0.89;
    } else if (fromCurrency == "USD" && toCurrency == "UAH") {
        conversionRate = 41;
    } else if (fromCurrency == "EUR" && toCurrency == "USD") {
        conversionRate = 1.11;
    } else if (fromCurrency == "EUR" && toCurrency == "UAH") {
        conversionRate = 43;
    } else if (fromCurrency == "UAH" && toCurrency == "USD") {
        conversionRate = 0.025;
    } else if (fromCurrency == "UAH" && toCurrency == "EUR") {
        conversionRate = 0.02;
    } 
    return amount * conversionRate;
}

#endif