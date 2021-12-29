/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Arlene Sagaoinit
 * Purpose: Solve time calculator problem in gaddis book ch 4 prob 7
 * Created on August 19, 2021, 9:20 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Ask user to enter a random number of seconds
    
    //Display the time in days, hours, minutes, and seconds 
    
    int input, days, hours, minutes, seconds;
    
    cout << "Enter a number of seconds: ";
    cin >> input;
   
    cout << "First Way! " << endl;
    
    days = input / 86400;
    hours = input % 86400 / 3600;
    minutes =  input % 86400 % 3600 / 60;
    seconds =  input % 86400 % 3600 % 60;
    
    cout << "Days: " << days << endl
         << "Hours: " << hours << endl
         << "Minutes: " << minutes << endl
         << "Seconds: " << seconds << endl
         << endl;
    
    cout << "Second Way! " << endl;
    
    days = input / 86400;
    hours = input / 3600 % 24;
    minutes = input / 60 % 60;
    seconds = input % 60;
    
    cout << "Days: " << days << endl
         << "Hours: " << hours << endl
         << "Minutes: " << minutes << endl
         << "Seconds: " << seconds << endl;
    
         
    
    return 0;
}

