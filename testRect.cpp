#include <iostream>
#include "rectangle.h"
using namespace std;

int main(){
    Rectangle rect;
    rect.setValues(10,20);
    int result = rect.area();
    cout<<result<<endl;
}