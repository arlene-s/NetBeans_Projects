/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on November 28 2021, 4:45 PM
 * Purpose:  Sorting Class
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cstdlib>    //Random function location
#include <ctime>      //Time Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries
#include "Array.h"

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    int size=100;
    Array array(size);
    
    //Map inputs to outputs here, i.e. the process
    
    //Display the results
    array.display(10);
    
    //Testing the memory swap function
    array.sort();
    
    //Display the results
    cout<<"Apply a loop on smallest in the list n times = Mark Sort"<<endl;
    array.display(10);

    //Exit stage left
    return 0;
}