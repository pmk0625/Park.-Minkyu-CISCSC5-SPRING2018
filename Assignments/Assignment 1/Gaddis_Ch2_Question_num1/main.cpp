/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on February 27, 2018, 8:30 PM
 * Purpose:  Write program that stores integers and sum of two variables
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float x, y, z; //variables
    
    //Initialize Variables
    x=50; //integer value of x will be 50.
    y=100; //integer value of y will be 100.
    
    
    //Process/Map inputs to outputs
    z=x+y; //Integer x + y will become z.
    
    //Output data
    cout<<"Variables of x + y will = "<<z<<"(z)"<<endl;
    cout<<"therefor 50 + 100 = "<<z<<endl;
    
    //Exit stage right!
    return 0;
}