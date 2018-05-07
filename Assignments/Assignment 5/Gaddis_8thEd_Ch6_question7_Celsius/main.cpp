/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 3, 2018, 11:30 PM
 * Purpose:  Celsius Temperature Table
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int Temperature(int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int Celsius, Fahren;
    
    //Initialize Variables
    cout<<"Input the Temperature in Fahrenheit"<<endl;
    cin>>Fahren;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"Celsius = "<<Temperature(Celsius, Fahren)<<endl;
    
    //Exit stage right!
    return 0;
}

int Temperature(int Celsius, int Fahren){
    return Celsius=(5/9)*(Fahren-32);
}


