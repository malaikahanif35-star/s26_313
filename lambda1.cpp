#include <iostream>
using namespace std;
int main (){
    int a = 6;
    int b = 8;
    auto add = [a , b](){
        int sum = a + b;
        return sum;
    };
    int result = add();
    cout << "The sum of a and b is: " << result << endl;

    auto product = [a , b](){
        int prod = a * b;
        return prod;
    };
    int result2 = product();
    cout << "The product of a and b is: " << result2 << endl;

    return 0;
}