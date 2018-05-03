/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 19, 2018, 11:30 AM
 * Purpose:  Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float PERCENT=100;

//Function Prototypes
float retail(float, float); //Calculating Retail

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float cost, markup;
    
    //Initialize Variables
    cout<<"Input the cost and its percentage markup"<<endl;
    cin>>cost>>markup;
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The wholesale cost = $"<<cost<<endl;
    cout<<"The markup percentage = "<<markup<<"%"<<endl;
    cout<<"The retail cost = $"<<retail(cost, markup)<<endl;
    
    //Exit stage right!
    return 0;
}

float retail (float cost, float markup){
    return (cost+(cost*(markup/PERCENT)));
}