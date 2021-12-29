/* 
 * File:   main.cpp
 * Author: Arlene Sagaoinit
 * Created on November 24, 2021, 8:04 PM
 * Purpose: Overloading relational operators
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class Person{
    private:
        int age;
        string name;
        string sexuality;
    public:
        Person(int a=0, string n="",string s=""){
            setAge(a);
            setName(n);
            setSex(s);
        }
        
        void setAge(int a){
            age=a;
        }
        void setName(string n){
            name=n;
        }
        void setSex(string s){
            sexuality=s;
        }
        
        int getAge(){
            return age;
        }
        
        string getName(){
            return name;
        }
        
        string getSex(){
            return sexuality;
        }
        
        bool operator == (Person &right){
            bool status;
            if(age==right.age && sexuality==right.sexuality)
                status=true;
            else
                status=false;
            return status;
        }
        
        bool operator > (Person &right){
            bool status;
            if(age>right.age)
                status=true;
            else
                status=false;
            return status;
        }
        
        bool operator < (Person &right){
            bool status;
            if(age<right.age)
                status=true;
            else
                status=false;
            return status;
        } 
};

int main(int argc, char** argv) {
    Person arlene;
    
    arlene.setAge(21);
    arlene.setName("Arlene");
    arlene.setSex("gayasfuck");
    
    cout<<"Name: "<<arlene.getName()<<endl;
    cout<<"Age: "<<arlene.getAge()<<endl;
    cout<<"Sexuality: "<<arlene.getSex()<<endl;
    
    cout<<endl;
    
    Person jerry(22,"jerry","gayasfuck");
    
    cout<<"Name: "<<jerry.getName()<<endl;
    cout<<"Age: "<<jerry.getAge()<<endl;
    cout<<"Sexuality: "<<jerry.getSex()<<endl;
    
    cout<<endl;
    
    if(arlene>jerry)
        cout<<arlene.getName()<<" is older than "<<jerry.getName()<<endl;
    else if(arlene<jerry)
        cout<<arlene.getName()<<" is younger than "<<jerry.getName()<<endl;
    else
        cout<<arlene.getName()<<" and "<<jerry.getName()<<" are both gay and "
            <<"same age"<<endl;
    
    
    return 0;
}

