/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 10, 2017, 10:06 AM
 * Purpose:  Ocean Levels
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //Conditional Operators
#include <cmath>    //math
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float level = 0;//Ocean Level rising from zero
    int year =25;// Last year the ocean level is to be reported
    
    //Map inputs to outputs or process the data
    cout<<"Year      Increase in Ocean Level"<<endl;
      
    //Output the Ocean Levels
    for (int i = 1; i <=year; i++)
    {
        level+=1.5;
        cout<<"Year "<<i<<"    "<<level<<"mm"<<endl;
    }
    //Exit stage right!
    return 0;
}

