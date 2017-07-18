/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 17, 2017, 11:32 AM
 * Purpose:  Coin Toss Simulator
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>
#include <ctime>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int coinToss(void)
{
    int randN;
    randN=1+rand()%2;
    return randN;
}
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int aTimes=0;//amount of times
    int randN=0;
    string hdTl=" ";
    
    //Initialize variables
    
    //Input data
    cout<<"How many time to toss the coin?"<<endl;
    cin>>aTimes;
    
    srand((time(0)));//seeing the random number generatpr
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i = 1; i <= aTimes; i++)
    {
        randN = coinToss();
        if (randN==1)
            hdTl="Head";
        else
            hdTl="Tail";
        cout<<hdTl<<endl;
    }
    //Exit stage right!
    return 0;
}

