/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 06, 2018, 12:20 AM
 * Purpose: Diet (How many diet is required to kill a mouse)
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   gasMile, galGasT, numMile;

    
    //Input or initialize values Here
    cout<<"This program calculates Miles per Gallon of Gas"<<endl;
    cout<<"type in the number of gallon/gas car can hold"<<endl;
    cin>>galGasT;
    cout<<"type in the number of miles it can be driven with full tank"<<endl;
    cin>>numMile;
     
    //Process/Calculations Here
    numMile=galGasT/numMile;

    //Output Located Here
    cout<<"Number of gallon/gas car can hold = "<<galGasT<<endl;
    cout<<"Number of miles it can be driven with full tank = "<<numMile<<endl;
    cout<<"Gas mileage per Gallon of Gas"<<gasMile<<endl;
    
    //Exit
    return 0;
}

