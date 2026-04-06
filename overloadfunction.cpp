#include <iostream>
using namespace std;

int area(int side) {
    int result = side * side;
    return result;
}

int area(int length, int width) {
    int result = length * width;
    return result;
}

double area(double radius) {
    double result = 3.14159 * radius * radius;
    return result;
}

int main() {
    cout << area(4)       << endl;
    cout << area(4, 5)    << endl;
    cout << area(3.0)     << endl;
    return 0;
}