#include <iostream>
using namespace std;

class Box {
public:
    int length;
    int width;
    int height;
};

Box largerBox(Box a, Box b) {
    int volumeA = a.length * a.width * a.height;
    int volumeB = b.length * b.width * b.height;

    if (volumeA >= volumeB) {
        return a;
    } else {
        return b;
    }
}

int main() {
    Box a;
    a.length = 3;
    a.width = 3;
    a.height = 3;

    Box b;
    b.length = 4;
    b.width = 4;
    b.height = 2;

    Box larger = largerBox(a, b);

    cout << larger.length << endl;
    cout << larger.width  << endl;
    cout << larger.height << endl;

    return 0;
}