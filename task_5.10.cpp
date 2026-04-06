#include <iostream>
#include<cmath>
using namespace std;
double power(int base,int exponent){
    return pow(base,exponent);
}
int main() {
    cout << "2 raised to power 8 = " << power(2, 8) << endl;
    cout << "3 raised to power 4 = " << power(3, 4) << endl;
    return 0;
}