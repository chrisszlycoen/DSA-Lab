#include <bits/stdc++.h>
using namespace std;
 int sum(int n){
        if(n==1){
            return 1;
        }
        int smallestAnswer = sum(n-1);
        return n+ smallestAnswer;
    }
int main(){
    //int k = 60;
    //int *ptr = &k;
    //cout<<(*ptr)++ << " ";
    //int *q = ptr;
    //(*q)++;
    //cout<< k <<endl; 

    //int x =15;
    // int y = 23;
    // cout<<"x,y:"<<x<<" and "<<y<<endl;
    // cout<<"x,y"<<++x<<"and"<<y++<<endl;
    // cout<<"x="<<--x<<"and y="<<y--<<endl;
    // ++x;
    // y++;
    // cout<<"x="<<x<<" and y="<<y<<endl;
    // --x;
    // y--;
    // cout<<"x="<<x<<"and y="<<y<<endl;
    // return 0;

    // int arr[5] = {10,20,30,40,50};
    // for (auto i: arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<"The first element is: "<<arr[0]<<endl;
    // cout<<"The first element using pointer is: "<<*arr<<endl;

    // for(int i = 0;i<5;i++){
    //     cout<<*(arr+i)<<" ";
    // }

   int n = 10;
   cout<<sum(n);
    
}