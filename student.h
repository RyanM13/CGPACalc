// including header files
#include <string>
// Creating class Student
class Student {

  // Establishing private variables
private:
  std::string name;
  double update;
  int total_hours;

  // Establishing public methods.
public:
  Student();
  Student(std::string name, int total_hours);
  ~Student() {}

  void setName(std::string name);
  void setGPAHours(int total_hours);
  float CalculateGPA();
  void CalculateQuality(int, char);
  std::string getName();
};
