/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 *
 * Created on December 17, 2021, 12:11 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char nSize=5;
    //char *set={29,34,57,89,126};
    char *set=new char[nSize];
    set[0]=29;
    set[1]=34;
    set[2]=57;
    set[3]=89;
    set[4]=126;
    char *array=new char[nSize];    
    //array=set;
    
    
    for(int i=0; i<nSize;i++){
        array[i]=i;
    }
    
    for(int i=0; i<nSize;i++){
        cout<<(array[i])-48<<" ";
    }
    
    
    delete []set;
    delete []array;

    return 0;
}

