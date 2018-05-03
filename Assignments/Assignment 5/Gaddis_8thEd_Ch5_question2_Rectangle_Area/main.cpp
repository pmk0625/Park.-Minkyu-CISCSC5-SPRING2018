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
int length(int); //Get Length
int width(int); //Get Width
float area(int, int); //Get Area
float display(int, int, float);//Display Date

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
    //Output data
    cout<<"The length = "<<length(length)<<endl;
    cout<<"The width = "<<width(width)<<endl;
    cout<<"The area = "<<area(length, width)<<endl;
    
    //Exit stage right!
    return 0;
}

int length (int length){
    cin>>length;
    return length;
}

int width (int width){
    cin>>width;
    return width;
}

float area (int length, int width){
    return (length*width);
}
