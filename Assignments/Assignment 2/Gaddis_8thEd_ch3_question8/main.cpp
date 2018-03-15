/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 13, 2018, 2:25 PM
 * Purpose:  Widget Calculation
 *           
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   pallet, widget, widgets, num, totweight;

    //Initial Variables
    widget= 12.5; //pounds
    cout<<"Input the number of widgets"<<endl;
    cin>>num;
    cout<<"Input the weight of pallet by itself"<<endl;
    cin>>pallet;
    
    //Map/Process Inputs to Outputs
    widgets=widget*num;
    totweight=pallet+widgets;

    //Display Outputs
    cout<<"the weight of pallet is = "<<pallet<<" lbs"<<endl;
    cout<<"The number of widgets = "<<num<<endl;
    cout<<"The weight of the widgets = "<<widgets<<" lbs"<<endl;
    cout<<"The total weight of the pallet and widgets = "<<totweight
            <<" lbs"<<endl;
    
    //Exit program!
    return 0;
}