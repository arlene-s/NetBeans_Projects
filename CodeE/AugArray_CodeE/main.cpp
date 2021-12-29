/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 *
 * Created on September 15, 2021, 4:56 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
const int COLMAX=10;
/*
 * 
 */
void read(int [][COLMAX], int &, int &);
void print(int [][COLMAX], int, int, int);
void sum(int [][COLMAX], int, int, int [][COLMAX]);
int main(int argc, char** argv) {
    const int ROW=10;
    int array[ROW][COLMAX];
    int augAry[ROW][COLMAX];
    int row,col;
    
    read(array,row,col);
    
    cout<<"Original array: " << endl;
    print(array, row, col, 10);
    
    sum(array, row, col, augAry);
    
    cout<<"Augmented array: " << endl;
    print(augAry, row+1, col+1, 10);
    
    return 0;
}
void read(int a[][COLMAX], int &row, int &col){
    cout <<"Enter row and column size: ";
    cin>>row>>col;
    
    cout<<"Enter array: ";
    for(int i=0; i < row; i++){
        for(int j=0; j < col; j++){
            cin>>a[i][j];
        }
    }
}

void print(int a[][COLMAX], int row, int col, int n){
    for(int i=0; i<row;i++){
        for(int j=0; j<col;j++){
            cout<<setw(10)<<a[i][j];
        }
        cout<<endl;
    }
}

/*void sum(int a[][COLMAX], int row, int col, int b[][COLMAX]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            b[i][j]=a[i][j];
        }
    }
    int grndSum=0;
    int rowSum, colSum;
    for(int i=0; i<row;i++){
        rowSum=0;
        for(int j=0; j<col; j++)
            rowSum+=a[i][j];
        b[i][col]=rowSum;
        grndSum+=b[i][col];
    }
    
    b[row][col]=grndSum;
    
    for(int i=0; i<col;i++){
        colSum=0;
        for(int j=0; j<row; j++)
            colSum+=a[j][i];
        b[row][i]=colSum;
    }
    
}*/

void sum(int a[][COLMAX], int row, int col, int b[][COLMAX]){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            b[i][j]=a[i][j];
        }
    }
    int grndSum=0;
    int rowSum, colSum;
    for(int i=0; i<row;i++){
        rowSum=0;
        colSum=0;
        for(int j=0; j<col; j++){
            rowSum+=a[i][j];
            colSum+=a[j][i];
        }
        b[i][col]=rowSum;
        b[row][i]=colSum;
        grndSum+=b[i][col];
    }
    b[row][col]=grndSum;
}        
  
