#include <iostream>

#define PIE 3.14

int main(){
    using namespace std;

    double radius;
    cout<<"Please enter the radius"<<endl;
    cin>>radius;

    double area = PIE * (radius * radius);
    cout<< "The area of a circle is: "<<area<<endl;


    return 0;
}