/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 10, 2017, 6:32 PM
 * Purpose:  ASCII codes
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
    char letter;//characters for the ASCII codes
    
    //Initialize variables
    letter = 0;
    
    //Output the transformed data
    cout<<"Displayed are the characters for the ASCII codes 0 - 127 " <<endl;
    for (int count = 0; count <=127; count++){
        if(count % 16 == 0 )
            cout<<endl;
        cout <<letter <<"  ";
        letter++;
    }
    //Exit stage right!
    return 0;
}

