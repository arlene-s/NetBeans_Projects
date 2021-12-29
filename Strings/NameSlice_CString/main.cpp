/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 * Purpose: Cut a c string at the space character if any and
 *          take end of c string and copy into a new c string
 * Created on October 9, 2021, 9:35 PM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int size=10;
    char name[]="Tokyo Strong";
    char lastName[size];
    int count=0;
    
    while(name[count]!=' '&&name[count]!='\0')
        count++;
    
    if(name[count]==' '){
        for(int i=count+1,j=0;i<strlen(name);i++,j++)
            lastName[j]=name[i];
        name[count]='\0';
        lastName[strlen(lastName)]='\0';
    }
    cout<<name<<endl;
    cout<<lastName<<endl;
    return 0;
}
