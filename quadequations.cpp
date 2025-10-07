#include <iostream>
#include <math.h>

using namespace std;

int main (){

    int a, b, c;
    double determinant, root1, root2;
    cout<< "Enter the value of a, b, c: "<<endl;
    cin>>a>>b>>c;
    determinant = pow(b,2) - 4*a*c;

    if(determinant > 0){    
    root1 = (-b + sqrt(determinant))/(2*a);
    root2 = (-b - sqrt(determinant))/(2*a);
    cout<<"The roots are: "<<root1<<" and "<<root2<<endl;
    }
    
    else if (determinant == 0){
    root1 = -b/(2*a);
    cout<<"one root: "<<root1<<endl;
    }
    
    else if (determinant < 0){
    cout<<"No real roots"<<endl;
    }
    return 0;

}