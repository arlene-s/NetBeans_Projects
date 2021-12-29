/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 *
 * Created on October 2, 2021, 8:29 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
void markSrt(int [],int );
void print(int [], int);
/*
 * 
 */
int main(int argc, char** argv) {
    const int SIZE=11;
    int array[SIZE]={0,0,1,2,3,4,5,6,7,8,9};
    
    markSrt(array, SIZE);
    print(array, SIZE);
    int compCnt=0,count=0,maxCnt=0,freq=0, modes=0;
    
    for(int i=0; i<SIZE-1;i++){
        if(array[i]==array[i+1]){
            compCnt++;
            if(compCnt>maxCnt)
                maxCnt=compCnt;
            else
                count++;
        }else
            compCnt=0;
    }
    modes=count+1;
    freq=maxCnt+1;
    cout<<"Modes: "<<modes<<endl;
    cout<<"Frequency: "<< freq<<endl;
    
    
    return 0;
}

void markSrt(int a[],int n){
    for(int pos=0;pos<n-1;pos++){//Works on each position in the list
        for(int i=pos+1;i<n;i++){//Compare and swap with lower elements in the list
            if(a[pos]>a[i]){//Swap
                a[pos]=a[pos]^a[i];
                a[i]=a[pos]^a[i];
                a[pos]=a[pos]^a[i];
            }
        }
    }
}

void print(int a[], int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}