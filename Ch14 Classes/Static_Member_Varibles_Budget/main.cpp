/* 
 * File:   main.cpp
 * Author: Arlene Sagaoinit
 * Created on November 17, 2021, 7:21 PM
 * Purpose: Gaddis budget exercise
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

class Budget{
    private:
        //Static member variable
        static float corpBudget;    //Corporate budget, budget total of whole corporation
        //Instance member variable
        float divBudget;            //Each individual division's budget
    public:
        //Default constructor
        Budget()
            {divBudget=0;}          //Initialize division budget to 0
        void addBudget(float b)     //Add a budget amount to both division budget
            {divBudget+=b;          //and corporate budget
             corpBudget+=b;}
        float getDivBudget() const  //Accessor function to get division budget 
            {return divBudget;}
        //Static member function (accessor) to grab corporate budget
        static float getCorpBudget()
            {return corpBudget;}
        //Static member function to add main offices budget to the corporate budget
        static void mainOffice(float mOffice)
            {corpBudget+=mOffice;}
};

//Initialize static member variable outside of class
//to be created and stored in memory before any instances of class are created
float Budget::corpBudget=0;

int main(int argc, char** argv) {
    const int NUM_DIVS=4;       //Number of divisions
    float mOfficeRequest;       //Main office budget request
    
    //Get main office budget request
    //No instances of Budget class have been defined yet
    cout<<"Enter main office's budget request: ";
    cin>>mOfficeRequest;
    //This is how you call a static member function
    Budget::mainOffice(mOfficeRequest);//Add office request to corporate budget
    
    //Create instances
    Budget divisions[NUM_DIVS]; //Array of Budget objects
    
    //Get the budget requests from each division
    for(int i=0; i<NUM_DIVS; i++){
        float budgetAmt;        //Budget amount
        cout<<"Enter the budget for division "<<(i+1)<<": ";
        cin>>budgetAmt;
        divisions[i].addBudget(budgetAmt);
    }
    
    //Display budget requests and corporate budget
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Here are the division budget requests: "<<endl;
    for(int i=0; i<NUM_DIVS;i++){
        cout<<"\tDivision "<<(i+1)<<"\t$";
        cout<<divisions[i].getDivBudget()<<endl;
    }
    
    //Grab static member variable this way, without using an object
    cout<<"\tTotal Requests (including main office):\t$"<<Budget::getCorpBudget()<<endl;
    //Or this way with using an object
    cout<<"\tTotal Requests (including main office):\t$"<<divisions[0].getCorpBudget()<<endl;

    return 0;
}

