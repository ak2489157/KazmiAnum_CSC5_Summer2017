/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 17, 2017, 7:03 PM
 * Purpose:  Falling Distance
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <math.h>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float fallingDistance(int t=0);


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int t=0;
    float d=0;
    //Initialize variables
    
    //Input data
    cout<<"I will now calculate the distance object is falling in 10 seconds"<<endl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i =1; i <= 10; i++){
        d = fallingDistance(i);
        cout<<i<<" seconds: "<<d<<" meters"<<endl;
    }
    //Exit stage right!
    return 0;
}

float fallingDistance (int t)
{
    float d=0;
    const float g=9.8;
    
    d = (0.5 * g) * (pow(t,2));
    return d;
}
