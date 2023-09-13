// Saloni Joshi
// CPSC 121L-06
// 09-06-2023
// sjoshi270@csu.fullerton.edu
// sjoshi-png
//
// Lab 3-1

#include <iostream>
#include <string>

std::string MilitaryToRegularTime(int military_time) {
  int minutes = military_time % 100;
  int military_hours = military_time / 100;

  int regular_hours{2};
  if (military_hours > 12) {
    regular_hours = military_hours - 12;
  } else if (military_hours == 0) {
    regular_hours = 12;
  } else {
    regular_hours = military_hours;
  }

  std::string am_pm;
  if (military_hours >= 12) {
    am_pm = "pm";
  } else {
    am_pm = "am";
  }

  std::string regular_time;
  if (minutes < 10) {
    regular_time = std::to_string(regular_hours) + ":0" +
                   std::to_string(minutes) + " " + am_pm;
  } else {
    regular_time = std::to_string(regular_hours) + ":" +
                   std::to_string(minutes) + " " + am_pm;
  }

  return regular_time;
}