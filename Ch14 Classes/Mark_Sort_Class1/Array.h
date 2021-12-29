/* 
 * File:   Array.h
 * Author: arlen
 * Created on November 28, 2021, 4:42 PM
 * Purpose: Class specification
 */

#ifndef ARRAY_H
#define ARRAY_H

class Array{
    private:
        int size;
        int *data;
    public:
        Array(int);
        ~Array();
        void sort();
        void display(int);
};



#endif /* ARRAY_H */

