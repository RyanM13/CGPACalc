#include "student.h"
#include <numeric>
#include <string>
#include <vector>

Student::Student() {
  name = "Jane Doe";
  GPA = 3.75;
}
Student::Student(std::string name, double gpa) {
  this->name = name;
  this->GPA = gpa;
}

void Student::setGrades(std::vector<float> user_grades) {
  grades = user_grades;
}

double Student::CalculateGPA() {
  if (grades.empty())
    return 0.0;

  double sum;
  sum = std::accumulate(grades.begin(), grades.end(), 0.0);
  double newGPA = sum / grades.size();

  return newGPA;
}

void Student::setName(std::string name) { this->name = name; }

void Student::setGPA(double GPA) { this->GPA = GPA; }

std::string Student::getName() { return name; }

double Student::getGPA() { return GPA; }
