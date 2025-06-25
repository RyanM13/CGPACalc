
#include <string>
#include <vector>
class Student {

private:
  int size = 0;
  std::string name = " ";
  double GPA = 0.00;
  std::vector<float> grades;

public:
  Student();
  Student(std::string name, double gpa);
  ~Student() {}

  void setGrades(std::vector<float> grades);
  void setName(std::string name);
  void setGPA(double GPA);
  double getGPA();
  double CalculateGPA();
  std::string getName();
};
