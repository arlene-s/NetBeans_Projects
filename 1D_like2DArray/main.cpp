/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 *
 * Created on December 17, 2021, 4:29 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int row=4;
    int colmax=5;
    char array[row*colmax]={'b','d','c','h','j','c','g','g','a','e','f','h','i','k','c','r','s','t','v','d'};
    int index[row*colmax];
    
    for(int i=0; i<row*colmax;i++){
        index[i]=i;
    }
    
    for(int i=0; i<row;i++){
        for(int j=0; j<colmax;j++){
            cout<<array[i*colmax+j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    int col=2;
    for(int i=0; i<row-1; i++){
        for(int j=i+1; j<row;j++){
            if(array[index[i*colmax+col]]<array[index[j*colmax+col]]){
                for(int k=0; k<colmax;k++){
                    int temp=array[j*colmax+k];
                    array[j*colmax+k]=array[i*colmax+k];
                    array[i*colmax+k]=temp;
                }
            }
        }
    }
    cout<<endl;
    for(int i=0; i<row;i++){
        for(int j=0; j<colmax;j++){
            cout<<array[i*colmax+j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}

