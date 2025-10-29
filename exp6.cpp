#include <iostream>
#include <iomanip> 
using namespace std;
class Time {
private:
    int hours;
    int minutes;

public:
    Time() : hours(0), minutes(0) {}

    friend istream& operator>>(istream& in, Time& t);

    friend ostream& operator<<(ostream& out, const Time& t);
};

istream& operator>>(std::istream& in, Time& t) {
    cout << "Enter hours: ";
    in >> t.hours;

    std::cout << "Enter minutes: ";
    in >> t.minutes;

    if (t.minutes >= 60) {
        t.hours += t.minutes / 60;
        t.minutes %= 60;
    }

    t.hours %= 24; 
    return in;
}

std::ostream& operator<<(std::ostream& out, const Time& t) {
    out << setw(2) << setfill('0') << t.hours << ":" << setw(2) << setfill('0') << t.minutes;
    return out;
}

int main() {
    Time t;
    cin >> t;
    cout << "Time entered: " << t << endl;
    return 0;
}

