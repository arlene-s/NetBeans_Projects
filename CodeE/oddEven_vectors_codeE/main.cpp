/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 *
 * Created on September 13, 2021, 3:01 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int size, num;
    vector<int> even, odd;
    const int ROW=5, COL=2;
    int array[ROW][COL];
    
    cout << "Enter size of numbers: ";
    cin >> size;
    
    cout << "Enter numbers: ";
    for(int i = 0; i < size; i++)
    {
        cin >> num;
        if(num%2 == 0){
            even.push_back(num);
        }
        else{
            odd.push_back(num);
        }
    }
    
    cout << "Size of even array: " << even.size() << endl;
    cout << "Size of odd array: " << odd.size() << endl;

    int i=0,j=0;
    cout<<setw(10)<<"Vector"<<setw(10)<<"Even"<<setw(10)<<"Odd"<<endl; //headings 
    while(i<even.size() && j<odd.size()){ //Ouput values in both vectors
        cout<<setw(10*2)<<even[i]<<setw(10)<<odd[j]<<endl;
        i++;
        j++;
    }
    while(i<even.size()){ //Make sure to grab all values in even and odd vector if one vector is larger than other
        cout<<setw(10*2)<<even[i]<<endl;
        i++;
    }
    while(j<odd.size()){
        cout<<setw(10*3)<<odd[j]<<endl;
        j++;
    }
    
    int a=0,b=0;
    
    while(a < even.size()){
        array[a][0]=even[a];
        a++;
    }
    while(b<odd.size()){
        array[b][1]=odd[b];
        b++;
    }
            
    for(int m=0;m<even.size();m++)
        array[m][0] = even[m];//set each value in even vector into first column of array
    
    for(int m=0;m<odd.size();m++)
        array[m][1] = odd[m];//set each value in odd vector into second column of array
    
    for(int g = 0; g < ROW; g++){
        for(int h = 0; h < COL; h++){
            cout << setw(4) << array[g][h] << " ";
        }
        cout << endl;
    }
    return 0;
}

