#include <iostream>
using namespace std;
int multiply(const int &a, const int &b){
    int prod = a * b;
    return prod;
}
int main (){
    int a = 5;
    int b = 4;
    int result = multiply(a, b);
    cout << "The product of " << a << " and " << b << " is " << result << endl;
    
    return 0;
}