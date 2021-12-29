/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 *
 * Created on August 29, 2021, 12:54 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char c = 4;
    char a[c]={10,20,30,40,50};
    
    cout<<a[c]<< endl;
    //should be 50;
    //might be something else
    //prints 2
    
    cout<<static_cast<int>(a[c])<<endl;
    //Should be 50 now
    
    /*c =66;
    cout<<c<<endl;
    //When char variable is assigned number
    //will display the character equivalent
    
    //When static casted, will display integer equivalent
    cout<<static_cast<int>(c)<<endl;
    
    cout<<c*2<<endl;
    //If program using integer equivalent, will be 132
    //If character equivalent, error?
    
    //RESULT: USES INTEGER EQUIVALENT
    
    cout<<a[c/14]<<endl;
    //should print a[4] = 50;
    //Actually prints 2. integer equivalent of char 50
    //so static cast?
    
    cout<<static_cast<int>(a[c/14])<<endl;
    //should print 50
    //Prints 50
    
    c=4;
    cout<<a[c]<<endl;
    //Should be 50
    //Might be 2
    //Is 2
    
    cout<<static_cast<int>(a[c])<<endl;
    //Should be 50 now
    */
    
    //When using a character number
    //To use its integer equivalent, subtract 48
    
    char b;
    
    cout<<"Enter a number: ";
    cin>>b;
    cout<<"b: " << b << endl;
    
    
    
    
    return 0;
}

