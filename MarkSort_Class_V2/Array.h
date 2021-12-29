/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Array.h
 * Author: arlen
 * Purpose: Array Class Specification
 * Includes: Data and Behavioral Prototypes
 * Created on October 25, 2021, 1:05 AM
 */

#ifndef ARRAY_H
#define ARRAY_H

class Array{
    private:
        int size;
        int *data;
    public:
        void setSize(int);
        void setData(int, int);
        int getData(int);
        void destroy();
        void display();
        void filAry(int);
        void markSrt();
};

#endif /* ARRAY_H */

