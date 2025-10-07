#include <bits/stdc++.h>
#define PIE 3.14

using namespace std;

int area(int r){
    return PIE * (r * r);
}

int circumference(int r){
    return 2 * PIE * r;
}

int main(){
    int radius;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    cout<<"The area of the circle is: "<<area(radius)<<endl;
    cout<<"The circumference of the circle is: "<<circumference(radius)<<endl;
    return 0;
}