#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a,b,hypo;

    cout<< "Please enter the value of a: "<<endl;
    cin>>a;
    cout<< "Please enter the value of b: "<<endl;
    cin>>b;

    hypo = sqrt(pow(a,2) + pow(b,2));

    cout<< "The hypothenuse is: "<<hypo<<endl;
}