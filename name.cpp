#include <iostream>
using namespace std;

int main(){
  string firstname, lastname, fullname;
  cout<<"Enter your firstname:\n";
  getline(cin,firstname);
  cout<<"Enter the lastname\n";
  cin>>lastname;
  fullname= firstname +" "+ lastname;
  cout<<"Your name is: "<< fullname;
  
  return 0;
  
}
