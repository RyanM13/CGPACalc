// Include header files
#include "iostream"
#include "student.h"

// Do not have to put std:: before each print
using namespace std;

// Getting information required for GPA calculation
void dialog(Student &user) {
  // Establishing variables
  char sentinel = ' ';
  char grade = ' ';
  int hours = 0;

  cout << "Hello " << user.getName();
  cout << "\nPlease enter the information for each class individually";
  cout << "\n---------------------------------------------\n";

  // While loop runs until user decides to stop it
  while (sentinel != 'Y' && sentinel != 'y') {
    cout << "Hour count: ";
    cin >> hours;

    cout << "Please enter your letter grade: ";
    cin >> grade;

    // Method in Student.cpp to calculate the GPA quality
    user.CalculateQuality(hours, grade);

    cout << "Stop Y/N? ";
    cout << endl;
    cin >> sentinel;
  }
}

// Setting up the user with a name and GPA, sending them to the class side
void setup(Student &user, string name, int total_hours) {
  cout << "Please enter your name: ";
  getline(cin, name);
  cout << "Please enter your total GPA hours: ";
  cin >> total_hours;
  user.setName(name);
  user.setGPAHours(total_hours);
}

// Print statement that calls a method to calculate the new GPA
void print(Student user) {
  cout << "Your update cumulative GPA is: " << user.CalculateGPA();
}

// Declaring variables and calling functions
int main() {

  // Establishing variables
  string name;
  int total_hours;
  Student user;

  setup(user, name, total_hours);
  dialog(user);
  print(user);

  // return 0 to show success that the program ran
  return 0;
}
