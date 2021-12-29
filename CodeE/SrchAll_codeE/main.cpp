/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 *
 * Created on September 19, 2021, 10:41 AM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

/*
 * 
 */
int srch1(const char[], const char[], int);
void srchAll(const char[], const char[], int[]);
void print(const int[]);
int main(int argc, char** argv) {
    const int LINE=81;
    char sntnce[LINE],pattern[LINE];
    int match[LINE];
    
    cout<<"Input sentence: ";
    cin.getline(sntnce,LINE);
    cout<<"Input a pattern: ";
    cin.getline(pattern,LINE);
    
    cout<<"First occurrance: "<<srch1(sntnce,pattern,0)<<endl;
    srchAll(sntnce,pattern,match);
    cout<<"Match array: "<<endl;
    print(match);
    return 0;
}
/*int srch1(const char snt[], const char pat[], int strtPos){
    for(int i=0; i<strlen(snt);i++){
        if(snt[strtPos+i]==pat[0]){
            return i;
        }
    }
    return -1;
    
}*/

int srch1(const char snt[], const char pat[], int strtPos){
    for(int i=strtPos; i<strlen(snt);i++){
        if(snt[i]==pat[0]){
            return i;
            }
        }
    return -1;
}

void srchAll(const char snt[], const char pat[], int match[]){
    /*int strtPos=0;
    for(int i=strtPos,j=0; i<strlen(snt);i++,j++){
        cout<<"i: "<<i<<endl;
        if(srch1(snt,pat,i)!=-1){
            strtPos=srch1(snt,pat,i);
            cout<<"\tstrtPos: "<<strtPos<<endl;
            match[j]=strtPos;
        }
        
    }*/
    
    int i=0,j=0;
    while(i<strlen(snt)){
        if(srch1(snt,pat,i)!=-1){
            i=srch1(snt,pat,i);
            cout<<"i: " << i << endl;
            match[j]=i;
        }
    }
}
void print(const int match[]){
    int size = sizeof(match)/sizeof(match[0]);
    for(int i=0; i<size;i++){
        cout<<match[i]<<" ";
    }
}