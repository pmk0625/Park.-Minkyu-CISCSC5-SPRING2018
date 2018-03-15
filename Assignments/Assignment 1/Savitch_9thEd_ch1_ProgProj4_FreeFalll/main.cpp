/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on February 22, 2018, 12:25 PM
 * Purpose:  Savitch 9th Ed. Chap1. ProgProj4. FreeFall     
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants

//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   time, //Time of Freefall in Sec 
            dist, //Distance is measured in ft
            GRAVITY;//Gravity in ft/sec^2
            
    //Initial Variables
    GRAVITY=32.174;
    
    //Input the potential interest rate per year
    cout<<"This program calculates the distance of a freefall object"<<endl;
    cout<<"Input the time in sec"<<endl;
    cin>>time;
    
    //Map/Process Inputs to Outputs
    dist=(0.5*GRAVITY)*time*time;
    
    //Display Outputs
    cout<<"Distance = "<<dist<<" ft"<<endl;
    
    //Exit program!
    return 0;
}