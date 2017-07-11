/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 10, 2017, 7:32 PM
 * Purpose:  Membership Fees Increase
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    const float INCRS = 0.04;
    const int YRS = 6;
    float mbrshp = 2500;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i=1;i<=YRS;i++)
    {
        mbrshp=mbrshp+(mbrshp*INCRS);
        cout<<"Year "<<i<<" fees are: $"<<mbrshp<<endl;
    }
    //Exit stage right!
    return 0;
}

