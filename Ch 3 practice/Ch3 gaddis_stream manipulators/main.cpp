/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 * Purpose: setw(), setprecision(), fixed, showpoint
 * Created on July 12, 2021, 10:31 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    //setw()
    string first, second, third, fourth;
    first = "Arlene";
    second = "Cecilia";
    third = "Maddie";
    fourth = "Angel";
    
    //10 spaces for each name
    cout << "Right justified setw(): " << endl;
    cout << setw(10) << first << endl
         << setw(10) << second << endl
         << setw(10) << third << endl
         << setw(10) << fourth << endl;
    
    //left justified
    cout << endl;
    cout << "Left Justified setw(): " << endl;
    cout << left
         << setw(10) << first 
         << setw(10) << second 
         << setw(10) << third
         << setw(10) << fourth << endl;
    
    //setprecision()
    cout << endl;
    float x = 54234.43;
    
    cout << "Setprecision for 54234.43: " << endl;
    cout << "3 sig figs: " << setprecision(3) << x << endl; //3 sig figs (e notation)
    cout << "5 sig figs: " << setprecision(5) << x << endl; //5 sig figs
    cout << "6 sig figs: " << setprecision(6) << x << endl; //6 sig figs
    cout << "8 sig figs: " << setprecision(8) << x << endl; //8 sig figs (does nothing)
    
    //fixed
    cout << endl;
    cout << "Fixed decimal notation: " << endl;
    cout << setprecision(0) << fixed << x << endl; //no numbers after decimal
    cout << setprecision(1) << fixed << x << endl; //1 digit after decimal
    cout << setprecision(3) << fixed << x << endl; //Gives a trailing zero but idk why
    cout << setprecision(4) << fixed << x << endl; //Weird numbers after decimal
    //fixed shouldn't be used to pad a number with zeros, doesn't always give trailing zeros
    
    //Showpoint
    float y = 5.2;
    float z = 542.45;
    cout << endl;
    cout << "Showpoint: " << endl;
    cout << setprecision(4) << fixed << showpoint << y << endl; //2 zeros at the end
    cout << setprecision(4) << fixed << showpoint << z;
    
    return 0;
}

