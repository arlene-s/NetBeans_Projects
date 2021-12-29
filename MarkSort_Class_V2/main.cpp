/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Sept 20th, 2021 1pm
 * Purpose:  Dynamic Memory
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
Array *fillAry(int);
void prntAry(const Array *,int);
void markSrt(Array *);

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    int size=100;
    Array *array;
    
    //Initialize variables here
    array=fillAry(size);
    if(size>100000){
        cout<<"SIZE = "<<size<<endl;
        cout<<"Size > 100000 takes too long to run"<<endl;
        return 0;
    }
    
    //Map inputs to outputs here, i.e. the process
    
    //Display the results
    cout<<"Display the Original Random Array"<<endl;
    prntAry(array,10);
    
    //Testing the memory swap function
    markSrt(array);
    
    //Display the results
    cout<<"Apply a loop on smallest in the list n times = Mark Sort"<<endl;
    prntAry(array,10);
    
    //Deallocate Memory
    delete []array->data;
    delete array;

    //Exit stage left
    return 0;
}

void markSrt(Array *a){
    for(int pos=0;pos<a->size-1;pos++){//Works on each position in the list
        for(int i=pos+1;i<a->size;i++){//Compare and swap with lower elements in the list
            if(a->data[pos]>a->data[i]){//Swap
                a->data[pos]=a->data[pos]^a->data[i];
                a->data[i]=a->data[pos]^a->data[i];
                a->data[pos]=a->data[pos]^a->data[i];
            }
        }
    }
}

void prntAry(const Array *a,int perLine){
    cout<<endl;
    for(int i=0;i<a->size;i++){
        cout<<a->data[i]<<" ";
        if(i%perLine==perLine-1)cout<<endl;
    }
    cout<<endl;
}

Array* fillAry(int n){
    n=n<2?2:n;//2 or greater
    Array *array=new Array;
    array->size=n;
    array->data=new int[n];
    for(int i=0;i<n;i++){
        array->data[i]=rand()%90+10;//[10,99]
    }
    return array;
}