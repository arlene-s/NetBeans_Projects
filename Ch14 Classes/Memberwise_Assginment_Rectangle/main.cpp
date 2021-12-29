/* 
 * File:   main.cpp
 * Author: Arlene Sagaoinit
 * Created on November 17, 2021, 8:07 PM
 * Purpose: You can assign a class to another and it will have the contents of 
 *          that class
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int width;
        static int rects;   //Static member variable to hold num rectangles
    public:
        Rectangle(int len=0, int wid=0)
            {rects++;
             setLen(len);
             setWid(wid);}
        void setLen(int len)
            {length=len;}
        void setWid(int wid)
            {width=wid;}
        int getLen()
            {return length;}
        int getWid() const
            {return width;}
        int getArea() const
            {return length*width;}
        static int getRects()
            {return rects;}
};
int Rectangle::rects=0;

int main(int argc, char** argv) {
    Rectangle rect1(10,10);
    Rectangle rect2(20,20);
    
    cout<<"Rectangle 1's length and width: "<<rect1.getLen()
        <<" "<<rect1.getWid()<<endl;
    cout<<"Rectangle 1's area: "<<rect1.getArea()<<endl;
    cout<<"Rectangle 2's length and width: "<<rect2.getLen()
        <<" "<<rect2.getWid()<<endl;
    cout<<"Rectangle 2's area: "<<rect2.getArea()<<endl;
    
    cout<<endl;
    
    //Memberwise assignment, assign first rect contents to rect 2
    //Copy contents of rect1 to rect2
    rect2=rect1;
    
    //Display new length and width for rectangle 2
    cout<<"Rectangle 1's length and width: "<<rect1.getLen()
        <<" "<<rect1.getWid()<<endl;
    cout<<"Rectangle 1's area: "<<rect1.getArea()<<endl;
    cout<<"Rectangle 2's length and width: "<<rect2.getLen()
        <<" "<<rect2.getWid()<<endl;
    cout<<"Rectangle 2's area: "<<rect2.getArea()<<endl;
    
    cout<<endl;
    
    //Display number of rectangles created using static member function
    cout<<"Number of rectangles created: "<<Rectangle::getRects()<<endl;
    //Or display it using object
    cout<<"Number of rectangles created: "<<rect1.getRects()<<endl;

    return 0;
}

