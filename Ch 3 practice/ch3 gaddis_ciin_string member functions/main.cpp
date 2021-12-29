/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 * Purpose: cin.get(), getline(cin, variable_name), cin.ignore(), string.length()
 * Created on July 13, 2021, 3:45 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //Use getline(cin, variable_name) when you want to store a whole string with whitespaces 
    
    string name;
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Your name is: " << name << endl;
    //cin.ignore();           //Use cin.ignore to ignore the ending newline character
    
    cout << "Enter your real name: ";
    getline(cin, name);     //if new line character not ignored, ends up here stored in name
    cout << "Your real name is: " << name << endl;
    
    //same with cin.get() except it only accepts one character 
    //including any whitespace or newline character
    cout << "Would you like to continue? Please press enter ";
    cin.get();
    
    cout << "Enter your crushes name: ";
    getline(cin, name);
    cout << "Your crushes name is: " << name << endl;
    
    //cin.ignore(); You don't need ignore with getlines
    
    cout << "Enter your best friends name: ";
    getline(cin, name);
    cout << "Your best friends name is: " << name << endl;
    
    
    //You can get the length of any string with length string member function
    short length;
    length = name.length();
    cout << "The length of your friends full name is: " << length - 1<< endl;
    
    //You can combine strings together with '+'
    string title1, title2;
    cout << "Enter a cool first name with a space after: ";
    getline(cin, title1);
    cout << "Enter a cool last name: ";
    cin >> title2;
    cout << "Your cool name is: " << title1 + title2;
    
    
    
    
    return 0;
}

