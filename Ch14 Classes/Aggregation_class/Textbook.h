/* 
 * File:   Textbook.h
 * Author: arlen
 * Created on November 28, 2021, 5:35 PM
 */

#ifndef TEXTBOOK_H
#define TEXTBOOK_H

#include <iostream>
using namespace std;

class Textbook{
    private:
        string title;
        string author;
        string publisher;
    public:
        Textbook(){
            set("","","");
        }
        
        Textbook(string textTitle, string auth, string pub){
            set(textTitle,auth,pub);
        }
        
        void set(string textTitle, string auth, string pub){
            title=textTitle;
            author=auth;
            publisher=pub;
        }
        
        void display(){
            cout<<"Title: "<<title<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"Publisher: "<<publisher<<endl;
        }
};



#endif /* TEXTBOOK_H */

