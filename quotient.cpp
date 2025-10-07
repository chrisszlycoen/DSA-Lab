#include <iostream>

using namespace std;

void computeQuotient(int a, int b){
    int quotient = a / b;
    cout << "The quotient of " << a << " and " << b << " is " << quotient << endl;
    int remainder = a % b;
    cout << "The remainder of " << a << " and " << b << " is " << remainder << endl;
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    computeQuotient(a,b);
    return 0;
}