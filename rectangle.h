#ifndef Rectangel_H
#define Rectangle_H

class Rectangle{
    int width,length;
    public:
    Rectangle(){};
    Rectangle(int,int ){};
        void setValues(int w,int l){
            width = w;
            length = l;
        }
        int area(void){
            return (width*length);
        }
};
#endif