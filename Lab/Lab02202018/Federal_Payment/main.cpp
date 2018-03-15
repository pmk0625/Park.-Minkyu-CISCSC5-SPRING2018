/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on February 22, 2018, 11:35 AM
 * Purpose:  Calculating Federal Interest Payment     
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const float TRLLN=1e12f;//Trillion 10^12
const float BILLN=1e9f;//Billion 10^9
const char  PERCENT=100;//Conversion to percent

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   fedDebt, //Federal Debt in $'s 
            fedBdgt, //Federal Budget in $'s
            intRate, //Interest rate on the Debt %/year
            dbtPaym, //Debt Payment in $'s/year
            pcntPaym;//Percentage of Payment/year of the Federal Budget

    //Initial Variables
    fedDebt=20.7*TRLLN;
    fedBdgt=4.1*TRLLN;
    
    //Input the potential interest rate per year
    cout<<"This program calculates the impact of the interest "
            <<"rate on the Federal Budget given the current "
            <<"Federal Debt"<<endl;
    cout<<"Input the potential interest rate 1 to 5 percent/year"<<endl;
    cin>>intRate;
    
    //Map/Process Inputs to Outputs
    intRate=intRate/PERCENT;
    dbtPaym=fedDebt*intRate;
    pcntPaym=dbtPaym/fedBdgt*PERCENT;

    //Display Outputs
    cout<<"Federal Debt       = $"<<fedDebt/TRLLN<<" Trillion"<<endl;
    cout<<"Federal Budget     = $"<<fedBdgt/TRLLN<<" Trillion"<<endl;
    cout<<"Interest Rate/year = "<<intRate*PERCENT<<"%"<<endl;
    cout<<"Debt Payment       = "<<dbtPaym/BILLN<<" Billon/year"<<endl;
    cout<<"Percentage Payment to the Federal Budget = "
            <<pcntPaym<<"%"<<endl;
    
    //Exit program!
    return 0;
}