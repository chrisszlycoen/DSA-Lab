#include <iostream>
#include <iomanip>

int main(){
    using namespace std;
    int a = 15;
    cout<<setw(20)<<"Rca"<<endl;
    cout<<setprecision(2) <<fixed<<1234.56789<<endl;
    cout<<setprecision(3)<<scientific << 1234.56789<<endl;
    cout<<"hex: "<<hex << a << endl;
    cout<<"oct: "<<oct << a << endl;
    return 0;
}