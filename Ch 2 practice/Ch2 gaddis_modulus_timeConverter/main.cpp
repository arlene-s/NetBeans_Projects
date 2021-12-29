/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 * Purpose: convert time in seconds to minutes and hours
 * Created on July 7, 2021, 10:59 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned int totSeconds;
    unsigned int seconds;
    unsigned int hours;
    unsigned int minutes;
    
    cout << "Enter time in seconds: ";
    cin >> totSeconds;
   
    cout << "First Way! " << endl;
    
    hours = totSeconds / 60 / 60;
    minutes = totSeconds / 60 % 60;
    seconds = totSeconds % 60;
        
    cout << totSeconds << " seconds is equivalent to " << endl
         << "Hours: " << hours << endl
         << "Minutes: " << minutes << endl
         << "Seconds: " << seconds << endl << endl;
    
    cout << "Second Way! " << endl;
    
    hours = totSeconds / 3600;
    minutes = totSeconds % 3600 / 60;
    seconds = totSeconds % 3600 % 60;
    
    cout << totSeconds << " seconds is equivalent to " << endl
         << "Hours: " << hours << endl
         << "Minutes: " << minutes << endl
         << "Seconds: " << seconds << endl;
    

   
    return 0;
}

