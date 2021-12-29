/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 * Purpose: Finding employees wages for the work week
 * Created on July 7, 2021, 9:59 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Regular hours = 40
    //Overtime hours after 40
    //$18.25 per regular hour
    //$27.78 per overtime hour
    
    short hours,            //Wont need to be a big number
          regHours,         //Amount of regular hours
          overHours;        //Amount of overtime hours
    float regPay = 18.25,   //Regular pay rate per regular hours
          overPay = 27.78,  //Overtime pay rate per overtime hours
          regWage,          //Wage for regular hours
          overWage,         //Wage for overtime hours
          totWage;          //Total wage = regular wage + overtime wage
    
    cout << "Please enter hours worked for the week: ";
    cin >> hours;
    
    if(hours > 40)
    {
        overHours = hours - 40;
        regHours = hours - overHours;
    }
    else    //If hours is less than or equal to 40
    {
        overHours = 0;
        regHours = hours;
    }
    
    regWage = regHours * regPay;
    overWage = overHours * overPay;
    totWage = regWage + overWage;
    
    cout << "Wages for this week are: $" << totWage << endl;

    return 0;
}

