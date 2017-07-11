/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 10, 2017, 7:32 PM
 * Purpose: Average Rainfall
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int nyrs = 0;// number of years
    const int MONTH = 12;// Amount of months in a year
    float totrnfl= 0.0f;//total amount of rainfall in inches
    float rnfall = 0.0f;//amount of rainfall in inches
    float avgRn=0.0f;//average amount of rainfall in inches
    
    //Input data
    cout<<"Please enter number of years"<<endl;
    cin>>nyrs;
    //Output amounf of years
    while (nyrs < 1)
    {
        cout<<"Number of years must be at least 1. Please re-enter"<<endl;
        cin>>nyrs;
    }
    //output amount of rainfall per month
    for (int i= 1; 1 <=nyrs;i++)
    {
        for(int months =1; months<=MONTH; months++)
        {
            cout<<"Please enter the rainfall for "<<months<<" month: "<<endl;;
            cin>>rnfall;
            
            while (rnfall < 0)
            {
                cout<<"The rainfall cannot be negative number. Please re-enter: "<<endl;;
                cin>>rnfall;
            }
            totrnfl +=rnfall;
        }
    }
    cout<<"Number of months: "<<nyrs*MONTH<<endl;
    cout<<"Total rainfall: "<<setprecision(2)<<fixed<<totrnfl<<" inches."<<endl;
    cout<<"Average rainfall: "<<setprecision(2)<<fixed<<totrnfl/(nyrs*MONTH)<<" inches"<<endl;
    
    //Exit stage right!
    return 0;
}

