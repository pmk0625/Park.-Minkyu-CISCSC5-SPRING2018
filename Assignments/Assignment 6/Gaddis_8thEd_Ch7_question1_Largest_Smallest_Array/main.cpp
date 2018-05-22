/* 
 * File:   main.cpp
 * Author: Minkyu R. Park
 * Created on May 17, 2018, 11:30 PM
 * Purpose:  Largest/Smallest Value
 */

//System Libraries
#include <iostream> //I/O Library
#include <iomanip>  //Format Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int small, large;
    const int number = 10;
    int n[number];
    
    //Initialize Variables
    for (int i=0; i<10; i++){
        cout<<"Enter Value"<<endl;
        cin>>n[i];
    }
    large = n[0];
    small = n[0];
    
    //Process/Map inputs to outputs
    for (int i=0; i<10; i++){
        if (n[i] > large){
            large=n[i];
        }
        else if (n[i] < small){
            small=n[i];
        }
    }
    
    //Output data
    cout<<"Largest Value = "<<large<<endl;
    cout<<"Smallest Value = "<<small<<endl;
    
    //Exit stage right!
    return 0;
}