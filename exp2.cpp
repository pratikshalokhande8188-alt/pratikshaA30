
#include <iostream>
using namespace std;
class Rectangle {
private:
double length;
double width;
public:

Rectangle() {
length = 1;
width = 1;
}

Rectangle(double l, double w) {
length = l;
width = w;
}

double calculateArea() {
return length * width;
}

void display() {
cout << "Length: " << length << ", Width: " << width
<< ", Area: " << calculateArea() << endl;
}
};
int main() {

Rectangle r1;
cout << "Default Rectangle:\n";
r1.display();

Rectangle r2(5.5, 3.2);
cout << "\nCustom Rectangle:\n";
r2.display();
return 0;
}

