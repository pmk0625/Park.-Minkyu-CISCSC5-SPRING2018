/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 29, 2018, 12:05 PM
 * Purpose:  My attraction to Earth
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float GRAVITY=6.673e-8f;//cm^3/g/sec^2
const float CMMTRS=0.01f;//Centimeters to Meters
const float MTRSFT=3.281f;//Meters to Feet
const float LBSLUG=32.174f;//Pounds per slug

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float myMass, msEarth,rEarth, myWt, myWtCnv;
    
    //Initialize Variables
    myMass=4.25f;//slugs
    myWtCnv=myMass*LBSLUG;//my weight conversion
    msEarth=5.972e27f;//grams
    rEarth=6.371e6f;//meters
    
    //Process/Map inputs to outputs
    myWt=(GRAVITY*CMMTRS*CMMTRS*CMMTRS*myMass
            *msEarth*MTRSFT)
            /(rEarth*rEarth);
    
    //Output data
    cout<<fixed<<setprecision(0);
    cout<<myMass<<" slugs = "<<myWt<<" lbs"<<endl;
    cout<<myMass<<" slugs = "<<myWtCnv<<" lbs"<<endl;
    
    //Exit stage right!
    return 0;
}