
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Student {
public:
string name;
int marks;

Student(string n, int m) {
name = n;
marks = m;
}

void display() const {
cout << name << " - " << marks << endl;
}
};

bool sortByName(const Student &s1, const Student &s2) {
return s1.name < s2.name;
}

bool sortByMarks(const Student &s1, const Student &s2) {
return s1.marks > s2.marks;
}
int main() {
vector<Student> students;

students.push_back(Student("Ravi", 85));
students.push_back(Student("Anita", 92));
students.push_back(Student("Kunal", 78));
students.push_back(Student("Deepa", 88));
cout << "Original List:\n";
for (const auto &s : students) s.display();

sort(students.begin(), students.end(), sortByName);
cout << "\nSorted by Name (Alphabetical):\n";
for (const auto &s : students) s.display();

sort(students.begin(), students.end(), sortByMarks);
cout << "\nSorted by Marks (Descending):\n";
for (const auto &s : students) s.display();
return 0;
}

