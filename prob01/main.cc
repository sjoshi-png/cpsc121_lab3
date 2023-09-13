// Saloni Joshi
// CPSC 121L-06
// 09-06-2023
// sjoshi270@csu.fullerton.edu
// sjoshi-png
//
// Lab 3-1

#include <iostream>
#include <string>

#include "time_converter.h"

int main() {
  int military_time = 0;
  std::cout << "Please enter the time in military time: ";
  std::cin >> military_time;

  std::string regular_time = MilitaryToRegularTime(military_time);

  std::cout << "The equivalent regular time is: " << regular_time << "\n";
  return 0;
}
