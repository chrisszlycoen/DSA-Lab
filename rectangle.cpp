#include <iostream>
using namespace std;

class Rectangle{
    public:
        int length;
        int width;
        Rectangle(){};

        Rectangle(int l, int w){
            length = l;
            width = w;
        }
        int area(){
            return length*width;
        }
        int perimeter(){
            return 2*(length+width);
        }
}rectangle1,rectangle2;

int main(){
    rectangle1.length = 10;
    rectangle1.width = 20;
    rectangle2 = {20,30};
    
    cout << "Area of rectangle 1: " << rectangle1.area() << endl;
    cout << "Perimeter of rectangle 1: " << rectangle1.perimeter() << endl;
    cout << "Area of rectangle 2: " << rectangle2.area() << endl;
    cout << "Perimeter of rectangle 2: " << rectangle2.perimeter() << endl;
    return 0;
}