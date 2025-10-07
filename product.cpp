#include <iostream>

using namespace std;

int main(){
    int product = 1;
    for (int i = 1; i < 20; i++){
        if ( i % 2 == 1){
            product *= i;
        }
    }
    cout<<"The product of all odd numbers less than 20 is: "<<product<<endl;
    return 0;
}