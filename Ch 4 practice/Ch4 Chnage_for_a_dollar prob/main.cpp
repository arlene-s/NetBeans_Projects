/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Arlene Sagaoinit
 * Purpose: Game that asks user to enter an amount of coins that 
 * equals exactly a dollar
 * Created on August 19, 2021, 10:53 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    const int PENNY = 1;
    const int NICKLE = 5;
    const int DIME = 10;
    const int QUARTER = 25;
    const int DOLLAR = 100;
    
    int input, total;
    
    cout << "Enter the amount of pennies: ";
    cin >> input;
    total = input * PENNY;
    cout << endl;
    cout << "Total is: " << total << endl;
    
    cout << "Enter the amount of nickles: ";
    cin >> input;
    total += (input * NICKLE);
    cout << endl;
    cout << "Total is: " << total << endl;
    
    cout << "Enter the amount of dimes: ";
    cin >> input;
    total += (input * DIME);
    cout << endl;
    cout << "Total is: " << total << endl;
    
    cout << "Enter the amount of quarters: ";
    cin >> input;
    total += (input * QUARTER);
    cout << endl;
    cout << "Total is: " << total << endl;
    
    if (total > DOLLAR)
        cout << "You went over a dollar! ";
    else if(total < DOLLAR)
        cout << "You went under a dollar! ";
    else
        cout << "Good job! You got exactly a dollar!";
    
    
    return 0;
}

