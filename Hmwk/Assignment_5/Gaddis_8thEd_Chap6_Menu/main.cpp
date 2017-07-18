/* 
 * File:   main.cpp
 * Author: Anum Kazmi
 * Created on June 14, 2017, 11:32 AM
 * Purpose:  Menu
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library 
#include <math.h> //power function
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to another

//Function Prototypes

float calculateRetail(float,float);
float presentValue (float, float, int);
int coinToss(void)
{
    int randN;
    randN=1+rand()%2;
    return randN;
}
float celsius (float f);
float kineticEnergy (int m, int v);
float fallingDistance(int t=0);
int getNumAccidents(string);
void findLowest(int,int, int, int, int);
int getScore(int,int, int &total);
float calcAverage (int, int);
int findLowest (int ScoreArray[5]);
float getSales(string);
void findHighest (float, float, float, float);

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem 1"<<endl;
        cout<<"Type 2 for Problem 3"<<endl;
        cout<<"Type 3 for Problem 4"<<endl;
        cout<<"Type 4 for Problem 5"<<endl;
        cout<<"Type 5 for Problem 6"<<endl;
        cout<<"Type 6 for Problem 7"<<endl;
        cout<<"Type 7 for Problem 8"<<endl;
        cout<<"Type 8 for Problem 9"<<endl;
        cout<<"Type 9 for Problem 10"<<endl;
        cout<<"Type any other character to exit"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                 {
                //Declare variables
                float whlscst = 0;//whole scale cost
                float prcnt = 0;// percentage 
                float tlPrice=0;

                //Initialize variables

                //Input data
                    cout<<"Please enter non-negative number for the Wholesale price and the percentage"<<endl;;
                    cin>>whlscst>>prcnt;
                //Map inputs to outputs or process the data

                //Output the transformed data
                while (whlscst < 0||prcnt <0)
                {
                    cout<<"Please enter non-negative number for the Wholesale price and the percentage"<<endl;
                    cin>>whlscst>>prcnt;

                }

                tlPrice = calculateRetail(whlscst,prcnt);
                cout <<"The total cost is : $"<<tlPrice<<endl;


                //Exit stage right!
                return 0;
            }

            float calculateRetail(float cost,float percent)
            {
                float tlCost =0;
                tlCost = ((cost / 100)*percent)+cost;
                return tlCost;
            }
                break;
            }
            case '2':{
                //Declare variables
                    float NEsales, SEsales, NWsales, SWsales;//sales for northeast,southwest,southeast and northwest

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
                
                break;
            }
        case '3': {
            {
                //Declare variables
                int accN,accS,accE,accW,accC;

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

                            break;
                        }
        case '4':{
                            {
                            //Declare variables
                            int t=0;
                            float d=0;
                            //Initialize variables

                            //Input data
                            cout<<"I will now calculate the distance object is falling in 10 seconds"<<endl;
                            //Map inputs to outputs or process the data

                            //Output the transformed data
                            for (int i =1; i <= 10; i++){
                                d = fallingDistance(i);
                                cout<<i<<" seconds: "<<d<<" meters"<<endl;
                            }
                            //Exit stage right!
                            return 0;
                        }

                        float fallingDistance (int t)
                        {
                            float d=0;
                            const float g=9.8;

                            d = (0.5 * g) * (pow(t,2));
                            return d;
                        }

                            break;
                        }
        case '5':{
                            {
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

                            //Map inputs to outputs or process the data

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

                            break;
                        }
        case '6':{
                        {
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

                            break;
                        }
        case '7':{
                            {
                            //Declare variables
                            int aTimes=0;//amount of times
                            int randN=0;
                            string hdTl=" ";

                            //Initialize variables

                            //Input data
                            cout<<"How many time to toss the coin?"<<endl;
                            cin>>aTimes;

                            srand((time(0)));//seeing the random number generatpr

                            //Map inputs to outputs or process the data

                            //Output the transformed data
                            for (int i = 1; i <= aTimes; i++)
                            {
                                randN = coinToss();
                                if (randN==1)
                                    hdTl="Head";
                                else
                                    hdTl="Tail";
                                cout<<hdTl<<endl;
                            }
                            //Exit stage right!
                            return 0;
                        }


                            break;
                        }
        case '8':{
                            {
                            //Declare variables
                            float F=0;//future value
                            float r=0;//interest rate
                            int n=0;//number of years
                            float P = 0;

                            //Initialize variables

                            //Input data
                            cout<<"Please enter the amount of money you want to save: $ "<<endl;
                            cin>>F;
                            cout<<"Please enter the interest rate"<<endl;
                            cin>>r;
                            cout<<"Please enter the number of years you want to be saving "<<endl;
                            cin>>n;


                            //Map inputs to outputs or process the data
                            P=presentValue(F,r,n);
                            //Output the transformed data
                            cout<<"In order to save $ "<<F<<" you need to deposit $ "<<P<<endl;
                            //Exit stage right!
                            return 0;
                        }
                        float presentValue(float F, float r, int n)
                        {
                            float P;

                            P=F/(pow(1+(r*0.01),n));
                            return P;
                        }


                            break;
                        }
        case '9':{
                            {
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


                            break;
                        }
        default:
                            cout<<"You are exiting the program"<<endl;
        }
    }
    while(choice>='1'&&choice<='9');
    
    //Exit stage right!
    return 0;
}


