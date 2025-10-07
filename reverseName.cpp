#include <bits/stdc++.h>

using namespace std;

void printReverse(const string& firstname, const string& lastname){
    cout <<"Name in reverse is: " <<lastname << " "<< firstname;
}

int main (){
    string firstname, lastname;
    cout<<"Input First Name: ";
    getline(cin,firstname);
    cout << "Input Last Name: ";
    getline(cin,lastname);
    printReverse(firstname,lastname);
    return 0;
}