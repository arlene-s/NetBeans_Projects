/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 *
 * Created on October 11, 2021, 10:53 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    fstream outFile;
    //Check first if file exists
    outFile.open("Arlene's Info.txt", ios::in | ios::out);
    if(outFile.fail()){
        cout<<"Failed"<<endl;
        //Create file then
        outFile.open("Arlene's Info.txt",ios::out);
        outFile<<"Arlene is a hoe"<<endl;
        
        outFile.close();
    }else{
        cout<<"Success"<<endl;
        //Lets write to it
        outFile<<"Arlene wants to sleep"<<endl; //Write to file
        string contents;
        outFile.close();
        outFile.open("Arlene's Info.txt", ios::in); //Read file
        while(outFile>>contents)    //Loop and output each content
            cout<<contents<<" ";
        cout<<endl;
        outFile.close();
    }
    
    outFile.open("Joe's Info.txt", ios::in);
    if(!outFile){
        cout<<"Joes file failed"<<endl;
        //Lets create one
        outFile.open("Joe's Info.txt", ios::out); //Use ios::out to create file
        outFile<<"Joe loves to smoke weed"<<endl;
        outFile.close();
    }else{
        cout<<"Joes file succeeded"<<endl;
        outFile.close();
        //Lets delete the contents
        outFile.open("Joe's Info.txt", ios::out); //When using ios::out flag 
        outFile.close(); 
    }                                             //when file already exits
                                                  //it will delete its contents
                                                  //and write over it if you
                                                  //Write to it again
    
    return 0;
}

