#include <iostream>
#include <string>
using namespace std;

void printType(int x) {
    cout << x << " is an int" << endl;
}

void printType(double x) {
    cout << x << " is a double" << endl;
}

void printType(char x) {
    cout << x << " is a char" << endl;
}

void printType(string x) {
    cout << x << " is a string" << endl;
}

int main() {
    printType(5);
    printType(3.14);
    printType('M');
    printType("hello");
    return 0;
}