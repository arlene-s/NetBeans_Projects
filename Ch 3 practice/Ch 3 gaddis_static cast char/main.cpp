/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 * Purpose: using static cast conversion to convert an integer to a character
 * and a character to an integer
 * Created on July 11, 2021, 12:29 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int num = 66;
    char letter = 'B';
    
    //Convert integer to its equivalent character
    cout << "Integer: " << num << endl;
    cout << "Character: " << static_cast<char>(num) << endl;
    cout << endl;
    
    //Convert character to its equivalent integer
    cout << "Character: " << letter << endl;
    cout << "Integer: " << static_cast<int>(letter) << endl;
    cout << endl;
    
    //Cannot convert integer data type to store a char
    //Will stay an integer
    num = static_cast<char>(num);
    cout << num << endl;
    
    //Same applies when trying to convert char to integer data type
    //Not possible
    letter = static_cast<int>(letter);
    cout << letter << endl;
    
    char charNum = '2';
    cout<<"Character: "<<charNum << endl;
    cout<<"Integer: "<<charNum-48<<endl;
    cout<<"charNum + 2: "<<charNum+2<<endl;
    //50+2=52 prints 52
    cout<<"charNum-48+2: "<<charNum-48+2<<endl;
    
    //Can convert only to display, not change permanently
    return 0;
}

