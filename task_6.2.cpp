#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;
};

int main() {
    Book books[3];

    books[0].title  = "Halim";
    books[0].author = "Nemrah Ahmed";
    books[0].price  = 3000;

    books[1].title  = "Bismil";
    books[1].author = "Mehrunnisa Shahmeer";
    books[1].price  = 2500;

    books[2].title  = "Hum Kahan kay Sache The";
    books[2].author = "Umerah Ahmed";
    books[2].price  = 1000;

    for (int i = 0; i < 3; i++) {
        cout << books[i].title  << endl;
        cout << books[i].author << endl;
        cout << books[i].price  << endl;
        cout << endl;
    }

    return 0;
}