/* 
 * File:   main.cpp
 * Author: arlen
 * Created on November 17, 2021, 7:02 PM
 * Purpose: Static member variables
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class Tree{
    private:
        //Static member variables exist for the class as a whole, not just
        //an instance/object of the class
        //Will hold the amount of times an object from tree class was created
        static int objectCount;
    public:
        //Constructor
        Tree()
           {objectCount++;}//Increment every time object from tree class created
        static int getObjectCount()
           {return objectCount;}
};
//Initialize static variable outside of class
int Tree::objectCount=0;

int main(int argc, char** argv) {
    Tree oak;
    Tree elm;
    Tree pine;
    //Three objects created, objectCount=3
    int count=Tree::getObjectCount();
    
    //You could call it this way
    cout<<"We have "<<count<<" trees"<<endl;
    
    //Or this way
    cout<<"We have "<<Tree::getObjectCount()<<" trees"<<endl;

    return 0;
}

