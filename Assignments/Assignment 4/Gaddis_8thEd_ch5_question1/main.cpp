/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 1, 2018, 7:40 PM
 * Purpose:  Sum of Numbers
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int posNum;
 
    //Initialize Variables
    cout<<" Input a positive number"<<endl;
    cin>>posNum;
    int sum=0;
    
    //Process/Map inputs to outputs
    for (int i=1; i<=posNum; i++){
        sum += i;
        cout<<sum<<endl;
    }
    
    //Output data
    
    //Exit stage right!
    return 0;
}