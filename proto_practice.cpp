#include <iostream>
using namespace std;

int square(int x){
    int sq = x * x;
    return sq;
}
int main(){
    int dig = 7;
    int result;
    result = square(dig);
    cout << "The square of " << dig << " is " << result << endl;

    return 0;
}