
/* 
 * File:   Course.h
 * Author: arlen
 *
 * Created on November 28, 2021, 5:38 PM
 */

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include "Instructor.h"
#include "Textbook.h"
using namespace std;

class Course{
    private:
        string courseName;
        Instructor intructor;
        Textbook textbook;
    public:
        Course(string course, string instLName, string instFName, string instOffice,
               string textTitle, string author, string publisher){
            courseName=course;
            intructor.set(instLName, instFName, instOffice);
            textbook.set(textTitle, author, publisher);
        }
        
        void display(){
            cout<<"Course name: "<<courseName<<endl;
            cout<<endl;
            cout<<"Instructor information: "<<endl;
            intructor.display();
            cout<<endl;
            cout<<"Textbook information: "<<endl;
            textbook.display();
            cout<<endl;
        }
};



#endif /* COURSE_H */

