/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 22, 2018, 1:40 PM
 * Purpose:  Body Mass Index
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
    int weight, height, bMI;

    //Initial Variables
    cout<<"This program Calculates the Body Mass Index"<<endl;
    cout<<"Input your weight in pounds"<<endl;
    cin>>weight;
    cout<<"Input your height in inches"<<endl;
    cin>>height;
    
    //process and calculation here
    bMI=(weight/(pow(height, 2.0)))*703;
  
    //Display Outputs
    cout<<"You entered "<<weight<<" lbs"<<endl;
    cout<<"You entered "<<height<<" inches^2"<<endl;
    cout<<"The Body Mass Index of you = "<<bMI<<endl;
    
    if (bMI < 18.5) {
        cout<<"You are under weight"<<endl;
    }else if (bMI > 25){
        cout<<"You are over weight"<<endl;
    }else{
        cout<<"You are Average"<<endl;
    }
    
    //Exit program!
    return 0;
}