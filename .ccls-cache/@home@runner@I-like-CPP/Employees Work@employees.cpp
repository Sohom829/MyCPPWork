#include<iostream>
#include <stdio.h>
#include<dos.h>
using namespace std;
class Employee{
private:
char* emp_name;
int emp_join_year;
float emp_salary;

public:
Employee(char* _name, int _year, float _salary);
private:
int workedYear(void);
void printInfo(void);
};

Employee::Employee(char* _name, int _ year, float _salary) {
  emp_name = _name;
  emp_join_year = _year;
  emp_salary = _salary;

  printInfo();
}

int Employee::workedYear(void) {
  struct date current_date;
  int YearDifference;

  getdate(&current_date);
  YearDifference = current_date.da_year - emp_join_year;
  retrun(YearDifference);
} 

void Employee::printInfo(void) {
  cout << "Name            : "<<emp_name<<endl;
  cout << "Joined Date     : "<<emp_join_year<<endl;
  cout << "Salary          : "<<emp_salary<<endl;
  cout << "Worked          : "<<workedYear()<<endl;
}

int main(void) {
  clrscr();
  Employee newStaff("Arif", 2021, 69420)

}