/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on February 27, 2018, 9:00 PM
 * Purpose:  Write a program for sales prediction
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float MLLN=1e6f; //Million

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float   totSale, //Total Sales in a year
            ecpcnt, //East Coast Sales Percentage
            ecSDivS, //East Coast Sales Division sales
            etc; //Other income generated
    
    //Initialize Variables
    totSale=8.6*10e5; //Total sales are 8.6 Million $.
    ecpcnt=.58; //Percentage East Coast Sales generates.
    
    
    //Process/Map inputs to outputs
    ecSDivS=totSale*ecpcnt; //Total East Coast Sales Amount
    etc=totSale-ecSDivS; //Sales Amount made from all divisions but East Coast
    
    //Output data
    cout<<"East Coast Divison total sales = "<<ecSDivS/MLLN<<" $ Millon"<<endl;
    cout<<"Other sales made = "<<etc/MLLN<<" $ Million"<<endl;
    
    //Exit stage right!
    return 0;
}