/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on June 14, 2017, 11:32 AM
 * Purpose:  Lowest Score Drop
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int getScore(int,int, int &total);
float calcAverage (int, int);
int findLowest (int ScoreArray[5]);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int scoreArray[5];
    int testScore=0;
    float avg=0.0f;
    int lowest =0;
    int total =0;
    
    //populate the array 
    for (int i=1;i<=5; i++)
    {
        testScore=getScore(testScore,i,total);
        scoreArray[i-1]= testScore;
        
    }
    
    lowest = findLowest(scoreArray);
    avg =calcAverage(lowest,total);
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"The lowest score dropped was "<<lowest<<endl;
    cout<<"Average is "<<setprecision(2)<<fixed<<avg;
    
    //Exit stage right!
    return 0;
}

float calcAverage(int lowest, int total)
{
    int sumOfFour=0;
    float avg =0.0f;
    sumOfFour = total - lowest;
    avg = sumOfFour /4.0f;
    return avg;
    
}

int findLowest(int scoreArray[5])
{
    int smallest = scoreArray[0];
    for (int i =1; i <5; i++)
    {
        if(scoreArray[i]<smallest)
            smallest = scoreArray [i];
    }
    return smallest;
}

int getScore(int testScore, int i, int &total)
{
    cout<<"Please enter test score for exam number "<<i<<endl;
    cin>>testScore;
    
    //validate input
    while(testScore <0 || testScore>100)
    {
        cout<<"Please enter valid score. Try again: ";
        cin>>testScore;
        
    }
    total +=testScore;
    return testScore;
}
