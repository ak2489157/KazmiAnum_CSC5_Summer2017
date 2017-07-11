/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 9, 2017, 5:32 PM
 * Purpose:  Sum of Numbers
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
    int n,// Positive Integer
        sum =0;//sum of integer with all other integers preceding it
       
    
    //Input data
    cout<<"Enter a Positive Integer"<<endl;
    cin>>n;
    
    //Output the transformed data
    for (int counter =0; counter<=n; counter++)
    {
        sum= sum+n;
        counter++;
    }
      if (n < 1)
      {
          cout<<"\n"<<n<<"is an invalid input.";
          cout<<"The program will now terminate.\n";
                  
      }
      else 
          cout<<"\nThe sum of number 1 - " <<n<<" is "<<sum<<endl;
        
    
    //Exit stage right!
    return 0;
}

