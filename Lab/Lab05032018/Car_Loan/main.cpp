/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 3rd, 2018, 11:20 AM
 * Purpose:  Car Payment
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float price, down, tax, regist, finance, inter,
            monthPay, ballPay, totCost;//Initial Conditions
 
    //Initialize
    price=3.4e4f;     //$340,000
    down=5e-1;        //50%
    tax=8e-2;         //8%
    down=2e-2;        //2%
    inter=2e-2;       //2%
    percDep=1e-1f;    //10% 
    monthPay=300.00f; //$300.00
    
    finance=price-(price*down)+(price*tax)+(price*regist);
    
       
    //Map/Process Inputs to Outputs
    int year=2021;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year  Year     Savings  Interest   Deposit"<<endl;
    for( int nYear=0;nYear<=nYears&&savReq>svBegYr;nYear++,year++){
        cout<<setw(2)<<nYear
                <<setw(8)<<year
                <<setw(12)<<svBegYr
                <<setw(10)<<inEndYr
                <<setw(10)<<dpEndYr<<endl;
        int isvBgYr=(svBegYr+inEndYr+dpEndYr)*100;//Calculates in Pennies
        svBegYr=isvBgYr/100;//Shifts back to dollars
        inEndYr=svBegYr*roi;
    }
    cout<<"Savings to Retire = $"<<svBegYr
            <<" in year "<<year<<endl;
 
    
    //Output the results

    
    //Exit program!
    return 0;
}