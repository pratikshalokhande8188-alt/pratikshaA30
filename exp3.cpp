
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
string name;
int age;
public:
void getPersonDetails() {
cout << "Enter Name: ";
getline(cin, name);
cout << "Enter Age: ";
cin >> age;
}
void showPersonDetails() {
cout << "Name: " << name << "\nAge: " << age << endl;
}
};

class Academic {
protected:
int rollNumber;
float marks[3];
public:
void getAcademicDetails() {
cout << "Enter Roll Number: ";
cin >> rollNumber;
for (int i = 0; i < 3; ++i) {
cout << "Enter marks for Subject " << (i + 1) << ": ";
cin >> marks[i];
}
}
void showAcademicDetails() {
cout << "Roll Number: " << rollNumber << endl;
for (int i = 0; i < 3; ++i) {
cout << "Marks in Subject " << (i + 1) << ": " << marks[i] << endl;
}
}
};

class Student : public Person, public Academic {
private:
float totalMarks;
float percentage;
public:
void calculateResult() {
totalMarks = marks[0] + marks[1] + marks[2];
percentage = totalMarks / 3.0;
}
void displayResult() {
showPersonDetails();
showAcademicDetails();
cout << "Total Marks: " << totalMarks << "\nPercentage: " << percentage << "%"
<< endl;
}
};
int main() {
Student s;
cin.ignore(); 
s.getPersonDetails();
s.getAcademicDetails();
s.calculateResult();
cout << "\n--- Student Record ---" << endl;
s.displayResult();
return 0;
}


