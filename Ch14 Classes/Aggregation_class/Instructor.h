/* 
 * File:   Instructor.h
 * Author: arlen
 *
 * Created on November 28, 2021, 5:28 PM
 */

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <iostream>
#include <string>

using namespace std;
class Instructor{
    private:
        string lastName;
        string firstName;
        string officeNum;
    public:
        Instructor(){
            set("","","");
        }
        
        Instructor(string lName, string fName, string office){
            set(lName,fName,office);
        }
        
        void set(string lName, string fName, string office){
            lastName=lName;
            firstName=fName;
            officeNum=office;
        }
        
        void display() const{
            cout<<"Last Name: "<<lastName<<endl;
            cout<<"First Name: "<<firstName<<endl;
            cout<<"Office Number: "<<officeNum<<endl;
        }
};


#endif /* INSTRUCTOR_H */

