/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Arlene Sagaoinit
 * Purpose: a variables scope or usability is only available from its definition
 * to the end the block of the function its in
 * Created on August 19, 2021, 5:25 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char letter;            //Variable scope starts here and ends at end of
                            //main function block
    cout << "Enter a letter: ";
    cin >> letter;
    
    if (letter >= '0' && letter <='9')
    {
        cout << "You entered a number, try again." << endl
             << "Enter a letter: ";
        char letter;        //scope of new variable with same name starts here
        cin >> letter;      //and ends at end of if block
        cout << "You entered: " << letter << endl;
    }
    
    cout << "The first input was: " << letter << endl; 
    return 0;
}

