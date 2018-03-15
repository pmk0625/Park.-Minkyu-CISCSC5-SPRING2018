/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 01, 2018, 11:40 PM
 * Purpose:  Finding Annual Pay
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,

//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float   baseInc, //Base Income Rate for an Employee
            payPer, //Pay Periods in a year
            annInc; //Annual Income Amount for an Employee
    
    //Initialize Variables
    baseInc=2200.00; //Base Pay in $'
    payPer=26; //Pay Period in a year equals to 26 Pay Periods
    
    //Process/Map inputs to outputs
    annInc=baseInc*payPer;
    
    
    //Output data
    cout<<"Base Income = $"<<baseInc<<endl;
    cout<<"Pay Periods per Year = "<<payPer<<endl;
    cout<<"Annual Income = $"<<annInc<<endl;
    
    //Exit stage right!
    return 0;
}