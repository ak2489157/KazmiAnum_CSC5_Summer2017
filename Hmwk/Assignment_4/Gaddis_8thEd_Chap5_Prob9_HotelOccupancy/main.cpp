/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 10, 2017, 8:32 PM
 * Purpose:  Hotel Occupancy
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>  //Decimals
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int rmOnFlr = 0;//number of Rooms on the floor
    int totRm = 0;//Total number of rooms
    int totflr = 0;//total floors in the hotel
    int oRmFlr = 0;//number of occupied rooms on the floor
    int totORm = 0;//total number of occupied rooms
    float percOc = 0.0f;//percent occupied rooms
    
    //Initialize variables
    
    //Input data
    cout<<"Enter number of floors: "<<endl;
    cin>>totflr;
    
    while (totflr < 1)
    {
        cout<<"Number of floors must be at least 1. Please re-enter "<<endl;
        cin>>totflr;
    }
    for (int i = 1; i <=totflr; i++)
    {
        if (i !=13)
        {
            cout<<"Enter the number of rooms on the floor "<<i<<" "<<endl;;
            cin>>rmOnFlr;
           
            while(rmOnFlr < 10)
            {
                cout<<"Number of rooms on the floor "<<i<<" ";
                cin>> rmOnFlr;
                
            }
            cout<<"How many rooms are occupied?"<<endl;
            cin>>oRmFlr;
        }
        totRm += rmOnFlr;
        totORm +=oRmFlr;   
    }
    //OutPut Percentage of Occupied Rooms
    percOc = (totORm * 1.0f / totRm) * 100.0f;
            
    //Output the transformed data
    cout<<"The Hotel has a total of "<<totflr<<" floors"<<endl;
    cout<<"The Hotel has a total of "<<totRm<<" rooms"<<endl;
    cout<<"There are "<<totORm<<" rooms occupied"<<endl;
    cout<<"There are "<<totRm-totORm<<" empty Rooms"<<endl;
    cout<<"Percentage of Occupied rooms is "<<setprecision(2)<<fixed<<percOc<<"%"<<endl;
    //Exit stage right!
    return 0;
}

