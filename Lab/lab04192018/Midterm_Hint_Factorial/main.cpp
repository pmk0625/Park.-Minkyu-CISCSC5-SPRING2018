/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on April 19, 2018, 11:30 AM
 * Purpose:  Midterm hint: Factorial
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
    int n, factrl;
    
    //Initialize Variables
    factrl=1;
    n=6;
    
    //Process/Map inputs to outputs
    for (int i=1; i<=n ; i++){
        factrl*=i;
    }
    
    //Output data
    cout<<n<<"! = "<<factrl<<endl;
    
    //Exit stage right!
    return 0;
}