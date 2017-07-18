/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 17, 2017, 12:32 AM
 * Purpose:  Safe Driving Area
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int getNumAccidents(string);
void findLowest(int,int, int, int, int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int accN,accS,accE,accW,accC;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i=0;i<5;i++){
        switch (i){
            case 0:
                accN = getNumAccidents("North");
                break;
            case 1:
                accS = getNumAccidents("South");
                break;
            case 2:
                accE = getNumAccidents("East");
                break;
            case 3:
                accW = getNumAccidents("West");
                break;
            default:
                accC =getNumAccidents("Central");
                  
        }
    }
    findLowest(accN,accS,accE,accW, accC);
    
    //Exit stage right!
    return 0;
}
int getNumAccidents(string region)
{
    int accidents = 0;
    cout<<"Please enter number of accidents for region "<<region<<" "<<endl;
    cin>>accidents;
    
    while(accidents < 0)
    {
        cout<<"Number of accidents must be a positive number. Please re-enter: "<<endl;
        cin>>accidents;         
    }
    
    return accidents;
}

void findLowest (int r1, int r2, int r3, int r4, int r5)
{
    int lowest = 0;
    string region = " ";
    
    if (r1 < r2 && r1 < r3 && r1< r4 && r1 <r5)
    {
        lowest = r1;
        region = "North";
    }
    else if (r2 < r1 && r2 < r3 && r2< r4 && r2 <r5)
    {
        lowest = r2;
        region = "South";
    }
    else if (r3 < r1 && r3 < r2 && r3< r4 && r3 <r5)
    {
        lowest = r3;
        region = "East";
    }
    else if (r4 < r1 && r4 < r2 && r4< r1 && r4 <r5)
    {
        lowest = r4;
        region = "West";
    }
    else{
        lowest = r5;
        region = "Central";
    }
    cout<<"The region with lowest accidents is "<<region<<". Total number of accidents in that region was "<<lowest<<endl;
}