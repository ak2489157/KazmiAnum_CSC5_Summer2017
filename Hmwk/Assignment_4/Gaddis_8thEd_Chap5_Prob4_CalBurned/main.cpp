/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 10, 2017, 11:32 AM
 * Purpose:  Calories Burned
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //Conditional Operator
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float calBurn;//total amount of calories burned in a given time frame
    float calPMin= 3.9f;//Rate in which calories are burned
    
    //Output amount of calories Burned using a for - loop
    for (int i = 10; i<=30; i+=5)
    {
        calBurn = i * calPMin;
        cout<< "In "<<i<<" minutes you burned "<<calBurn<<" calories."<<endl;  
    }
    //Exit stage right!
    return 0;
}

