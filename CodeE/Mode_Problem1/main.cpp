/* 
 * File:   main.cpp
 * Author: arlen
 *
 * Created on October 3, 2021, 7:51 PM
 */

#include <cstdlib>
#include <iostream>

int findMode(int [], int);
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

int findMode(int array[], int size){
    
    int maxVal=0;
    int maxCnt=0;
    int i, j;
    
    for(i=0; i<size-1; i++){
        int count=0;        //Counts the number of times an element exists inside of array
        for(j=i+1; j<size;j++){
            if(*(array+i)==*(array+j))
                count++;
        }
        
        if(count > maxCnt){
            maxCnt=count;
            maxVal=*(array+i);
        }
        else if(maxCnt==1)
            maxVal=-1;
    }
    
    return maxVal;
}
