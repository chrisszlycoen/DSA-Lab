#include <iostream>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i * i<=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n = 100;
    int product = 1;
    for(int i = 2; i <= n; i++){
        if (isPrime(i)){
            product *= i;
            cout<<i<<" "<<endl;
        }
    }
    cout<<"The product of all prime numbers less than 100 is: "<<product<<endl;
    return 0;
}