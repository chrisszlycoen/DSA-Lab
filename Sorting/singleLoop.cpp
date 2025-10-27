#include <bits/stdc++.h>
using namespace std;

int fun1(int n ){
    int m = 0;

    for (int i  = 0; i < n; i++){
        m+=1;
    }
    return m;
}

int main(){
    cout<<"N = 100, Number of instruction 0(n): "<< ::fun1(100);
}