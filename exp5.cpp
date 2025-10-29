
#include <iostream>
using namespace std;
class Number {
private:
int value;
public:

Number(int v = 0) {
value = v;
}

Number operator++() {
value += 100;
return *this;
}

friend Number operator++(Number &n, int);

void display() {
cout << "Value: " << value << endl;
}
};

Number operator++(Number &n, int) {
Number temp = n;
n.value += 100;
return temp;
}
int main() {
Number num1(50), num2(200);
cout << "Original Values:\n";
num1.display();
num2.display();

++num1;
cout << "\nAfter prefix increment (++num1):\n";
num1.display();

num2++;
cout << "\nAfter postfix increment (num2++):\n";
num2.display();
return 0;
}

