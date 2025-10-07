#include <iostream>
using namespace std;
int main (){
    string fullname;
    int initialAmount,rate,time, interest;
    cout<< "Enter your full names: \n";
    getline(cin, fullname);
    cout<< "Enter the initial amount: \n";
    cin>>initialAmount;
    cout<<"Enter the interest rate: \n";
    cin>>rate;
    cout<<"Enter the time in years: \n";
    cin>>time;

    interest = (initialAmount * rate * time)/100;

    cout<<"Fullnames: "<<fullname <<endl;
    cout<<"Total interest to be paid: "<<interest<<endl;

  return 0;
}
