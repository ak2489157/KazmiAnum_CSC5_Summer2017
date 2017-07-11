/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on July 10, 2017, 7:32 PM
 * Purpose:  Menu
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
        //Declare variables
    int nyrs = 0;// number of years
    const int MONTH = 12;// Amount of months in a year
    float totrnfl= 0.0f;//total amount of rainfall in inches
    float rnfall = 0.0f;//amount of rainfall in inches
    float avgRn=0.0f;//average amount of rainfall in inches
    
    //Input data
    cout<<"Please enter number of years"<<endl;
    cin>>nyrs;
    //Output amounf of years
    while (nyrs < 1)
    {
        cout<<"Number of years must be at least 1. Please re-enter"<<endl;
        cin>>nyrs;
    }
    //output amount of rainfall per month
    for (int i= 1; 1 <=nyrs;i++)
    {
        for(int months =1; months<=MONTH; months++)
        {
            cout<<"Please enter the rainfall for "<<months<<" month: "<<endl;;
            cin>>rnfall;
            
            while (rnfall < 0)
            {
                cout<<"The rainfall cannot be negative number. Please re-enter: "<<endl;;
                cin>>rnfall;
            }
            totrnfl +=rnfall;
        }
    }
    cout<<"Number of months: "<<nyrs*MONTH<<endl;
    cout<<"Total rainfall: "<<setprecision(2)<<fixed<<totrnfl<<" inches."<<endl;
    cout<<"Average rainfall: "<<setprecision(2)<<fixed<<totrnfl/(nyrs*MONTH)<<" inches"<<endl;
    
    //Exit stage right!
    return 0;
 //***********************************************************************************************
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
//***********************************************************************************************
 //Declare variables
    char letter;//
    
    //Initialize variables
    letter = 0;
    //Input data
    
    //Map inputs to outputs or process the data
    
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
//***********************************************************************************************
    //Declare variables
    float level = 0;//Ocean Level rising from zero
    int year =25;// Last year the ocean level is to be reported
    //Initialize Variables
    
    //Map inputs to outputs or process the data
    cout<<"Year      Increase in Ocean Level"<<endl;
      
    //Output the Ocean Levels
    for (int i = 1; i <=year; i++)
    {
        level+=1.5;
        cout<<"Year "<<i<<"    "<<level<<"mm"<<endl;
    }
    //Exit stage right!
    return 0;
//***********************************************************************************************
    //Declare variables
    float calBurn;//total amount of calories burned in a given time frame
    float calPMin= 3.9f;//Rate in which calories are burned
    
    //Output amount of calories Burned using a for - loop
    for (int i = 10; i<=30; i+=5)
    {
        calBurn = i * calPMin;
        cout<< "In "<<i<<" minutes you burned "<<calBurn<<" calories."<<endl;  
    }
    //Exit stage right!
    return 0;
 //***********************************************************************************************
    //Declare variables
    const float INCRS = 0.04;
    const int YRS = 6;
    float mbrshp = 2500;
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    for (int i=1;i<=YRS;i++)
    {
        mbrshp=mbrshp+(mbrshp*INCRS);
        cout<<"Year "<<i<<" fees are: $"<<mbrshp<<endl;
    }
    //Exit stage right!
    return 0;
//***********************************************************************************************
int numDay= 1;
    float money = 1;
    float total = 0;
    float dayPay = 0;
    
    //Input data
    cout<< "Enter number of days"<<endl;
    cin>>numDay;
    
    //Output the Salary for the day
    while (numDay <1)
    {
        cout<<"Please enter valid number of days"<<endl;
        cin>>numDay;
    }
    for (int i=1;i<=numDay;i++)
    {
        dayPay = money /100;
        cout<<"Day "<<i<<" you earned $"<<dayPay<<endl;
        total+=dayPay;
        money*=2;
        
    }
    cout<<"Total earnings are $"<<total <<endl;
    
    //Exit stage right!
    return 0;
//***********************************************************************************************
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
//***********************************************************************************************
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

