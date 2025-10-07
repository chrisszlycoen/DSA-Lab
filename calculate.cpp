#include <iostream>
#include "calculator.h"

using namespace std;
using namespace calculator;

int main(){
    int add = addition(4,5);
    int multi = multiplication(4,5);
    int pow = power(2,3);

    cout<<"The power is: "<<pow<<endl;
}