// Include header files
#include "student.h"

// Needed for std::toupper
#include <cctype>
#include <iostream>
#include <string>

// Default constructor
Student::Student() {
  name = "Jane Doe";
  total_hours = 18;
}

// Parameterized constructor
Student::Student(std::string name, int total_hours) {
  this->name = name;
  this->total_hours = total_hours;
}

// Calcualating GPA taking quality points and dividing by total GPA hours
float Student::CalculateGPA() { return update / total_hours; }

// Caclulating quality points
void Student::CalculateQuality(int hours, char grade) {
  // Takes the char "grade" and changes it to uppercase
  grade = std::toupper(grade);

  /* Switch statement to calculate quality points per GPA hour
   Using a switch statment but there is probably a better way to do this.
   need to think about it a little more*/

  switch (grade) {
  case 'A':
    update += 4.0 * hours;
    break;
  case 'B':
    update += 3.0 * hours;
    break;
  case 'C':
    update += 2.0 * hours;
    break;
  case 'D':
    update += 1.0 * hours;
    break;
  case 'F':
  default:
    update += 0.0 * hours;
    break;
  }

  return;
}

// Setting private variable to main variable
void Student::setGPAHours(int total_hours) { this->total_hours = total_hours; }
// Setting private variable to main variable
void Student::setName(std::string name) { this->name = name; }

// Gets name from private variable
std::string Student::getName() { return name; }
