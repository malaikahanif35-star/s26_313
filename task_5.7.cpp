#include <iostream>
using namespace std;
int main (){
    auto increment = [&](){
        static int initial = 1001;
        ++initial;
        cout << "Incremented value is: " << initial << endl;
    };
    increment();
    increment();
    increment();
    increment();
    increment();
    return 0;
}