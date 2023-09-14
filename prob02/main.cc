// Saloni Joshi
// CPSC 121L-06
// 09-12-2023
// sjoshi270@csu.fullerton.edu
// sjoshi-png
//
// Lab 3-2

#include <iomanip>
#include <iostream>

#include "salary.h"

int main() {
  double wage{0.1};
  double hours(3.2);
  std::cout << "Hourly wage: ";
  std::cin >> wage;
  std::cout << "Hours worked: ";
  std::cin >> hours;
  if (hours < 0 || wage < 0) {
    std::cout << "Invalid Input\n";
  } else {
    double salary = MoneyMula(hours, wage);
    std::cout.precision(2);
    std::cout << "Total Salary Owed: $" << std::fixed << std::setprecision(2)
              << salary << "\n";
  }
  return 0;
}
