/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 *
 * Created on September 27, 2021, 6:07 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>
using namespace std;

void fillAry(vector<int> &,int,int);
void prntAry(vector<int> ,int);
/*
 * 
 */
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    int rowsize=4; //Row size for both 1 and 2D arrays
    int colsize=3; //The column size for a 2 dimensional array
    vector<int> array(rowsize);
    vector<int> brray(rowsize);
    vector<int> crray(rowsize);
    //vector<vector<int>> table;
    int lowRng=100,highRng=999;
    int perLine=4;
        
    //Fill each parallel array
    fillAry(array,highRng,lowRng);
    fillAry(brray,highRng,lowRng);
    fillAry(crray,highRng,lowRng);
    
    prntAry(array,perLine);
    prntAry(brray,perLine);
    prntAry(crray,perLine);
    return 0;
}

void fillAry(vector<int> &a,int hr,int lr){
    for(int indx=0;indx<a.size();indx++){
        a[indx]=rand()%(hr-lr+1)+lr;
    }
}

void prntAry(vector<int> a,int perLine){
    //Print the values in the array
    cout<<endl<<"The Array Values"<<endl;
    for(int indx=0;indx<a.size();indx++){
        cout<<a[indx]<<" ";
        if(indx%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}