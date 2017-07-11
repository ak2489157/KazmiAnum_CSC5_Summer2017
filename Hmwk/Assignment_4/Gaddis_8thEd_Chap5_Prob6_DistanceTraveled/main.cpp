/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 10, 2017, 7:32 PM
 * Purpose:  Distance Traveled.
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
    float dstnc;//distance traveled dependent on hours inputted
    float spd;//miles per hour
    int time;//amount of hours traveled
    
    //Input data
    cout<<"Declare Speed of the vehicle in mph?"<<endl;
    cin>>spd;
    
    //Output using while - loop
    while (spd<=0){
        cout<<"Speed must be greater than zero. Please enter speed again: "<<endl;
        cin>>spd;
        
    }
    cout<< "How many hours did it travel?"<<endl;
    cin>>time;     
   
    while(time < 1)
    {
        cout<<"Time must be greater than zero. Please enter time again: "<<endl;;
        cin>>time;
    }
    cout<<"Hour    Distance Traveled (miles)"<<endl;
    cout<<"---------------------------------"<<endl;
    
    //Output hours and distance traveled per hour
    for (int i=1; i<=time; i++)
    {
        dstnc = spd * i;
        cout<<i<<"       "<<dstnc<<endl;
    }
    
    //Exit stage right!
    return 0;
}

