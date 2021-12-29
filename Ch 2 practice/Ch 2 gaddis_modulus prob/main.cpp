/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 * Purpose: Modulus operator can be used to extract right most digits in a value
 * Created on July 7, 2021, 10:44 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    short num, val1, val2, val3;
    num = 12543;
    
    val1 = num % 10;
    val2 = num % 100;
    val3 = num % 1000;
    
    cout << "Right most digit of " << num << " is " << val1 << endl;
    cout << "Right most two digits: " << val2 << endl;
    cout << "Right most three digits: " << val3 << endl;
    
    return 0;
}

