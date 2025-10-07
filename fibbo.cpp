#include <iostream>
using namespace std;

int fibbo(int n){

  if(n == 0)return 0;
  if (n == 1) return 1;
  
int smallOutput1 = fibbo(n-1);
int smallOutput2 = fibbo(n - 2);
  return smallOutput1 + smallOutput2;
}

int main(){
int n = 5; 
 int result = fibbo(n);
cout << "The fibonacci of "<< n<< " is "<< result <<endl;

}
