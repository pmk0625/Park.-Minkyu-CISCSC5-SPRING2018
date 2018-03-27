/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 22, 2018, 3:00 PM
 * Purpose:  Mass and Weight
 *           
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>
#include <iomanip>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int weight, mass;

    //Initial Variables
    cout<<"This program Calculates the mass and weight in Newton"<<endl;
    cout<<"Input the mass of an object in kilograms"<<endl;
    cin>>mass;
    
    //process and calculation here
    weight=mass*9.8;
  
    //Display Outputs
    cout<<"You entered "<<mass<<" kilograms"<<endl;
    cout<<"The weight of the object = "<<weight<<" newton"<<endl;
    
    if (weight < 10) {
        cout<<"The weight of the object is too light"<<endl;
    }else if (weight > 1000){
        cout<<"The weight of the object is too heavy"<<endl;
    }
    
    //Exit program!
    return 0;
}