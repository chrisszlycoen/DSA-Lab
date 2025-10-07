#include <iostream>

using namespace std;

int farhenheit(int celsius){
    return (celsius * 9/5) + 32;
}

int main(){
    int celcius;
    cout<<"Enter the temperature in celcius: ";
    cin>>celcius;
    cout<<"The temperature in farhenheit is: "<<farhenheit(celcius)<<endl;
}