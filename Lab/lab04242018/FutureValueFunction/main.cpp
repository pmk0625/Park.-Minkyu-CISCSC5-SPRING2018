/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 24, 2018, 11:30 AM
 * Purpose:  Future Value Function
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>  //
#include <cmath>    //Math Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float PERCENT=1e2f; //100

//Function Prototypes
float fval1(float, float, int);//Future value with power function
float fval2(float, float, int);//Future value with log and exponential function
float fval3(float, float, int);//Future value with for loop
float fval4(float, float, int);//Future value by recursion

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float   presVal, //Present Value in $'s
            intRate; //Interest rate in %
    int numCmp;      //Number of compounding periods in years
    
    //Initialize Variables
    presVal=1e2f;    //$100's
    intRate=6.00f;   //6 percent
    
    //By the rule of 72
    numCmp=72/intRate;
    
    //Process/Map inputs to outputs
    cout<<"Present Value = $"<<presVal<<endl;
    cout<<"Interest Rate = "<<intRate<<" %"<<endl;
    cout<<"Number of compounding periods = "<<numCmp<<" years"<<endl;
    cout<<"Saving using FV -> power     = $"<<fval1(presVal, intRate/PERCENT, numCmp)<<endl;
    cout<<"Saving using FV -> log/exp.  = $"<<fval2(presVal, intRate/PERCENT, numCmp)<<endl;
    cout<<"Saving using FV -> for-loop  = $"<<fval3(presVal, intRate/PERCENT, numCmp)<<endl;
    cout<<"Saving using FV -> recursion = $"<<fval4(presVal, intRate/PERCENT, numCmp)<<endl;
    
    //Exit stage right!
    return 0;
}
//                   Future Value Functions
//
//Inputs:
//pv -> Present value in $'s
//ir -> Interest rate
//n  -> Number of Compounding periods (years)
//Outputs:
//f  -> Future value in dollars
float fval1(float pv, float ir, int n){
    return pv*pow((1+ir), n);
}

float fval2(float pv, float ir, int n){
    return pv*exp(n*log(1+ir));
}

float fval3(float pv, float ir, int n){
    for(int i=1; i<=n; i++){
        pv*=(1+ir);
    }
    return pv;
}

float fval4(float pv, float ir, int n){
    if (n<=0)return pv;
    return fval4(pv, ir, n-1)*(1+ir);
    }
