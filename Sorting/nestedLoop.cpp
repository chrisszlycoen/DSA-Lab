#include <bits/stdc++.h>

using namespace std;

int fun3(int n){
    int i, k, m =0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            m+=1;
        }
    }
    return m;
}

int main(){
    cout<<"N = 100, Number of instruction O(n^2): "<< fun3(100);
}