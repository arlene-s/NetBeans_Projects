/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 *
 * Created on October 20, 2021, 12:59 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

const float CNVPERC=100.0f;

float powRec(float, int);
float fvRec(float, float, int);
float fv(float, float, int);
int fibRec(int );
int fib(int );
float logFact(int);

/*
 * 
 */
int main(int argc, char** argv) {
    float x,pv,i;
    int n,nYears;
    
    n=5;
    x=2.0f;
    nYears=12;
    i=72/nYears;
    pv=100;
    i/=CNVPERC;
    cout<<n<<"^"<<n<<" = "<<powRec(x,n)<<endl;
    
    cout<<"Recursive FutureValue("<<pv<<","<<i<<","<<nYears<<") ="
        <<fvRec(pv,i,nYears)<<endl;
    
    cout<<"For loop FutureValue("<<pv<<","<<i<<","<<nYears<<") ="
        <<fv(pv,i,nYears)<<endl;
    
    cout<<"Recursive Power FutureValue("<<pv<<","<<i<<","<<nYears<<") ="
        <<pv*powRec(1+i,nYears)<<endl;
    cout<<"Recurrsive Fibonacci("<<nYears<<") = "<<fibRec(nYears)<<endl;
    for(int i=0; i<nYears; i++){
        cout<<fibRec(i);
        if(i!=nYears)cout<<",";
    }
    cout<<endl;
    cout<<"Non Recurrsive Fibonacci("<<nYears<<") = "<<fib(nYears)<<endl;
    for(int i=0; i<nYears; i++){
        cout<<fib(i);
        if(i!=nYears)cout<<",";
    }
    cout<<endl<<"Golden Ratio ~= "<<1.0f*fib(41)/fib(40)<<endl;
    cout<<nYears<<"! = "<<exp(logFact(nYears))<<endl;
    return 0;
}

float logFact(int n){
    //Base condition
    if(n<=1)return 0;
    //Recursion
    return logFact(n-1)+log(n);
}

int fib(int n){
    if(n<=0)return 0;
    if(n==1)return 1;
    int cnt=1;
    int fim2=0;
    int fim1=1;
    int fi;
    do{
        fi=fim1+fim2;
        fim2=fim1;
        fim1=fi;
    }while(++cnt<n);
    return fi;
}

int fibRec(int n){
    if(n<=0)return 0;
    if(n==1)return 1;
    
    return fibRec(n-1)+fibRec(n-2);
}

float fv(float pv, float i, int n){
    float fv=pv;
    for(int nYears=1; nYears<=n;nYears++){
        fv*=(1+i);
    }
    return fv;
}
float fvRec(float pv, float i, int n){
    //Base Condition
    if(n<=0)return pv;
    //Recursion
    return fvRec(pv,i,n-1)*(1+1);
}
float powRec(float x, int n){
    if(n<=0) return 1;
    return powRec(x,n-1)*x;
}
