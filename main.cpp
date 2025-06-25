#include "iostream"
#include "student.h"
using namespace std;

// Storing into a vector and sending that to the class
void dialog(Student user) {

  cout << "Hello " << user.getName();
  cout << " please enter your current grades: ";
}

// Setting up the user with a name and GPA, sending them to the class side
void setup(Student &user, string name, double GPA) {
  cout << "Please enter your name: \n";
  getline(cin, name);
  cout << "Please enter your GPA";
  cin >> GPA;
  user.setName(name);
  user.setGPA(GPA);
}

// Declaring variables and calling functions
int main() {

  string name;
  double GPA;
  Student user;

  setup(user, name, GPA);
  dialog(user);

  return 0;
}
