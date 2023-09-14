// Saloni Joshi
// CPSC 121L-06
// 09-12-2023
// sjoshi270@csu.fullerton.edu
// sjoshi-png
//
// Lab 3-2

double MoneyMula(double hours, double wage) {
  double total_salary = 0.0;

  if (hours <= 40) {
    total_salary = hours * wage;
  } else if (hours <= 65) {
    total_salary = (wage * 40) + (hours - 40) * (wage * 1.5);
  } else {
    total_salary = (wage * 40) + (wage * 1.5 * 25) + (hours - 65) * (wage * 2);
  }

  return total_salary;
}