#include "iostream"
#include "student.h"
using namespace std;

void dialog(Student user) {

  cout << "Hello " << user.getName();
  cout << " please enter your current grades: ";
  getline(cin, user.setGrades(kko))
}
void setup(Student &user, string name, double GPA) {
  cout << "Please enter your name: \n";
  getline(cin, name);
  cout << "Please enter your GPA";
  cin >> GPA;
  user.setName(name);
  user.setGPA(GPA);
}

int main() {
  string name;
  double GPA;
  Student user;

  setup(user, name, GPA);
  dialog(user);

  return 0;
}
