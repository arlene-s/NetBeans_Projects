
/* 
 * File:   main.cpp
 * Author: arlen
 *
 * Created on December 17, 2021, 2:04 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int table[]={101, 101, 102, 103, 104, 105,
                 106, 107, 108, 108, 110, 111,
                 112, 113, 114, 115, 116, 117,
                 118, 119, 120, 121, 122, 123,
                 124, 125, 126, 127, 128, 128};
    
    int rows=5;
    int cols=6;
    int rowSum[rows];
    int colSum[cols];
    int grandTotal;
    
    int rSum,cSum;
    for(int i=0; i<rows;i++){        //Sum rows of array
        rSum=0;
        for(int j=0; j<cols; j++){
            rSum+=table[i*cols+j];   //Grab sum of each row
        }
        rowSum[i]=rSum;           //Set sums to new augmented row
        grandTotal+=rSum;        //Calculate total of the new row
    }

    for(int i=0; i<cols;i++){        //Sum columns of array
        cSum=0;
        for(int j=0; j<rows; j++)
            cSum+=table[j*cols+i];        //Grab sum of each column
        colSum[i]=cSum;           //Set sums to new augmented column
    }
    
    for(int i=0; i<rows;i++){
        cout<<rowSum[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<cols;i++){
        cout<<colSum[i]<<" ";
    }
    
    int augTable[(rows+1)*(cols+1)];
    
    cout<<"Augmented Table "<<endl;
    for(int i=0; i<rows;i++){
        for(int j=0; j<cols;j++){
            augTable[i*(cols+1)+j]=table[i*cols+j];
        }
    }
    for(int i=0; i<rows;i++){
       augTable[i*(cols+1)+cols]=rowSum[i];
    }
    for(int i=0; i<cols;i++){
        augTable[rows*(cols+1)+i]=colSum[i];
    }
    
    augTable[(rows+1)*(cols+1)-1]=grandTotal;    
    cout<<endl;
    for(int i=0; i<=rows;i++){
        for(int j=0; j<=cols;j++){
            cout<<augTable[i*(cols+1)+j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

