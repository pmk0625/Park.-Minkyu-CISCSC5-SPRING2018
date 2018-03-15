/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 06, 2018, 11:20 AM
 * Purpose:  Payment Calculation
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
const float PERCENT=100;

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   payRate, //Pay Rate per Hour
            hrsWrkd, //Hours Worked
            ovrTime, //Overtime Worked
            ovrPay, //Overtime Pay
            ss, //Social Security
            fedTax, //Federal Tax
            statTax,//State Tax
            unDues, //Union Dues
            grsPay, //Gross Pay
            hlthIns, //Health Insurances
            numDept, //Number of Dependents
            netPay, //Net Pay
            totPay, //Total Pay With More than 3 dependents
            totPay1, //Total Pay without dependents
            totTax; //Total Taxes
    
    //Input or initialize values Here
    payRate=16.78f; //Pay Rate in $
    ss=0.06f; //Social Security is 6%
    fedTax=.14f; //Federal Tax is 14%
    statTax=0.05f; //State Tax is 5%
    unDues=10.00f; //Union Dues in $
    hrsWrkd=40.00f; //Hours Worked
    ovrTime=5.00f; //Overtime Worked
    hlthIns=35.00f; //If 3 or more Dependence $35 extra deduction
    
    
    
    //Process/Calculations Here
    grsPay=hrsWrkd*payRate;
    ovrPay=ovrTime*(payRate*1.5);
    totPay1=grsPay+ovrPay;
    totTax=ss+fedTax+statTax;
    netPay=((grsPay+ovrPay)-((grsPay+ovrPay)*totTax))-unDues;
    totPay=netPay-hlthIns;
    
    
    //Output Located Here
    cout<<"Pay Rate = $"<<payRate<<endl;
    cout<<"Total Taxes = "<<totTax*PERCENT<<" Percent"<<endl;
    cout<<"Gross Pay = $"<<grsPay<<endl;
    cout<<"Overtime Pay = $"<<ovrPay<<endl;
    cout<<"Total Pay = $"<<totPay1<<endl;
    cout<<"Net Pay without Dependents = $"<<netPay<<endl;
    cout<<"Total Net Pay with Dependents = $"<<totPay<<endl;

    //Exit
    return 0;
}

