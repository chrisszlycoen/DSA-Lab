#include <bits/stdc++.h>
using namespace std;

int volume(int side){
    return side*side*side;
}

int main(){
    int side;
    cout << "Enter the side of the cube: ";
    cin >> side;
    cout << "The volume of the cube is: "<< volume(side) <<endl;
}