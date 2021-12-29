/* 
 * File:   main.cpp
 * Author: arlen
 * Created on November 28, 2021, 5:28 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User libraries
#include "Course.h"
int main(int argc, char** argv) {
    Course course("Intro to comp sci","Lehr","Mark","B2034","Starting out with c++",
                  "Gaddis","Pearson");
    
    course.display();

    return 0;
}

