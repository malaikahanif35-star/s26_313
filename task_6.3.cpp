#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;
};

void compare(Rectangle a, Rectangle b) {
    int areaA = a.length * a.width;
    int areaB = b.length * b.width;

    if (areaA > areaB) {
        cout << "Rectangle A is larger than B." << endl;
    } else if (areaB > areaA) {
        cout << "Rectangle B is larger than A." << endl;
    } else {
        cout << "Both are equal!" << endl;
    }
}

int main() {
    Rectangle a;
    a.length = 5;
    a.width  = 3;

    Rectangle b;
    b.length = 4;
    b.width  = 4;

    compare(a, b);
    return 0;
}