#include<iostream>
using namespace std;

class  Student {
public:
int id;
double gpa;
void displayStatus() {
  cout << "ID = " << id << " "<< "GPA = "<< gpa << endl;
}

};

int main() {
  Student Arif;

  Arif.id = 1;
  Arif.gpa = 5.00;

  Arif.displayStatus();
}