#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);

    int age;
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Hello " << name << ", You are " << age << " year/s old!" << endl;

    time_t now = time(0);
    tm* ltm = localtime(&now);
    int currentYear = 1900 + ltm->tm_year;

    int yearTurning60 = currentYear + (60 - age);

    if (age < 60) {
        cout << "You will turn 60 years old in the year " << yearTurning60 << "." << endl;
    } else if (age > 60) {
        cout << "You're older than 60 years old." << endl;
    } else {
        cout << "You've already reached 60 years of age." << endl;
    }

    return 0;
}
