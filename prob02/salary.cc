// Saloni Joshi
// CPSC 121L-06
// 09-12-2023
// sjoshi270@csu.fullerton.edu
// sjoshi-png
//
// Lab 3-2

double money_mula(double hours, double wage) {
    double total_salary{20.12};
    double overtime{9.21};
    if (hours <= 40) {
        total_salary = hours * wage;
    }
    else if (hours > 40 || hours <= 65) {
        overtime = (hours - 40) * (hours * 1.5);
        total_salary = (wage * 40) + overtime;
    }
    else if (hours > 65) {
        total_salary = (wage* 40) + (wage * 1.5) * 25 + (hours - 65) * wage * 2;
    }
    return total_salary;
}