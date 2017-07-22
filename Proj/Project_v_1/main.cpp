/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on June 14, 2017, 11:32 AM
 * Purpose:  Project Version 1
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const int ROWS = 5;//
    const int COLS =5;//
    int move;//
    char opp1;//
    int nShips, sizeShips;//
    int nBombs=25, iGuess, jGuess;//
    
    //Initialize variables
    srand(static_cast<unsigned int>(time(NULL)));
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<endl;
    cout<<"Battleship : This is a one player game and you will be able to set your difficulty."<<endl;
    
    do{
        cout<<"How many Battleships do you want? (You cannot have more than 3):"<<endl;
        cin>>nShips;
    }
    
    while (nShips <1||nShips>3);
    
    for (int i = 1; i<=nShips;i++){
        do{
            cout<<"Size of enemy battleship #: "<<i<<"(at least 1, up to 3): ";
            cin>>sizeShips;
        }
        while (sizeShips < 1 || sizeShips >3);
        
    }
    
    bool victory = false;
    if (nShips !=1)
        cout<<"\nhere is the game board. There are "<<nShips<<"enemy battleships hidden here"<<endl; 
    else
        cout<<"Here is the game board. There is " <<nShips<<"enemy battleship(s) hidden here"<<endl;
        cout<<"Input row and column to decide where to place your bombs.\n";
        cout<<"For example, if you wanted to fire the top right corner, type \"1 10\" (row 1 column 10).\n";
        cout<<"You have 25 bombs. Make your First move now. Good luck."<<endl;
    
        
        //Exit stage right!
    return 0;
}

