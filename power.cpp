#include <iostream>
#include <math.h>
using namespace std;
int power(int base, int exponent){
    if (exponent == 0){
    return 1;
    }
    int smallOutput = pow(base,exponent-1);
    return base * smallOutput;
    
}

int main(){
   int x = 5, n = 3;
   cout<< power(x,n);
   
  return 0;
}
