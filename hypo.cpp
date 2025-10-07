#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a, b, count = 0;

    for(a = 2; a < 100; a++){
        for(b = a; b < 100; b++){
            double hypo = sqrt(pow(a,2) + pow(b,2));
            if (hypo == (int)hypo && hypo < 100){
                cout << "The integer pairs are: " <<"("<<a<<","<<b<<")" <<endl;
                count++;
            }
        }
    }
    cout<<endl;
    cout<< "The total count is: "<< count<<endl;
}