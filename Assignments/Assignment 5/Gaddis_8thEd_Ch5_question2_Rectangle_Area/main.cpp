/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 19, 2018, 11:30 AM
 * Purpose:  Calculating Area of a Rectangle
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float lg(int); //Get Length
float wd(int); //Get Width
float ar(int, int, float); //Get Area

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int length, width, display;
    float area;
    
    //Initialize Variables
    cout<<"Input the length and width of the rectangle"<<endl;
    cin>>length>>width;
    
    //Process/Map inputs to outputs
    cout<<"The length = "<<lg(length)<<endl;
    cout<<"The width = "<<wd(width)<<endl;
    cout<<"The area = "<<ar(length, width, area)<<endl;
    
    //Output data
    
    //Exit stage right!
    return 0;
}

float lg (int length){
    return length;
}

float wd (int width){
    return width;
}

float ar (int length, int width, float area){
    return area=(length*width);
}
