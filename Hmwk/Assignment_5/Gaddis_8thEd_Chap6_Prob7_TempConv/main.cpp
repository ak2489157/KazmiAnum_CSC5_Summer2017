/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 17, 2017, 7:42 PM
 * Purpose:  Temperature Conversion
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float celsius (float f);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float c = 0.0f;
    
    //Initialize variables
    
    //Input data
    cout<<"I will now display celsius temperatures fpr 0 through 20 F"<<endl;
    
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i = 0; i<21;i++){
        c= celsius(i);
        cout<<i<<" degrees of Fahrenheit = "<<setprecision(2)<<fixed<<c<<" degrees of Celsius"<<endl;
    }
    //Exit stage right!
    return 0;
}
float celsius (float f)
{
    float c = 0.0f;
    c =( 5.0 /9)*(f-32);
    return c;
}
