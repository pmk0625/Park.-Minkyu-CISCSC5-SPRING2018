/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 12, 2018 7:45PM
 * Purpose:  Calculating Rainfall
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    string  mon1,     //First Month of Rain
            mon2,     //Second Month of Rain
            mon3;     //Third Month of Rain
    float   rain1,      //Rainfall for first month
            rain2,      //Rainfall for Second month
            rain3,      //Rainfall for third month
            totrain;    //Total Rainfall
    //Initial Variables
            
    //Map/Process Inputs to Outputs
    cout<<"Input the first month"<<endl;
    cin>>mon1;
    cout<<"Input rainfall"<<endl;
    cin>>rain1;
    cout<<"Input second month"<<endl;
    cin>>mon2;
    cout<<"Input rainfall"<<endl;
    cin>>rain2;
    cout<<"Input third month"<<endl;
    cin>>mon3;
    cout<<"Input its total rainfall"<<endl;
    cin>>rain3;
    
    //Calculation
    totrain=(rain1+rain2+rain3)/3.0;
   
    //Display Outputs
    cout<<mon1<<":   "<<rain1<<" Inches of Rain"<<endl;
    cout<<mon2<<":   "<<rain2<<" Inches of Rain"<<endl;
    cout<<mon3<<":   "<<rain3<<" Inches of Rain"<<endl;
    cout<<"Total Average Rainfall for all three months = "<<setprecision(3)
            <<totrain<<" Inches"<<endl;
    //Exit Program
    return 0;
}

