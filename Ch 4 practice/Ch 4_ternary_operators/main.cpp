/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Arlene Sagaoinit
 * Purpose: use conditional expressions like if/else statements
 * Created on August 18, 2021, 5:16 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    bool hot;
    float temp;
    
    cout << "Enter the temperature outside right now:";
    cin >> temp;
    
    //Ternary operator 
    //Format: 
    //1st expression ? 2nd expression : 3rd expression;
    
    //Works exactly like
    //if (1st expression)
    //    2nd expression;
    //else
    //    3rd expression;
    
    hot = temp > 90? 1 : 0;
    
    cout << (hot? "It is hot outside" : "it is cool outside");
    
    //needs parentheses in cout statement when using ternary operators
    //otherwise it would just print out the value before ?
    
    string str1 = "Arlene";
    string str2 = "Kian";
    
    cout << endl
         << (str1 < str2? "Arlene is less than kian": "Arlene is greater than kian");

    return 0;
}

