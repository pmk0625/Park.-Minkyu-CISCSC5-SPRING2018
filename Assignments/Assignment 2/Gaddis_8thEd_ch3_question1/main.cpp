/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 12, 2018 7:00PM
 * Purpose:  Calculating Miles per Gallon
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float   m, //miles
            g, //gallons of gas
            mpg; //miles per gallons
    
    //Input or initialize values Here
    cout<<"Input the amount of gas a car can hold"<<endl;
    cin>>g;
    cout<<"Input the amount of miles it can travel"<<endl;
    cin>>m;
    
    //Process/Calculations Here
    mpg=m/g;
    
    //Output Located Here
    cout<<"The Miles of Gallon of your car = "<<mpg<<setprecision(2)<<" mpg"<<endl;

    //Exit
    return 0;
}

