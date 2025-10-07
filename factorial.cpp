#include <iostream>
using namespace std;

int fact(int n){
  cout<< n<<endl;
  if(n<0) return -1;
  if(n==0) return 1;
  
  int smallAnswer = fact(n-1);
  return n * smallAnswer;
  
}

int main(){
  int n = 5;
  int answer = fact(n);
  cout << answer<<endl;
  return 0;
}
