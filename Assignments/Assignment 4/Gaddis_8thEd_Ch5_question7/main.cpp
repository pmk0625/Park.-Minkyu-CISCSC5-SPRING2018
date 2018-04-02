/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 29, 2018, 11:20 AM
 * Purpose:  Calculating Pennies for Pay
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
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
    
    //Output data
    
    //Exit stage right!
    return 0;
}