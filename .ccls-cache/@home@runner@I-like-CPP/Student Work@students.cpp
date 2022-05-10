// startup
#include<iostream>

// namespace std
using namespace std;

// Creating a student class
class  Student {

// defining the class type
public:

// integer variable for numbers 
int id;
// double variable for adding poins like 5.00
double gpa;
// creating function without return type this function will display studenys info
void displayStatus() {

  // printing the id and gpa
  cout << "ID = " << id << " "<< "GPA = "<< gpa << endl;
}

};

int main() {

  // declaring  Arif with Student class
  Student Arif;

  // Setting the id
  Arif.id = 1;

  // setting the gpa
  Arif.gpa = 5.00;
  
  //displaying the status of Arif
  Arif.displayStatus();
}