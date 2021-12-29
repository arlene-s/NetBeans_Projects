/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arlen
 *
 * Created on November 13, 2021, 5:30 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

struct Data{
    int a;
    int b;
};

struct Hand{             //Structure containing players hand details
    int *cards;          //Array holding players hand
    int index;           //Current index/size of array
    int handTot;         //Current sum of players hand
    int aceElem;         //Ace card index, val to change when total>21
};

struct Player{           //Structure containing players card details, bet amount, total chips
    Hand *plyrHnd;       //Pointer to hand structure for holding players hand info
    int betAmt;          //Players bet amount
    int chipTot;         //Players money total
    unsigned int games;  //Number of games 
    unsigned int wins;   //Players number of wins
    unsigned int losses; //Number of losses
};
/*
 * 
 */
int main(int argc, char** argv) {
    fstream binFile("stats.bin",ios::out|ios::binary);
    Player *record=new Player;
    
    record->games=0;
    record->wins=0;
    record->losses=0;
    
    for(int i=0; i<2;i++){
        record->games++;
        record->wins++;
        record->losses++;
        binFile.write(reinterpret_cast<char *>(record),sizeof(Player));
    }
    
    binFile.close();
    
    binFile.open("stats.bin",ios::in|ios::binary);
    if(binFile){
        binFile.read(reinterpret_cast<char *>(record),sizeof(Player));
        while(!binFile.eof()){
            cout<<"games: "<<record->games<<endl;
            cout<<"wins: "<<record->wins<<endl;
            cout<<"losses: "<<record->losses<<endl;
            binFile.read(reinterpret_cast<char *>(record),sizeof(Player));
        }
        binFile.close();
    }else{
        cout<<"Error opening file"<<endl;
    }
    
    delete record;
    

    return 0;
}

