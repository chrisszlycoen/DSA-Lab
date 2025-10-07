#include <iostream>
using namespace std;

int sumOfDigits(int n){
    if (n == 0){
      return 0;
    }
    
    int smallOutput = sumOfDigits(n/10);
    
    int lastDigit = n%10;
    return lastDigit + smallOutput;
    
}

int main(){
int n = 12345;
cout << sumOfDigits(n);
return 0;
}

