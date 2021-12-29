/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Nov 3, 2021, 10:15 AM
 * Purpose:  Recursion
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes
float pow(float,int);
float fvRec(float, float, int);d
//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int n;
    float x;
    
    //Initialize variables here
    n=5;
    x=2.0f;
    nYears=12;
    i=72/nYears;
    
    //Map inputs to outputs here, i.e. the process
    
    //Display the results
    cout<<x<<"^"<<n<<" = "<<powRec(x,n)<<endl;
    
    return 0;
}
float fvRec(float pv, float i, int n){
    //Base Condition
    if(n<=0)return pv;
    //Recursion
    return fvRec(pv, i, n-1)*(1+i);
}

float powRec(float x,int n){
    //Base condition
    if(n<=0)return 1;
    //Recursion
    return powRec(x,n-1)*x;
}