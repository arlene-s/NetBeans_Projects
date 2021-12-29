/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 * Purpose: Goes over passing in functions, using member functions,
 *          formatting output, ways to read in data
 * Created on October 16, 2021, 3:24 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    fstream file;
    string input;
    float num=5.6789;
    
    cout<<"Opening JoeJonas.txt file"<<endl;
    file.open("JoeJonas.txt",ios::out);
    cout<<"Lets add to the file: "<<endl;
    cout<<"Enter a sentence about Joe Jonas: ";
    getline(cin, input);
    file<<input;
    file.close();

    cout<<"Lets read in what you put: ";
    file.open("JoeJonas.txt",ios::in);
    if(file){
        getline(file, input);
        
        while(file){
            cout<<input<<endl;
            getline(file, input);
        }
        file.close();
    }else
        cout<<"ERROR: can't open file"<<endl;
    
    cout<<"Lets create another file"<<endl;
    cout<<"Opening TooSad.txt file"<<endl;
    file.open("TooSad.txt",ios::out);
    if(file){
        bool end=false;
        cout<<"Write to file, be sure to end with a period when done"<<endl;
        do{
            getline(cin, input);
            file<<input<<endl;
            if(input.find('.')) end=true;
        }while(end==true);
        file.close();
    }else
        cout<<"ERROR: can't open file"<<endl;
    
    
    return 0;
}

