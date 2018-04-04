/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 3, 2018, 11:0 PM
 * Purpose:  Menu for Assignment 4
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char choice;
    
    //Display menu
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Type 1 for Sum of Numbers"<<endl;
    cout<<"Type 2 for Characters for the ASCII Codes"<<endl;
    cout<<"Type 3 for Ocean Levels"<<endl;
    cout<<"Type 4 for Calories Burned"<<endl;
    cout<<"Type 5 for Membership Fees Increase"<<endl;
    cout<<"Type 6 for Calculating Pennies for Pay"<<endl;
    cout<<"Type 7 for My attraction to Earth"<<endl;
    cout<<"Type 8 for Stock Prices"<<endl;
    cin>>choice;
    
    //Process/Calculations Here
    if(choice>='1' && choice<='8'){
        switch(choice){
            case '1':{
                cout<<"Sum of Numbers"<<endl;
                //Declare Variables
                int posNum;

                //Initialize Variables
                cout<<" Input a positive number"<<endl;
                cin>>posNum;
                int sum=0;

                //Process/Map inputs to outputs
                for (int i=1; i<=posNum; i++){
                    sum += i;
                    cout<<sum<<endl;
                }
                break;
            }
            case '2':{
                cout<<"Characters for the ASCII Codes"<<endl;
                //Declare Variables
                int loop, counter;
                counter=1;

                //Initialize Variables

                //Process/Map inputs to outputs
                for(char loop = ' '; loop <= '~'; loop++, counter++){
                    cout<<loop<<" ";
                    if (counter == 9){
                        counter=0;
                        cout<<endl;
                    }
                }
                break;
            }
            case '3':{
                cout<<"Ocean Levels"<<endl;
                //Declare Variables
                float tot;
                float oceanLv=1.50f;//in millimeters

                //Initialize Variables

                //Process/Map inputs to outputs
                cout<<setprecision(3)<<showpoint;
                cout<<"Year     Ocean Level"<<endl;
                for (int years=1; years<=25; years++){
                    cout<<setw(2)<<years<<setw(14)<<tot<<endl;
                    tot=oceanLv*years;
                }
                break;
            }
            case '4':{
                cout<<"Calories Burned"<<endl;
                //Declare Variables
                float tot;
                float calBurn=3.60f;//Calories burned per minute

                //Initialize Variables

                //Process/Map inputs to outputs
                cout<<setprecision(3)<<showpoint;
                cout<<"Minutes     Calories Burned"<<endl;
                for (int min=1; min<=30; min++){
                    tot=min*calBurn;
                    cout<<setw(2)<<min<<setw(14)<<tot<<endl;
                }
                break;    
            }
            case '5':{
                cout<<"Membership Fees Increase"<<endl;
                //Declare Variables
                float speed, disttrv;

                //Initialize Variables

                //Process/Map inputs to outputs
                cout<<setprecision(4)<<showpoint;
                for (float hour=1; hour<=24; hour++){
                    cout<<"input the speed of the vehicle."<<endl;
                    cin>>speed;
                    cout<<"input the time (in hours) it traveled."<<endl;
                    cin>>hour;
                    cout<<"   hour      Distance Traveled"<<endl;
                    disttrv=speed*hour;
                    cout<<setw(5)<<hour<<setw(15)<<disttrv<<endl;break;
                }
                break;    
            }
            case '6':{
                cout<<"Calculating Pennies for Pay"<<endl;
                //Declare Variables
                unsigned int totPay, pyPrDay; //Pennies of pay
                char numDays=31;

                //Initialize Variables
                pyPrDay=1; //1 Penny on the first day
                totPay=pyPrDay; //Total Amount

                //Process/Map inputs to outputs
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"Day          Pay          Total"<<endl;
                for(int day=1;day<=numDays;day++){
                    cout<<setw(2)<<day
                    <<setw(15)<<pyPrDay/100.0f
                    <<setw(13)<<totPay/100.0f<<endl;
                    pyPrDay*=2;
                    totPay+=pyPrDay;
                }
                break;    
            }
            case '7':{
                cout<<"My attraction to Earth"<<endl;
                const float GRAVITY=6.673e-8f;//cm^3/g/sec^2
                const float CMMTRS=0.01f;//Centimeters to Meters
                const float MTRSFT=3.281f;//Meters to Feet
                const float LBSLUG=32.174f;//Pounds per slug
                
                //Declare Variables
                float myMass, msEarth,rEarth, myWt, myWtCnv;

                //Initialize Variables
                myMass=4.25f;//slugs
                myWtCnv=myMass*LBSLUG;//my weight conversion
                msEarth=5.972e27f;//grams
                rEarth=6.371e6f;//meters

                //Process/Map inputs to outputs
                myWt=(GRAVITY*CMMTRS*CMMTRS*CMMTRS*myMass
                        *msEarth*MTRSFT)
                        /(rEarth*rEarth);

                //Output data
                cout<<fixed<<setprecision(0);
                cout<<myMass<<" slugs = "<<myWt<<" lbs"<<endl;
                cout<<myMass<<" slugs = "<<myWtCnv<<" lbs"<<endl;
                break;    
            }
            case '8':{
                cout<<"Stock Prices"<<endl;
                //Initialize the random seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare all Variables Here
                int dolStk, numStk, denStk; //stock price $ num/den
                int numShrs; //number of shares
                float valStk; //value of stock in $
                char again; //Continue or not

                //Input or initialize values Here
                denStk=8;

                //Process/Calculations Here
                do{
                    //Randomly choose the stock price
                    dolStk=rand()%1000; //[0-999]
                    numStk=rand()%8; //[0-7]/8 
                    numShrs=rand()%90+10; //[10-99]

                    //Calculate the stock value
                    valStk=numShrs*((dolStk+static_cast<float>(numStk))/denStk);

                //Output Located Here
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<"The number of shares of stock = "<<numShrs
                            <<endl;
                    cout<<"The value of the stock = $"<<dolStk<<
                            " "<<numStk<<"/"<<denStk<<endl;
                    cout<<"The total value of the stock = $"<<valStk<<endl;

                    //Prompt user to see if they want to continue
                    cout<<"Would you like to continue Y/N"<<endl;
                    cin>>again;
                }while(again=='Y'||again=='y');
                break;        
            }
        }
    }else{
        cout<<"Exiting Menu"<<endl;
    }
    
    //Output Located Here

    //Exit
    return 0;
}

