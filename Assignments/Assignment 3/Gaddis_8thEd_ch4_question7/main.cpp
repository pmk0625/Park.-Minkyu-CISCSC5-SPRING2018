/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 22, 2018, 3:30 PM
 * Purpose:  Time Calender
 *           
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns
char PERCENT;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float num, min, hour, day;

    //Initial Variables
    cout<<"This program Calculates the time calender"<<endl;
    cout<<"Input a number in seconds"<<endl;
    cin>>num;
    
    //process and calculation here
    cout<<"You entered "<<num<<" seconds"<<endl;
    min=num/60.00;
    hour=num/3600.00;
    day=num/86400.00;
  
    //Display Outputs
    cout<<fixed<<setprecision(2);
    if (num >= 60 && num < 3600){
        cout<<min<<" minutes"<<endl;
    }else if (num >= 3600 && num < 86400){
        cout<<hour<<" hours"<<endl;
    }else if (num >= 86400){
        cout<<day<<" days"<<endl;
    }

    //Exit program!
    return 0;
}