/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 2, 2018, 9:00 PM
 * Purpose:  Calories Burned
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
    float calBurn=3.60f;//Calories burned per minute
 
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<setprecision(3)<<showpoint;
    cout<<"Minutes     Calories Burned"<<endl;
    for (int min=1; min<=30; min++){
        tot=min*calBurn;
        cout<<setw(2)<<min<<setw(14)<<tot<<endl;
    }
    
    //Output data
    
    //Exit stage right!
    return 0;
}