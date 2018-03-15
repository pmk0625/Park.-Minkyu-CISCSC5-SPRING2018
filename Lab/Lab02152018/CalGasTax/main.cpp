/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on February 15, 2018, 11:55 AM
 * Purpose:  Gas Tax at the pump
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
    float   pumpprc,//Pump Price in &'s
            baseprc,//Base Price in &'s 
            fedtax,//Federal tax in $'s/gallon 
            statetax,//State tax in $'s/gallon
            saletax,//Sales tax in % of Base Price
            totTax,//Tot taxes paid/gallon
            prcntTax;//Percentage taxes paid

    //Initial Variables
    pumpprc=3.27f;//&3.30/gallon
    fedtax=0.184f;//18.4 cents/gallon .184 &'s/gallon
    statetax=0.417f;//41.7 cents/gallon .417 &'s/gallon
    saletax=0.0225f;//2.25% sales tax from base pump price
    
    //Map/Process Inputs to Outputs
    baseprc=(pumpprc-fedtax-statetax)/(1+saletax);
    totTax=pumpprc-baseprc;
    prcntTax=totTax/baseprc*PERCENT;

    //Display Outputs
    cout<<"Pump Price = &"<<pumpprc<<"/gallon"<<endl;
    cout<<"Federal Excise Tax = $"<<fedtax<<"/gallon"<<endl;
    cout<<"State Excise Tax = $"<<statetax<<"/gallon"<<endl;
    cout<<"Sales Tax = $"<<saletax<<"/gallon"<<endl;
    cout<<"Base Price = $"<<baseprc<<"/gallon"<<endl;
    cout<<"Total Taxes = $"<<totTax<<"/gallon"<<endl;
    cout<<"Percent Tax = "<<prcntTax<<"%"<<endl;
    
    //Exit program!
    return 0;
}