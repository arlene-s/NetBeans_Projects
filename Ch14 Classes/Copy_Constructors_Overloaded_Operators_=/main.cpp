/* 
 * File:   main.cpp
 * Author: Arlene Sagaoinit
 * Created on November 17, 2021, 9:01 PM
 * Prupose: If an object contains a pointer, you cannot easily assign one object
 *          to another because they will end up pointing to the same address 
 *          which is not good so use a copy constructor, to copy an object to
 *          another. It is called when the memberwise assignment is used
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class TestScores{
    private:
        string name;
        int *testScores;
        int numScores;
    
        void createTestScores(int size)
            {numScores=size;
            testScores=new int[numScores];
            for(int i=0; i<numScores;i++)
                testScores[i]=0;}
    public:
        //Default constructor
        TestScores(string n, int size)
            {name=n;
             createTestScores(size);}
        
        //Copy constructor
        /*TestScores(const TestScores &obj)
            {name=obj.name;
             numScores=obj.numScores;
             testScores=new int[numScores];
             for(int i=0; i<numScores;i++)
                 testScores[i]=obj.testScores[i];}
        */
        
        //Overloaded = operator
        void operator=(TestScores &right){
            if(this!=&right){
                delete [] testScores;
                name=right.name;
                numScores=right.numScores;
                testScores=new int[numScores];
                for(int i=0; i<numScores;i++)
                    testScores[i]=right.testScores[i];
            }
        }
        
        //Destructor
        ~TestScores()
            {delete [] testScores;}
        
        void setScore(int score,int index)
            {testScores[index]=score;}
        
        void setName(string n)
            {name=n;}
        
        int getNumScores() const
            {return numScores;}
        
        string getName() const
            {return name;}
        
        int getScore(int index) const
            {return testScores[index];}
        
        
};
int main(int argc, char** argv) {
    string stuName;
    int tScores;
    int score;
    
    cout<<"Enter your name: ";
    cin>>stuName;
    cout<<"How many test scores? ";
    cin>>tScores;
    
    TestScores stu1(stuName, tScores);
    
    for(int i=0; i<tScores;i++){
        cout<<"Enter score #"<<(i+1)<<" ";
        cin>>score;
        stu1.setScore(score,i);
    }
    
    cout<<"Your scores: ";
    for(int i=0; i<tScores;i++){
        cout<<stu1.getScore(i)<<" ";
    }
    cout<<endl<<endl;
    TestScores stu2("Jamie",3);
    stu2.setScore(5,0);
    stu2.setScore(10,1);
    stu2.setScore(15,2);
    stu2=stu1;  //Overloaded operator
    
    cout<<"Copy student name: "<<stu2.getName()<<endl;
    cout<<"Copy student scores: ";
    for(int i=0; i<stu2.getNumScores();i++){
        cout<<stu2.getScore(i)<<" ";
    }

    return 0;
}

