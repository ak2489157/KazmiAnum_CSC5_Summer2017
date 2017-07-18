/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 14, 2017, 11:32 AM
 * Purpose:  Markup
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

float calculateRetail(float,float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float whlscst = 0;//whole scale cost
    float prcnt = 0;// percentage 
    float tlPrice=0;
    
    //Initialize variables
    
    //Input data
        cout<<"Please enter non-negative number for the Wholesale price and the percentage"<<endl;;
        cin>>whlscst>>prcnt;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    while (whlscst < 0||prcnt <0)
    {
        cout<<"Please enter non-negative number for the Wholesale price and the percentage"<<endl;
        cin>>whlscst>>prcnt;
        
    }
        
    tlPrice = calculateRetail(whlscst,prcnt);
    cout <<"The total cost is : $"<<tlPrice<<endl;
    
    
    //Exit stage right!
    return 0;
}

float calculateRetail(float cost,float percent)
{
    float tlCost =0;
    tlCost = ((cost / 100)*percent)+cost;
    return tlCost;
}