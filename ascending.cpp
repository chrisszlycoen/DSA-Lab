#include <bits/stdc++.h>
using namespace std;

int arrange(int a[], int n){
    int temp;
    for( int i = 0; i < n - 1; i++){
        for (int j = 1 ; j < n; j++){
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
int main(){
    int n = 3;
    cout<<"Enter the numbers: ";
    int array[n];

    for (int i = 0; i < n; i++){
        cin>>array[i];
    }
    arrange(array, n);
    return 0;
}