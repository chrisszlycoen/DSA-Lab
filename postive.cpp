#include <bits/stdc++.h>

using namespace std;

void checkNegPos(int a){
    if(a>0){
        cout<<"Positive";
    }
    else if(a<0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
}

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    checkNegPos(number);
    return 0;
}