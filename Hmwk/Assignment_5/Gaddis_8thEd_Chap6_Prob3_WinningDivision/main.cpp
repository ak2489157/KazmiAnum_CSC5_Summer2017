/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 16, 2017, 11:32 AM
 * Purpose:  Winning Division
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float getSales(string);
void findHighest (float, float, float, float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float NEsales, SEsales, NWsales, SWsales;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i = 0; i<4; i++)
    {
        switch (i)
        {
            case 0:
                NEsales = getSales("NE");
                break;
            case 1:
                SEsales = getSales ("SE");
                break;
            case 2:
                NWsales = getSales ("NW");
                break;
            default:
                SWsales = getSales ("SW");
                break;
                
        }
              
    }
    findHighest(NEsales,SEsales,NWsales,SWsales);
    //Exit stage right!
    
}

float getSales(string name)
{
    float sales = 0;
    cout<<"Please enter the sales for the division "<<name<<" $"<<endl;
    cin>>sales;
    
    while (sales <0)
    {
        cout<<"Sales cannot be a negative number. please re-enter: $";
        cin>>sales;
    }
    return sales;
}

void findHighest (float NEsales,float SEsales,float NWsales,float SWsales)
{
    float highest = 0;
    string division ="";
    
    if (NEsales > SEsales && NEsales > NWsales && SEsales > SWsales)
    {
        highest = NEsales;
        division = "North East";
    }
    else if (SEsales > NEsales && SEsales > NWsales && SEsales > SWsales)
    {
        highest = SEsales;
        division = "South East";
    }
    else if (NWsales > NEsales && NWsales > SEsales && NWsales > SWsales)
    {
        highest = NWsales;
        division = "North West";
    }
    else
    {
        highest = SWsales;
        division = "South West";
        
    }
    cout<< "The division with the highest sales is "<<division<<"with total sales of $"<<highest<<endl;
}
