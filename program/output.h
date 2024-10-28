#ifndef OUTPUT_H
#define OUTPUT_H
#include <iostream>
void printResult(double convertedAmount, const std::string& toCurrency) {
  std::cout << "Result: " << convertedAmount << " " << toCurrency << std::endl;
}
#endif