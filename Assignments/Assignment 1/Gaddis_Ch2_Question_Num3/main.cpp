/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on February 28, 2018, 8:00 PM
 * Purpose:  Total Sales Tax
 *           
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
const float PERCENT=100;//Calculate percentages

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   totSale,//Total sales price in $'s
            baseSale,//Base sales price in $'s
            totTax,//Total taxes paid
            totPcnt,//Total Percentage of taxes paid
            statPcnt,//Percentage taxes paid for State
            cntyPcnt;//Percentage taxes paid for County

    //Initial Variables
    totSale=95.00f;//95$ of Purchase
    statPcnt=0.04f;//State sales tax percentage is 4%
    cntyPcnt=0.02f;//County sales tax percentage is 2%
    
    //Map/Process Inputs to Outputs
    totPcnt=(statPcnt+cntyPcnt);
    baseSale=(totSale)-(totSale*totPcnt);
    totTax=totSale-baseSale;
    

    //Display Outputs
    cout<<"Total Percent of Tax = "<<totPcnt*PERCENT<<" %"<<endl;
    cout<<"Total Taxes Paid = $"<<totTax<<endl;
    cout<<"Base Sales without Tax = $"<<baseSale<<endl;
    
    //Exit program!
    return 0;
}