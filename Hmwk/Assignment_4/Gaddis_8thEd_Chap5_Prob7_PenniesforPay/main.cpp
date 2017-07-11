/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 10, 2017, 12:55 PM
 * Purpose:  Pennies for Pay.
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
    int numDay= 1;
    float money = 1;
    float total = 0;
    float dayPay = 0;
    
    //Input data
    cout<< "Enter number of days"<<endl;
    cin>>numDay;
    
    //Output the Salary for the day
    while (numDay <1)
    {
        cout<<"Please enter valid number of days"<<endl;
        cin>>numDay;
    }
    for (int i=1;i<=numDay;i++)
    {
        dayPay = money /100;
        cout<<"Day "<<i<<" you earned $"<<dayPay<<endl;
        total+=dayPay;
        money*=2;
        
    }
    cout<<"Total earnings are $"<<total <<endl;
    
    //Exit stage right!
    return 0;
}

