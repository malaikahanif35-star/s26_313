#include <iostream>
#include <string>
using namespace std;

struct Address {
    string street;
    string city;
    int postalCode;
};

class Hospital {
public:
    string name;
    Address location;

    Hospital(string n, Address a) {
        name = n;
        location = a;
    }

    void display() {
        cout << name << endl;
        cout << location.street << endl;
        cout << location.city << endl;
        cout << location.postalCode << endl;
    }
};

int main() {
    Address a;
    a.street = "123 Main Street";
    a.city = "Lahore";
    a.postalCode = 54000;

    Hospital h("City Hospital", a);
    h.display();

    return 0;
}