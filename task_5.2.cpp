#include <iostream>
using namespace std;

int swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return 0;
}
int main (){
    int a = 20;
    int b = 54;
    cout << "The values before swapping are:" << a << " and " << b << endl;
    swap(a, b);
    cout << "The values after swapping are:" << a << " and "<< b << endl;

    return 0;
}