#include <iostream>
using namespace std;
int main (){
    
    auto counter = [&](){
        static int count = 1;
        count++;
       cout << "Counter is :" << count << endl;   
    };
    counter();
    counter();
    counter();

     return 0;
}