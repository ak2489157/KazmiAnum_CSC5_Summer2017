/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 17, 2017, 7:26 PM
 * Purpose:  Kinetic Energy
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <math.h>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float kineticEnergy (int m, int v);


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float ke=0;//kinetic energy
    int m=0;//mass
    int v=0;//velocity
    
    //Initialize variables
    
    //Input data
    cout<<"Please enter mass in kg: "<<endl;
    cin>>m;
    cout<< "Please enter velocity per second: "<<endl;
    cin>>v;
    
    //Output the transformed data
    ke = kineticEnergy (m,v);
    cout<<endl;
    cout<<"Kinetic energy of this object is "<<ke<<endl;
    //Exit stage right!
    return 0;
}

float kineticEnergy (int m, int v)
{
    return(0.5*m)*(pow(v,2));
}