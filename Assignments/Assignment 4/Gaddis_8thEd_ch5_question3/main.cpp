/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 2, 2018, 7:40 PM
 * Purpose:  Ocean Levels
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
    float tot;
    float oceanLv=1.50f;//in millimeters
 
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<setprecision(3)<<showpoint;
    cout<<"Year     Ocean Level"<<endl;
    for (int years=1; years<=25; years++){
        cout<<setw(2)<<years<<setw(14)<<tot<<endl;
        tot=oceanLv*years;
    }
    
    //Output data
    
    //Exit stage right!
    return 0;
}