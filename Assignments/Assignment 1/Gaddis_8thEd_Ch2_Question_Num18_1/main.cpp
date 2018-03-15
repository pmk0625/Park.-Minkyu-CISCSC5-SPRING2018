/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on March 03, 2018, 3:00 PM
 * Purpose:  Energy Drink Consumption
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
const float PERCENT=100; //Calculating Percentage

//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float   allSurv, //All Surveyed
            custBuy, //Percent of Customer that buys one or more energy drinks.
            numCust, //Number of Customers that buy one or more energy drinks.
            custCit, //Percent of Customer that prefers citrus flavor //energy drinks.
            numCit; //Number of Customers that prefers citrus flavor energy drinks.
    
    //Initialize Variables
    allSurv=16500.00; //All Surveyed are 16,500 people.
    custBuy=15/PERCENT; //15% of people buys one or more energy drinks per week.
    custCit=58/PERCENT; //58% of people likes citrus flavor.
    
    //Process/Map inputs to outputs
    numCust=allSurv*custBuy;
    numCit=numCust*custCit;
     
    //Output data
    cout<<"All Customers surveyed = "<<allSurv<<endl;
    cout<<"Number of Customers that Purchases one or More Energy drinks"
            <<"Per week = "<<numCust<<endl;
    cout<<"Number of Customers that prefers Citrus Flavor Energy Drink = "
            <<numCit<<endl;
    
    //Exit stage right!
    return 0;
}