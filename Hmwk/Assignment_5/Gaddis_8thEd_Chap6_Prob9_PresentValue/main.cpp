/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 17, 2017, 11:32 AM
 * Purpose:  Present Value
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <math.h>
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float presentValue (float, float, int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float F=0;//future value
    float r=0;//interest rate
    int n=0;//number of years
    float P = 0;
    
    //Initialize variables
    
    //Input data
    cout<<"Please enter the amount of money you want to save: $ "<<endl;
    cin>>F;
    cout<<"Please enter the interest rate"<<endl;
    cin>>r;
    cout<<"Please enter the number of years you want to be saving "<<endl;
    cin>>n;
    
    
    //Map inputs to outputs or process the data
    P=presentValue(F,r,n);
    //Output the transformed data
    cout<<"In order to save $ "<<F<<" you need to deposit $ "<<P<<endl;
    //Exit stage right!
    return 0;
}
float presentValue(float F, float r, int n)
{
    float P;
    
    P=F/(pow(1+(r*0.01),n));
    return P;
}
