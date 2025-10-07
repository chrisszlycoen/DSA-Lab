#include <iostream>
using namespace std;
    namespace rca{
       int num = 80;
       int value(){
        return num;
      }
      }
    namespace coding {
      int num = 30;
      void value(){
        cout<< "The number of students is: "<< num;
      }
    }
int num = 240;      
  
int main (){
  int num = 10;
  cout<< "RCA: "<<rca::num<<endl;
  cout<< "coding: "<<coding::num<<endl;
  cout<< "Global: "<<::num<<endl;
  cout<< "Local: "<<num<<endl;
  coding::value();cout<<endl;
  cout<<"Function rca: "<<rca::value();
  
  return 0;
}

