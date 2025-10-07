#include <iostream>
#include <math.h>

using namespace std;

int main (){

    int a, b;
    int options;
    char cont;

    do
    {
    cout<< "1.Add"<<endl;   
    cout<< "2.Subtract"<<endl;
    cout<< "3.Multiply"<<endl;
    cout<< "4.Divide"<<endl;
    cout<< "5.Modulus"<<endl;

    cout<< "Enter your choice: ";
    cin>>options;
    switch (options)
    {
    case 1:{
        cout<< "Enter two numbers: ";
        cin>>a>>b;
        int Add = a + b;
        cout<<"Result: "<<Add<<endl;
        break;

    }

    case 2:{
        cout<< "Enter two numbers: ";
        cin>>a>>b;
        int Sub = a - b;
        cout<<"Result: "<<Sub<<endl;
        break;
    }
        

    case 3:{
        cout<< "Enter two numbers: ";
        cin>>a>>b;
        int Multi = a * b;
        cout<<"Result: "<<Multi<<endl;
        break;
    }
       

    case 4:{
        cout << "Enter two numbers: ";
        cin>>a>>b;
        float Div = a / b;
        cout<<"Result: "<<Div<<endl;
        break;
    }
        
    case 5:{
        cout<< "Enter two numbers: ";
        cin>>a>>b;
        float Mod = a % b;
        cout<<"Result: "<<Mod<<endl;
        break;
    }
        
    
    default:{
        cout<< "Your choice is not mentioned";
        break;
    }
    }
    cout<< "continue? ";
    cin >> cont;
    } while (cont == 'y' ||cont == 'Y');
    cout<< "Exiting......."<<endl;
    
    

    return 0;
}