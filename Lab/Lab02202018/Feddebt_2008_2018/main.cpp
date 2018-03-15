/* 
 * File:   main.cpp
 * Author: Minkyu R. Park  
 * Created on February 20, 2018, 11:50 AM
 * Purpose: Federal Debt
 */

//System Libraries
#include <iostream> //I/O Library -> cout, endl
using namespace std;//namespace I/O stream Library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions , 2-D Array Columns
const float TRLLN=1e12f;//1 Trillion
const float MLLN=1e6f; //1 Million
const int   PCNT=100;    //Conversion for percent

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float fedDbt8, usPop8, fedDbt18, usPop18, dbtPP8, dbtPP18, pctDebt, pcntInc;
    
    //Initial Variables
    fedDbt8=9.9*TRLLN;
    usPop8=304*MLLN;
    fedDbt18=20.7*TRLLN;
    usPop18=326*MLLN;
    
    //Map/Process Inputs to Outputs
    dbtPP8=fedDbt8/usPop8;
    dbtPP18=fedDbt18/usPop18;
    pctDebt=fedDbt18-fedDbt8/fedDbt8*PCNT;
    pcntInc=usPop18-usPop8/usPop8*PCNT;
    
    //Display Outputs
    cout<<"Debt in 2008 = "<<fedDbt8<<endl;
    cout<<"Us Population in 2008 = "<<usPop8<<endl;
    cout<<"Debt in 2018 = "<<fedDbt18<<endl;
    cout<<"Us Population in 2018 = "<<usPop18<<endl;
    cout<<"Debt/Person 2008 = $"<<dbtPP8<<endl;
    cout<<"Debt/Person 2018 = $"<<dbtPP18<<endl;
    cout<<"Percentage Debt = "<<pctDebt<<endl;
    cout<<"Percentage Increase = "<<pcntInc<<endl;
    
    //Exit program!
    return 0;
}