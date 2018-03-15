/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on February 15, 2018, 12:25 AM
 * Purpose:  Paint Calculation
 *           
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath> //ceiling function
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float   pntCov,//Paint Coverage in ft^2/gallon
            fncLnth,//Fence length in feet
            fncHt,//Fence height in feet
            totArea,//Total Area in ft^2
            numGals;//Number of gallons of paint

    //Initial Variables
    pntCov=340.0f;
    fncHt=6.0f;
    fncLnth=100.0f;
    
    //Map/Process Inputs to Outputs
    totArea=4*fncHt*fncLnth;//Both sides painted twice
    numGals=ceil(totArea/pntCov);

    //Display Outputs
    cout<<"Paint Coverage per Gallon = "<<pntCov<<" ft"<<endl;
    cout<<"Fence Height = "<<fncHt<<" ft"<<endl;
    cout<<"Fence Length = "<<fncLnth<<" ft"<<endl;
    cout<<"Total Area to Cover = "<<totArea<<" ft^2"<<endl;
    cout<<"Number of Gallons of Paint Required = "<<numGals<<endl;
    
    //Exit program!
    return 0;
}