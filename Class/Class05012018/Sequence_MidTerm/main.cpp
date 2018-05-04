/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 19, 2018, 11:30 AM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int nTerms;
    float x, seqVal, delta;
    
    //Initialize Variables
    nTerms=10;
    x=1;
    delta=seqVal=x;
    
    cout<<"Type in the value and sequence number"<<endl;
    cin>>x>>seqVal;
    
    //Process/Map inputs to outputs
    for (int cnt=3, term=2; term<=nTerms; cnt+=2, term++){
        delta=(-x*x/cnt/(cnt-1));
        seqVal+=delta;
    }
    
    //Output data
    cout<<"The sin( "<<x<<" )="<<sin(x)<<endl;
    cout<<"The sequence Value = "<<seqVal<<" for "<<nTerms<<" n Terms"<<endl;
    
    //Exit stage right!
    return 0;
}